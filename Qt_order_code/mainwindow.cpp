#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"qmessagebox.h"
#include"qtablewidget.h"
#include"customer.h"
#include"dish.h"
#include"qwidget.h"
#include<QString>
#include"table.h"
#include<QVector>
#include<QList>
using namespace std;
extern QList<Dishmsg>DishmsgList;//所有的菜品完成信息
extern QList<Reqmsg>RMsgList;//所有的催菜等需求信息，可以反映服务质量以及是否需要扩容
extern QVector<Dish> Menu;
extern QVector<Table>tableList;
extern QVector<Customer> customerList;
extern QList<Dish> TodoList;
extern QVector<Waiter>waiterList;
MainWindow::MainWindow(loginwindow *parent,Customer*pCustomer) :
    parent(parent),pCustomer(pCustomer),w1(NULL),
     ui(new Ui::MainWindow)
{
   // w1=NULL;pTable=NULL;
    ui->setupUi(this);
    ui->lFull->hide();
    pCustomer->setParent(this);
    if(pCustomer->getTable()!=NULL)//判断顾客是否为二次登陆，判断顾客上次是否已就座
       {ui->lTablenum->setText(pCustomer->showTableNum());
        ui->bWater->setEnabled(true);
        ui->bAdd->setEnabled(true);
        ui->bComwaiter->setEnabled(true);}
    if(!pCustomer->dishList.isEmpty())//判断二次登陆状态，顾客是否已点餐
    {
        ui->lTotal->setText(QString::number(pCustomer->showcurAmount()));//添加菜品的同时可见当前消费额度
        showDish();
        ui->bDelete->setEnabled(true);
        ui->bSend->setEnabled(true);
        for(int i=0;i<pCustomer->dishList.size();i++)//判断顾客此前是否已下单，顾客的状态决定了TA能进行的操作
            if(pCustomer->dishList[i].getDstate()!=none)
               { ui->bUrge->setEnabled(true);
                ui->bComdish->setEnabled(true);
                ui->bPay->setEnabled(true);
                break;}
    }
    triggerShow();
    showDish();
    showTable();
    connect(ui->bRefresh,SIGNAL(clicked()),this,SLOT(showTable()));//显示座位
    connect(ui->bSit,SIGNAL(clicked()),this,SLOT(triggerSit()));//就座
    //connect(ui->bUrge,SIGNAL(clicked()),this,SLOT(showDish()));//显示我的食物餐盘
    connect(ui->bMyRefresh,SIGNAL(clicked()),this,SLOT(showDish()));//刷新我的食物餐盘
    connect(ui->bLogout,SIGNAL(clicked()),this,SLOT(logout()));//退出登录
    connect(ui->bExit,SIGNAL(clicked()),this,SLOT(exitProgram()));//退出系统
    connect(ui->bQuery,SIGNAL(clicked()),this,SLOT(triggerQuery()));//查询菜品
    connect(ui->bPay,SIGNAL(clicked()),this,SLOT(triggerPay()));//付款结账
    connect(ui->bAdd,SIGNAL(clicked()),this,SLOT(triggerAdd()));//添加到食物托盘
    connect(ui->bDelete,SIGNAL(clicked()),this,SLOT(triggerDelete()));//删除菜品
    connect(ui->bShow,SIGNAL(clicked()),this,SLOT(triggerShow()));//显示全部菜单
    connect(ui->bSend,SIGNAL(clicked()),this,SLOT(triggerSend()));//提交菜单
    connect(ui->bUrge,SIGNAL(clicked()),this,SLOT(triggerUrge()));//催菜
    connect(ui->bComdish,SIGNAL(clicked()),this,SLOT(commentOnDish()));//评价菜品
    connect(ui->bComwaiter,SIGNAL(clicked()),this,SLOT(commentOnWaiter()));//评价服务员
    connect(ui->bWater,SIGNAL(clicked()),this,SLOT(triggerWater()));//加水
    //connect(ui->bLeave,SIGNAL(clicked()),this,SLOT(leave()));//用餐结束，用于释放桌椅迎接下面的顾客
}
MainWindow::~MainWindow()
{
    delete ui;
}

