#include "cookwindow.h"
#include "ui_cookwindow.h"
#include"dish.h"
#include"qmessagebox.h"
extern QList<Dish>TodoList;
extern QVector<Customer>customerList;
cookwindow::cookwindow(loginwindow *parent,Cook*pCook) :parent(parent),pCook(pCook),
     ui(new Ui::cookwindow)
{
    ui->setupUi(this);
    showTodoList();
    showmyList();
    connect(ui->bRefresh1,SIGNAL(clicked()),this,SLOT(showTodoList()));//显示所有未做菜品
    connect(ui->bAdd,SIGNAL(clicked()),this,SLOT(triggerAdd()));//添加到我的任务
    connect(ui->bComplete,SIGNAL(clicked()),this,SLOT(triggerComplete()));//完成任务
    connect(ui->bRefresh2,SIGNAL(clicked()),this,SLOT(showmyComList()));//显示所有已完成任务
    connect(ui->bLogout,SIGNAL(clicked()),this,SLOT(logout()));//退出登录
    connect(ui->bExit,SIGNAL(clicked()),this,SLOT(exitProgram()));//退出系统
}
cookwindow::~cookwindow()
{
    delete ui;
}
void cookwindow::showTodoList(){//显示所有未做菜品
    dList.clear();
    ui->tdTable->clear();
    ui->tdTable->setColumnCount(3);
    ui->tdTable->setRowCount(0);
    ui->tdTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->tdTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->tdTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品状态")) );
    ui->tdTable->setColumnWidth(0,320);
    ui->tdTable->setColumnWidth(1,320);
    ui->tdTable->setColumnWidth(2,320);
    for(int i=0;i<TodoList.size();i++)
        if(TodoList[i].getDstate()==ordered)
              dList.push_back(&TodoList[i]);
     for(int i=0;i<dList.size();i++)
    {ui->tdTable->setRowCount(i+1);
     ui->tdTable->setItem(i,0,new QTableWidgetItem(dList[i]->showName()));
     ui->tdTable->setItem(i,1,new QTableWidgetItem(dList[i]->showDtype()));
     ui->tdTable->setItem(i,2,new QTableWidgetItem(dList[i]->showDstate()));  }
    return;
}
void cookwindow::triggerAdd(){//添加到我的任务,同时菜的状态改变
    int row=ui->tdTable->currentRow();
    if(row<0){QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何菜品！"));
        msg.exec();}
    else { QMessageBox msg;
          msg.setText(QStringLiteral("确定添加到我的任务么？"));
          msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
          int temp= msg.exec();
          switch (temp) {
          case QMessageBox::Yes:
                         dList[row]->DReceived();
                         dList[row]->setcookNum(pCook->getId());
                         for(int i=0;i<customerList.size();i++)
                             for(int j=0;j<customerList[i].dishList.size();j++)
                                 if(customerList[i].dishList[j].showWaterNum()==dList[row]->showWaterNum())
                                     customerList[i].dishList[j].DReceived();
                         showTodoList();
                         showmyList();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("添加任务成功！"));
                         msg2.exec();}
                         break;
          case QMessageBox::No:break;}}

}
void cookwindow::showmyList(){//显示我的任务清单
    myList.clear();
    ui->myTable->clear();
    ui->myTable->setColumnCount(3);
    ui->myTable->setRowCount(0);
    ui->myTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->myTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->myTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品状态")) );
    ui->myTable->setColumnWidth(0,320);
    ui->myTable->setColumnWidth(1,320);
    ui->myTable->setColumnWidth(2,320);
    for(int i=0;i<TodoList.size();i++)
        if(TodoList[i].getDstate()==received&&TodoList[i].showCookNum()==pCook->getId())
     myList.push_back(&TodoList[i]);
    for(int i=0;i<myList.size();i++)
     {ui->myTable->setRowCount(i+1);
     ui->myTable->setItem(i,0,new QTableWidgetItem(myList[i]->showName()));
     ui->myTable->setItem(i,1,new QTableWidgetItem(myList[i]->showDtype()));
     ui->myTable->setItem(i,2,new QTableWidgetItem(myList[i]->showDstate()));}
    return;
}
void cookwindow::triggerComplete(){
    int row=ui->myTable->currentRow();
    if(row<0) {QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何菜品！"));
            msg.exec();}
    else{ pCook->completeDish(myList[row]);
        QMessageBox msg;
        msg.setText(QStringLiteral("恭喜你已完成该任务！"));
        msg.exec();
    }
    showmyList();
    showmyComList();
    showTodoList();
}
void cookwindow::showmyComList(){
    myComList.clear();
    ui->cTable->clear();
    ui->cTable->setColumnCount(3);
    ui->cTable->setRowCount(0);
    ui->cTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->cTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->cTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品状态")) );
    ui->cTable->setColumnWidth(0,320);
    ui->cTable->setColumnWidth(1,320);
    ui->cTable->setColumnWidth(2,320);
    for(int i=0;i<TodoList.size();i++)
        if(TodoList[i].showCookNum()==pCook->getId())
           { if(TodoList[i].getDstate()==done||TodoList[i].getDstate()==served||
                    TodoList[i].getDstate()==oncomment)
       myComList.push_back(&TodoList[i]);}
     for(int i=0;i<myComList.size();i++)
    { ui->cTable->setRowCount(i+1);
     ui->cTable->setItem(i,0,new QTableWidgetItem(myComList[i]->showName()));
     ui->cTable->setItem(i,1,new QTableWidgetItem(myComList[i]->showDtype()));
     ui->cTable->setItem(i,2,new QTableWidgetItem(myComList[i]->showDstate()));  }
    return;
}
void cookwindow::logout(){//退出登录,先判断当前消费金额是否归零
    /*if(!pCook->myList.isEmpty() )
       { QMessageBox msg;
         msg.setText(QStringLiteral("您尚未完成当前任务！"));
         QPushButton* bOk=msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
        msg.exec();}
   else*/{this->close();
        parent->show();
        parent->ui->lPassword->clear();
        return;}
}
void cookwindow::exitProgram(){
    showmyList();
    if(!myList.isEmpty())
       { QMessageBox msg;
         msg.setText(QStringLiteral("您尚未完成当前任务！"));
         QPushButton* bOk=msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
        msg.exec();}
    else{
    QMessageBox msgBox;
    msgBox.setFixedWidth(500);
    msgBox.setText(QStringLiteral("您确定要退出系统吗？"));
    msgBox.setInformativeText("请确认数据已保存");
    QPushButton *bYes=msgBox.addButton(QStringLiteral("是"),QMessageBox::ButtonRole::NoRole);
    QPushButton *bNo=msgBox.addButton(QStringLiteral("否"),QMessageBox::ButtonRole::NoRole);
    connect(bYes,SIGNAL(clicked()),&msgBox,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(save()));
    connect(bNo,SIGNAL(clicked()),&msgBox,SLOT(close()));
    msgBox.exec();}
}
void cookwindow::save(){
    myDatabase DataBase;
    DataBase.memory();
}
