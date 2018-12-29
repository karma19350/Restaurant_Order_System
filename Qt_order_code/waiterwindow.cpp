#include "waiterwindow.h"
#include "ui_waiterwindow.h"
#include"qmessagebox.h"
#include"loginwindow.h"
extern QVector<Table>tableList;
extern QList<Dish>TodoList;
extern QVector<Customer>customerList;
namespace Ui {
class waiterwindow;
}
class MainWindow;
waiterwindow::waiterwindow(loginwindow *parent,Waiter*pWaiter):
    parent(parent),pWaiter(pWaiter),
    ui(new Ui::waiterwindow)
{
    ui->setupUi(this);
    pWaiter->setParent(this);
    showTable();
    showDish();
    showReq();
    connect(ui->bRefresh1,SIGNAL(clicked()),this,SLOT(showTable()));//显示未有人照料的座位
    connect(ui->bRefresh2,SIGNAL(clicked()),this,SLOT(showReq()));//显示顾客需求
    connect(ui->bRefresh3,SIGNAL(clicked()),this,SLOT(showDish()));//显示做好菜的信息
    connect(ui->bAdd,SIGNAL(clicked()),this,SLOT(triggerAdd()));//添加到”我的照看”
    connect(ui->bDeal,SIGNAL(clicked()),this,SLOT(triggerDeal()));//处理用户需求
    connect(ui->bGetDish,SIGNAL(clicked()),this,SLOT(triggerGetDish()));//前去端菜
    connect(ui->bLogout,SIGNAL(clicked()),this,SLOT(logout()));//退出登录
    connect(ui->bExit,SIGNAL(clicked()),this,SLOT(exitProgram()));//退出系统
}

waiterwindow::~waiterwindow()
{
    delete ui;
}
Table* waiterwindow::getTable(int row){
    return tList[row];
}
void waiterwindow::showTable(){
    tList.clear();
    ui->tTable->clear();
    ui->tTable->setColumnCount(3);
    ui->tTable->setRowCount(0);
    ui->tTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("桌号")) );
    ui->tTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("桌子状态")) );
    ui->tTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("服务员工作证号")) );
    ui->tTable->setColumnWidth(0,200);
    ui->tTable->setColumnWidth(1,260);
    ui->tTable->setColumnWidth(2,500);
    for(int i=0;i<tableList.size();i++)
     tList.append(&tableList[i]);
     for(int i=0;i<tList.size();i++)
      {ui->tTable->setRowCount(i+1);
       ui->tTable->setItem(i,0,new QTableWidgetItem(tList[i]->showNum()));
       ui->tTable->setItem(i,1,new QTableWidgetItem(tList[i]->showtState()));
       ui->tTable->setItem(i,2,new QTableWidgetItem(tList[i]->showWaiterNum()));}
}
void waiterwindow::triggerAdd(){
    int row=ui->tTable->currentRow();
    if(row>=0)
    {pWaiter->addTable(getTable(row));
    showTable();}
    else{QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何餐桌！"));
        msg.exec();
    }
}
void waiterwindow::showReq(){
    pWaiter->getMsg();
    ui->rTable->clear();
    ui->rTable->setColumnCount(2);
    ui->rTable->setRowCount(0);
    ui->rTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("桌号")) );
    ui->rTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("顾客消息")) );
    ui->rTable->setColumnWidth(0,200);
    ui->rTable->setColumnWidth(1,760);
    for(int i=0;i<pWaiter->myMsgList.size();i++)
    {ui->rTable->setRowCount(i+1);
     ui->rTable->setItem(i,0,new QTableWidgetItem(pWaiter->myMsgList[i].tableNum));
     ui->rTable->setItem(i,1,new QTableWidgetItem(pWaiter->myMsgList[i].Request));}
    return;
}
void waiterwindow::triggerDeal(){
    int row=ui->rTable->currentRow();
    if(row>=0)
    {pWaiter->dealTable(row);
    showReq();}
    else{QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何消息！"));
        msg.exec();}
}
void waiterwindow::showDish(){
    pWaiter->getDMsg();
    ui->msgTable->clear();
    ui->msgTable->setColumnCount(2);
    ui->msgTable->setRowCount(0);
    ui->msgTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("待上菜桌号")) );
    ui->msgTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("已做好菜品名称")) );
    ui->msgTable->setColumnWidth(0,200);
    ui->msgTable->setColumnWidth(1,760);
    for(int i=0;i<pWaiter->myDMsgList.size();i++)
    {ui->msgTable->setRowCount(i+1);
     ui->msgTable->setItem(i,0,new QTableWidgetItem(pWaiter->myDMsgList[i].tableNum));
     ui->msgTable->setItem(i,1,new QTableWidgetItem(pWaiter->myDMsgList[i].dishName));}
    return;
}
void waiterwindow::triggerGetDish(){
    int row=ui->msgTable->currentRow();
    if(row>=0)
    {QString tempNum=pWaiter->myDMsgList[row].tableNum;
     QString tempDish=pWaiter->myDMsgList[row].dishName;
     for(int i=0;i<TodoList.size();i++)
         if(TodoList[i].showTableNum()==tempNum&&TodoList[i].showName()==tempDish
                 &&TodoList[i].getDstate()==done)
                 {TodoList[i].DServed();
                  for(int j=0;j<customerList.size();j++)
                      for(int k=0;k<customerList[j].dishList.size();k++)
                    if(customerList[j].dishList[k].showWaterNum()==TodoList[i].showWaterNum())
                        customerList[j].dishList[k].DServed();
            }
        pWaiter->myDMsgList.removeAt(row);
        showDish();
     }
    else {
        QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何消息！"));
        msg.exec();
    }
}
void waiterwindow::logout(){//退出登录
    this->close();
    parent->show();
    parent->ui->lPassword->clear();
    return;}

void waiterwindow::exitProgram(){//退出系统，先判断是否有顾客需要服务归零
    if(!pWaiter->myTList.isEmpty())
       { QMessageBox msg;
         msg.setText(QStringLiteral("您尚有顾客需要服务！"));
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
    connect(bYes,SIGNAL(clicked()),this,SLOT(logout1()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(save()));
    connect(bNo,SIGNAL(clicked()),&msgBox,SLOT(close()));
    msgBox.exec();}
}
void waiterwindow::logout1(){
    pWaiter->Wlogout();
}
void waiterwindow::save(){
    myDatabase DataBase;
    DataBase.memory();
}