Dish* MainWindow::getDish(int row){//将所指的菜品行数转化为指针
    return mList[row];
}
Table* MainWindow::getTable(int row){//将所指的桌子行数转化为指针
    return tList[row];
}
/*void MainWindow::linkTable(Table*newTable){//顾客入座后让界面与桌子挂钩
    pTable=newTable;
}*/
void MainWindow::showTable(){//显示所有空余桌子，如果满座，顾客只能看菜单而不能享受其他服务
   // for(int i=tList.size()-1;i>=0;i--)
        //delete tList[i];
    tList.clear();
    ui->tTable->clear();
    ui->tTable->setColumnCount(3);
    ui->tTable->setRowCount(0);
    ui->tTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("桌号")) );
    ui->tTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("桌子类型")) );
    ui->tTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("桌子状态")) );
    ui->tTable->setColumnWidth(0,250);
    ui->tTable->setColumnWidth(1,450);
    ui->tTable->setColumnWidth(2,450);
    int count=0;
    for(int i=0;i<tableList.size();i++)
    {if(tableList[i].gettState()==empty)
          { tList.push_back(&tableList[i]);
            count++;}}
    if(count==0&&pCustomer->getTable()==NULL){ui->lFull->show();
        ui->bAdd->setEnabled(false);
        ui->bComdish->setEnabled(false);
        ui->bComwaiter->setEnabled(false);
        ui->bDelete->setEnabled(false);
        ui->bPay->setEnabled(false);
        ui->bSend->setEnabled(false);
        ui->bSit->setEnabled(false);
        ui->bUrge->setEnabled(false);
        ui->bWater->setEnabled(false);
    }
    else {//ui->bAdd->setEnabled(true);
       // ui->bDelete->setEnabled(true);
        //ui->bSend->setEnabled(true);
        ui->bSit->setEnabled(true);
        //ui->bWater->setEnabled(true);
        for(int i=0;i<tList.size();i++)
          {ui->tTable->setRowCount(i+1);
          ui->tTable->setItem(i,0,new QTableWidgetItem(tList[i]->showNum()));
          ui->tTable->setItem(i,1,new QTableWidgetItem(tList[i]->showtType()));
          ui->tTable->setItem(i,2,new QTableWidgetItem(tList[i]->showtState()));} }
        return;
}

void MainWindow::triggerQuery(){//查询菜品名称
    if(ui->lQuery->text()==""){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入菜品名称！"));
        msg.exec();
        return;}
    mList.clear();
    ui->mTable->clear();
    ui->mTable->setColumnCount(4);
    ui->mTable->setRowCount(0);
    ui->mTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->mTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->mTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
    ui->mTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品评价")) );
    ui->mTable->setColumnWidth(0,280);
    ui->mTable->setColumnWidth(1,280);
    ui->mTable->setColumnWidth(2,280);
    ui->mTable->setColumnWidth(3,380);
    QString temp=ui->lQuery->text();
    int count=0;
    for(int i=0;i<Menu.size();i++)
    if(Menu[i].showName()==temp)
          { mList.append(&Menu[i]);
            count++;}
    if(count==0){QMessageBox msg;
                msg.setText(QStringLiteral("您所查找的菜品不存在！"));
                msg.exec();
                return;}
    else for(int i=0;i<mList.size();i++)
                {ui->mTable->setRowCount(i+1);
                ui->mTable->setItem(i,0,new QTableWidgetItem(mList[i]->showName()));
                ui->mTable->setItem(i,1,new QTableWidgetItem(mList[i]->showDtype()));
                ui->mTable->setItem(i,2,new QTableWidgetItem(mList[i]->showPrice()));
                ui->mTable->setItem(i,3,new QTableWidgetItem(mList[i]->showComment()));
                return;}
}

void MainWindow::triggerShow(){//全部菜单
    mList.clear();
   ui->lQuery->clear();
   ui->mTable->clear();
   ui->mTable->setColumnCount(4);
   ui->mTable->setRowCount(0);
   ui->mTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
   ui->mTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
   ui->mTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
   ui->mTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品评价")) );
   ui->mTable->setColumnWidth(0,280);
   ui->mTable->setColumnWidth(1,280);
   ui->mTable->setColumnWidth(2,280);
   ui->mTable->setColumnWidth(3,380);
   for(int i=0;i<Menu.size();i++)
   {mList.push_back(&Menu[i]);
   ui->mTable->setRowCount(i+1);
   ui->mTable->setItem(i,0,new QTableWidgetItem(Menu[i].showName()));
   ui->mTable->setItem(i,1,new QTableWidgetItem(Menu[i].showDtype()));
   ui->mTable->setItem(i,2,new QTableWidgetItem(Menu[i].showPrice()));
   ui->mTable->setItem(i,3,new QTableWidgetItem(Menu[i].showComment()));}
   return;
}
void MainWindow::logout(){//退出登录
        this->close();
        parent->show();
        parent->ui->lPassword->clear();
        return;}

void MainWindow::exitProgram(){//退出系统
    if(pCustomer->showcurAmount()!=0)
       { QMessageBox msg;
         msg.setText(QStringLiteral("您尚未结账！"));
         QPushButton* bOk=msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
        msg.exec();
        return;}
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
    msgBox.exec();
    return;}
}
void MainWindow::save(){
    myDatabase DataBase;
    DataBase.memory();
}
void MainWindow::leave(){//结束本次用餐
    for(int i=0;i<pCustomer->dishList.size();i++)
       for(int j=0;j<Menu.size();j++)
         if(pCustomer->dishList[i].showName()==Menu[j].showName())
           {Menu[j].addSellNum();
          if(pCustomer->dishList[i].getComment()==5)
              Menu[j].Dcomment5();
          if(pCustomer->dishList[i].getComment()==4)
              Menu[j].Dcomment4();
          if(pCustomer->dishList[i].getComment()==3)
              Menu[j].Dcomment3();
          if(pCustomer->dishList[i].getComment()==2)
              Menu[j].Dcomment2();
          if(pCustomer->dishList[i].getComment()==1)
              Menu[j].Dcomment1();}
   //pCustomer->curAmountClear();
    ui->lTotal->setText("");
    pCustomer->Clogout();
    this->close();
    parent->show();
    parent->ui->lPassword->clear();
    return;}

void MainWindow::showDish(){//我的食物托盘
    dList.clear();
    ui->dTable->clear();
    ui->dTable->setColumnCount(4);
    ui->dTable->setRowCount(0);
    ui->dTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->dTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->dTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
    ui->dTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品状态")) );
    ui->dTable->setColumnWidth(0,280);
    ui->dTable->setColumnWidth(1,280);
    ui->dTable->setColumnWidth(2,240);
    ui->dTable->setColumnWidth(3,360);
    for(int i=0;i<pCustomer->dishList.size();i++)
    {dList.push_back(&pCustomer->dishList[i]);
     ui->dTable->setRowCount(i+1);
     ui->dTable->setItem(i,0,new QTableWidgetItem(dList[i]->showName()));
     ui->dTable->setItem(i,1,new QTableWidgetItem(dList[i]->showDtype()));
     ui->dTable->setItem(i,2,new QTableWidgetItem(dList[i]->showPrice()));
     ui->dTable->setItem(i,3,new QTableWidgetItem(dList[i]->showDstate()));}
    return;
}
void MainWindow::triggerAdd(){
    int row=ui->mTable->currentRow();
    if(row>=0)
    {pCustomer->addDish(getDish(row));
    ui->lTotal->setText(QString::number(pCustomer->showcurAmount()));//添加菜品的同时可见当前消费额度
    showDish();
    ui->bDelete->setEnabled(true);
    ui->bSend->setEnabled(true);
    QMessageBox msg;
    msg.setText(QStringLiteral("已添加到我的食物托盘！"));
    msg.exec();
    return;}
    else {QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何菜品！"));
        msg.exec();
        return; }
}
void MainWindow::triggerDelete(){
    int row=ui->dTable->currentRow();
    if(row<0) {QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何菜品！"));
            msg.exec();}
    else {if(dList[row]->getDstate()!=none)
          { QMessageBox msg;
            msg.setText(QStringLiteral("您已提交该菜品，请您耐心等待！"));
            msg.exec();return;}
       else {pCustomer->delDish(row);
        showDish();
        ui->lTotal->setText(QString::number(pCustomer->showcurAmount()));}}
}

void MainWindow::triggerSit(){//选座入座
    if(pCustomer->getTable()!=NULL)
     {QMessageBox msg;
      msg.setText(QStringLiteral("您已就座！"));
      msg.exec();
      return;}
    int row=ui->tTable->currentRow();
    if(row>=0){pCustomer->setTable(getTable(row));
              pCustomer->getTable()->Tunattended();
              ui->lTablenum->setText(pCustomer->showTableNum());
              ui->bWater->setEnabled(true);
              ui->bAdd->setEnabled(true);
              ui->bComwaiter->setEnabled(true);
              QMessageBox msg;
              msg.setText(QStringLiteral("您已成功就座！"));
              msg.exec();
              showTable();
              return;}
     else{QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何座位！"));
        msg.exec();
        return;}  
}
void MainWindow::triggerSend(){//触发提交菜单操作
    QMessageBox msg;
    msg.setFixedWidth(500);
    msg.setText(QStringLiteral("确定提交订单么？"));
    QPushButton *bYes=msg.addButton(QStringLiteral("确认"),QMessageBox::ButtonRole::NoRole);
    QPushButton *bNo=msg.addButton(QStringLiteral("取消"),QMessageBox::ButtonRole::NoRole);
    connect(bYes,SIGNAL(clicked()),this,SLOT(sendOrder()));
    connect(bYes,SIGNAL(clicked()),&msg,SLOT(close()));
    connect(bNo,SIGNAL(clicked()),&msg,SLOT(close()));
    msg.exec();
}
void MainWindow::sendOrder(){//提交菜单,未完成总任务增加,菜的状态改变,由判断语句可以实现顾客的任意时刻加菜，而且不会重复加菜
    int i;
    for(i=0;i<pCustomer->dishList.size();i++)
    { if(pCustomer->dishList[i].getDstate()==none)
           {pCustomer->dishList[i].DOrdered();
            pCustomer->dishList[i].settablNum(pCustomer->getTableNum());
            TodoList.append((pCustomer->dishList[i]));
            int count=TodoList.size();
            pCustomer->dishList[i].setwaterNum(count);
            TodoList[count-1].setwaterNum(count);
           /* for(int j=0;j<Menu.size();j++)
                if(pCustomer->dishList[i].showName()==Menu[j].showName())
                Menu[j].addSellNum();*/}//菜单里的销售量在结账后再增加
    }
 ui->bUrge->setEnabled(true);
 ui->bComdish->setEnabled(true);
 ui->bPay->setEnabled(true);
 showDish();
}

void  MainWindow::triggerPay(){
 if(pCustomer->getTable()->gettState()==unattended)
    { QMessageBox msg;
        msg.setText(QStringLiteral("抱歉，尚未有服务员为您服务"));
        msg.exec();
        return;}
 for(int i=0;i<pCustomer->dishList.size();i++)
   if(pCustomer->dishList[i].getDstate()!=oncomment)
   { QMessageBox msg;
    msg.setText(QStringLiteral("您尚有菜品没有评价！"));
    msg.exec();
    return;}
if(pCustomer->getTable()->showWaiterComment()=="")
    {QMessageBox msg;
        msg.setText(QStringLiteral("您尚未评价服务员！"));
        msg.exec();
        return;}
 pCustomer->getTable()->TPay();
 pCustomer->getTable()->setMsg();
 for(int i=0;i<waiterList.size();i++)
     waiterList[i].getMsg();
QMessageBox msg;
msg.setText(QStringLiteral("请确认账单信息！"));
msg.setInformativeText(QStringLiteral("您当前消费金额为：")+QString::number(pCustomer->showcurAmount())+" "+QStringLiteral("元"));
QPushButton *bYes=msg.addButton(QStringLiteral("确认"),QMessageBox::ButtonRole::NoRole);
QPushButton *bNo=msg.addButton(QStringLiteral("取消"),QMessageBox::ButtonRole::NoRole);
connect(bYes,SIGNAL(clicked()),this,SLOT(leave()));
connect(bYes,SIGNAL(clicked()),&msg,SLOT(close()));
connect(bNo,SIGNAL(clicked()),&msg,SLOT(close()));
msg.exec();}

void MainWindow::commentOnDish(){
int row=ui->dTable->currentRow();
if(row>=0)
{w1=new dcomment(this,&(pCustomer->dishList[row]));
 w1->show();
ui->lTotal->setText(QString::number(pCustomer->showcurAmount()));
showDish();
return;}
    else {
        QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何菜品！"));
        msg.exec();}
}
void MainWindow::triggerUrge(){
  if(pCustomer->getTable()->gettState()==unattended)
  {
      QMessageBox msg;
      msg.setText(QStringLiteral("抱歉，尚未有服务员为您服务"));
      msg.exec();
      return;
  }
 int row=ui->dTable->currentRow();
 if(row>=0)
    {if(pCustomer->dishList[row].getDstate()==none)
     {
         QMessageBox msg;
         msg.setText(QStringLiteral("您尚未下单！"));
         msg.exec();
         return;
     }
     if(pCustomer->dishList[row].getDstate()==served||pCustomer->dishList[row].getDstate()==oncomment)
     {
         QMessageBox msg;
         msg.setText(QStringLiteral("该菜品已为您上菜！"));
         msg.exec();
         return;
     }
     pCustomer->getTable()->Turge();
     pCustomer->getTable()->setMsg1(&pCustomer->dishList[row]);
    //RMsgList.append(pTable->showMsg());
     QMessageBox msg;
     msg.setText(QStringLiteral("请您稍等！"));
     QPushButton* bOk=msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
     msg.exec();}
 else {
        QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何菜品！"));
        msg.exec();}
}
void MainWindow::triggerWater(){
    if(pCustomer->getTable()->gettState()==unattended)
    {
        QMessageBox msg;
        msg.setText(QStringLiteral("抱歉，尚未有服务员为您服务"));
        msg.exec();
        return;
    }
   pCustomer->getTable()->TWater();
   pCustomer->getTable()->setMsg();
   //pTable->showMsg();
   QMessageBox msg;
   msg.setText(QStringLiteral("请您稍等！"));
   //QPushButton* bOk=msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
   msg.addButton(QStringLiteral("好的"),QMessageBox::ButtonRole::NoRole);
   msg.exec();
 }
void MainWindow::commentOnWaiter(){
    if(pCustomer->getTable()->gettState()==unattended)
    {
        QMessageBox msg;
        msg.setText(QStringLiteral("抱歉，尚未有服务员为您服务"));
        msg.exec();
        return;
    }
    w2=new wcomment(this,pCustomer->getTable());
    w2->show();
}
