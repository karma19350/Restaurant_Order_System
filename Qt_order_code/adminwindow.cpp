#include "adminwindow.h"
#include "ui_adminwindow.h"
#include"editdish.h"
#include<QMessageBox>
extern QVector<Dish> Menu;
extern QVector<Table>tableList;
extern QVector<Customer> customerList;
extern QVector<Waiter>waiterList;
extern QVector<Cook>cookList;
extern QList<Dish*>TodoList;
adminwindow::adminwindow(loginwindow*parent,Admin*pAdmin):
    parent(parent),pAdmin(pAdmin),w1(NULL),w2(NULL),w3(NULL),w4(NULL),w5(NULL),
    ui(new Ui::adminwindow)
{
    ui->setupUi(this);
    pAdmin->setParent(this);
    dishShow();
    cusShow();
    cookShow();
    waiterShow();
    tableShow();
    connect(ui->bdishQuery1,SIGNAL(clicked()),this,SLOT(dishQuery1()));//按菜名查询菜品
    connect(ui->bdishQuery2,SIGNAL(clicked()),this,SLOT(dishQuery2()));//按类别查找菜品
    connect(ui->bdishShow,SIGNAL(clicked()),this,SLOT(dishShow()));//显示所有菜品
    connect(ui->bdishEdit,SIGNAL(clicked()),this,SLOT(dishEdit()));//编辑菜品
    connect(ui->bdishAdd,SIGNAL(clicked()),this,SLOT(dishAdd()));//添加菜品
    connect(ui->bdishDel,SIGNAL(clicked()),this,SLOT(dishDel()));//删除菜品
    connect(ui->bcusShow,SIGNAL(clicked()),this,SLOT(cusShow()));//显示所有顾客
    connect(ui->bcusQuery,SIGNAL(clicked()),this,SLOT(cusQuery()));//查询顾客
    connect(ui->bcusDel,SIGNAL(clicked()),this,SLOT(cusDel()));//删除无效的顾客账号
    connect(ui->cusTable,SIGNAL(cellDoubleClicked(int, int)),this,SLOT(cusEdit(int, int)));//修改顾客密码
    connect(ui->bcookShow,SIGNAL(clicked()),this,SLOT(cookShow()));//显示所有厨师信息
    connect(ui->bcookAdd,SIGNAL(clicked()),this,SLOT(cookAdd()));//添加厨师账号
    connect(ui->bcookDel,SIGNAL(clicked()),this,SLOT(cookDel()));//删除无效的厨师账号
    connect(ui->bcookQuery,SIGNAL(clicked()),this,SLOT(cookQuery()));//查询厨师账号
    connect(ui->cookTable,SIGNAL(cellDoubleClicked(int, int)),this,SLOT(cookEdit(int, int)));//修改厨师密码
    connect(ui->bwaiterShow,SIGNAL(clicked()),this,SLOT(waiterShow()));//显示所有服务员信息
    connect(ui->bwaiterAdd,SIGNAL(clicked()),this,SLOT(waiterAdd()));//添加服务员信息
    connect(ui->bwaiterDel,SIGNAL(clicked()),this,SLOT(waiterDel()));//删除服务员信息
    connect(ui->bwaiterQuery,SIGNAL(clicked()),this,SLOT(waiterQuery()));//查询服务员账号
    connect(ui->wTable,SIGNAL(cellDoubleClicked(int, int)),this,SLOT(waiterEdit(int, int)));//修改服务员密码
    connect(ui->btableAdd,SIGNAL(clicked()),this,SLOT(tableAdd()));//添加桌子信息
    connect(ui->btableDel,SIGNAL(clicked()),this,SLOT(tableDel()));//删除桌子信息
    connect(ui->bLogout,SIGNAL(clicked()),this,SLOT(logout()));//退出登录
    connect(ui->bExit,SIGNAL(clicked()),this,SLOT(exitProgram()));//退出系统
}


adminwindow::~adminwindow()
{
    delete ui;
}
Dish* adminwindow::getDish(int row){//将所指的菜品行数转化为指针
    return mList[row];
}
int adminwindow::getType(){return type;}//显示所需添加的账号的类型
void adminwindow::dishShow(){//显示全部菜单
   ui->ldishQuery->clear();
   mList.clear();
   ui->mTable->clear();
   ui->mTable->setColumnCount(5);
   ui->mTable->setRowCount(0);
   ui->mTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
   ui->mTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
   ui->mTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
   ui->mTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品评分")) );
   ui->mTable->setHorizontalHeaderItem(4,new QTableWidgetItem(QStringLiteral("菜品销量")) );
   ui->mTable->setColumnWidth(0,240);
   ui->mTable->setColumnWidth(1,240);
   ui->mTable->setColumnWidth(2,240);
   ui->mTable->setColumnWidth(3,240);
   ui->mTable->setColumnWidth(4,240);
   for(int i=0;i<Menu.size();i++)
       mList.append(&Menu[i]);
   for(int i=0;i<mList.size();i++)
   { ui->mTable->setRowCount(i+1);
   ui->mTable->setItem(i,0,new QTableWidgetItem(mList[i]->showName()));
   ui->mTable->setItem(i,1,new QTableWidgetItem(mList[i]->showDtype()));
   ui->mTable->setItem(i,2,new QTableWidgetItem(mList[i]->showPrice()));
   ui->mTable->setItem(i,3,new QTableWidgetItem(mList[i]->showComment1()));
   ui->mTable->setItem(i,4,new QTableWidgetItem(mList[i]->showsellNum()));}
   return;
}
void adminwindow::dishQuery1(){//按名字查询菜品
    if(ui->ldishQuery->text()==""){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入菜品名称！"));
        msg.exec();
        return;}
    mList.clear();
    ui->mTable->clear();
    ui->mTable->setColumnCount(5);
    ui->mTable->setRowCount(0);
    ui->mTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->mTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->mTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
    ui->mTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品评分")) );
    ui->mTable->setHorizontalHeaderItem(4,new QTableWidgetItem(QStringLiteral("菜品销量")) );
    ui->mTable->setColumnWidth(0,240);
    ui->mTable->setColumnWidth(1,240);
    ui->mTable->setColumnWidth(2,240);
    ui->mTable->setColumnWidth(3,240);
    ui->mTable->setColumnWidth(4,240);
    QString temp=ui->ldishQuery->text();
    int count=0;
    for(int i=0;i<Menu.size();i++)
    if(Menu[i].showName()==temp)//查找子串依旧不能实现
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
                ui->mTable->setItem(i,3,new QTableWidgetItem(mList[i]->showComment1()));
                ui->mTable->setItem(i,4,new QTableWidgetItem(mList[i]->showsellNum()));}
                return;
}
void adminwindow::dishQuery2(){//按类查看菜品
    mList.clear();
    QString temp=ui->cQuery->currentText();
    ui->mTable->clear();
    ui->mTable->setColumnCount(5);
    ui->mTable->setRowCount(0);
    ui->mTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("菜品名称")) );
    ui->mTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("菜品种类")) );
    ui->mTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("菜品价格（元/份）")));
    ui->mTable->setHorizontalHeaderItem(3,new QTableWidgetItem(QStringLiteral("菜品评分")) );
    ui->mTable->setHorizontalHeaderItem(4,new QTableWidgetItem(QStringLiteral("菜品销量")) );
    ui->mTable->setColumnWidth(0,240);
    ui->mTable->setColumnWidth(1,240);
    ui->mTable->setColumnWidth(2,240);
    ui->mTable->setColumnWidth(3,240);
    ui->mTable->setColumnWidth(4,240);
    int count=0;
    for(int i=0;i<Menu.size();i++)
    if(Menu[i].showDtype()==temp)//查找子串依旧不能实现
          { mList.append(&Menu[i]);
            count++;}
    for(int i=0;i<mList.size();i++)
                   {ui->mTable->setRowCount(i+1);
                   ui->mTable->setItem(i,0,new QTableWidgetItem(mList[i]->showName()));
                   ui->mTable->setItem(i,1,new QTableWidgetItem(mList[i]->showDtype()));
                   ui->mTable->setItem(i,2,new QTableWidgetItem(mList[i]->showPrice()));
                   ui->mTable->setItem(i,3,new QTableWidgetItem(mList[i]->showComment1()));
                   ui->mTable->setItem(i,4,new QTableWidgetItem(mList[i]->showsellNum()));}
                   return;
}
void adminwindow::dishEdit(){//编辑菜品信息
    int row=ui->mTable->currentRow();
    if(row>=0)
    {w1=new editdish(this,getDish(row));
     w1->show(); dishShow();return;}
    else {QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何菜品！"));
        msg.exec();
        return; }
}
void adminwindow::dishAdd(){//添加菜品信息
    w2=new adddish(this);
    w2->show();
    return;}
void adminwindow::dishDel(){//删除菜品信息
    int row=ui->mTable->currentRow();
    if(row<0){QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何菜品！"));
            msg.exec();}
    else {int index=0;
        for(int i=0;i<Menu.size();i++)
            if( mList[row]->showName()==Menu[i].showName()){
                    index=i;break; }
    QMessageBox msg;
    msg.setText(QStringLiteral("确定删除该菜品么？"));
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int temp= msg.exec();
    switch (temp) {
   case QMessageBox::Yes:Menu.removeAt(index);
                         dishShow();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("删除菜品成功！"));
                         msg2.exec();}
                         break;
   case QMessageBox::No:break;}
}}
void adminwindow::logout(){//退出登录
        this->close();
        parent->show();
        parent->ui->lPassword->clear();
        return;}
void adminwindow::exitProgram(){//退出系统
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
void adminwindow::save(){
    myDatabase DataBase;
    DataBase.memory();
}
void adminwindow::cusShow(){//显示所有顾客信息
    ui->lcusQuery->clear();
    cusList.clear();
    ui->cusTable->clear();
    ui->cusTable->setColumnCount(3);
    ui->cusTable->setRowCount(0);
    ui->cusTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("用户手机号")) );
    ui->cusTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("用户密码")) );
    ui->cusTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("用户消费总金额")));
    ui->cusTable->setColumnWidth(0,400);
    ui->cusTable->setColumnWidth(1,400);
    ui->cusTable->setColumnWidth(2,400);
    for(int i=0;i<customerList.size();i++)
        cusList.append(&customerList[i]);
    for(int i=0;i<cusList.size();i++)
    { ui->cusTable->setRowCount(i+1);
    ui->cusTable->setItem(i,0,new QTableWidgetItem(cusList[i]->getId()));
    ui->cusTable->setItem(i,1,new QTableWidgetItem(cusList[i]->getPassword()));
    ui->cusTable->setItem(i,2,new QTableWidgetItem(QString::number(cusList[i]->totalAmount)));}
    return;
}
void adminwindow::cusQuery(){//查询某位顾客
    if(ui->lcusQuery->text()==""){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入用户手机号！"));
        msg.exec();
        return;}
    cusList.clear();
    ui->cusTable->clear();
    ui->cusTable->setColumnCount(3);
    ui->cusTable->setRowCount(0);
    ui->cusTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("用户手机号")) );
    ui->cusTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("用户密码")) );
    ui->cusTable->setHorizontalHeaderItem(2,new QTableWidgetItem(QStringLiteral("用户消费总金额")));
    ui->cusTable->setColumnWidth(0,300);
    ui->cusTable->setColumnWidth(1,300);
    ui->cusTable->setColumnWidth(2,300);
    QString temp=ui->lcusQuery->text();
    int count=0;
    for(int i=0;i<customerList.size();i++)
    if(customerList[i].showId()==temp)
          { cusList.append(&customerList[i]);
            count++;break;}
    if(count==0){QMessageBox msg;
                msg.setText(QStringLiteral("您所查找的用户不存在！"));
                msg.exec();cusShow();
                return;}
    else for(int i=0;i<cusList.size();i++)
    { ui->cusTable->setRowCount(i+1);
    ui->cusTable->setItem(i,0,new QTableWidgetItem(cusList[i]->getId()));
    ui->cusTable->setItem(i,1,new QTableWidgetItem(cusList[i]->getPassword()));
    ui->cusTable->setItem(i,2,new QTableWidgetItem(QString::number(cusList[i]->totalAmount)));}
    return;
}
void adminwindow::cusDel(){//删除长期不登录的无效顾客信息
    int row=ui->cusTable->currentRow();
    if(row<0){QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何用户账号！"));
            msg.exec();}
    else if(cusList[row]->getTable()!=NULL)
    {QMessageBox msg;
        msg.setText(QStringLiteral("该顾客正在就餐中，不能删除该账号！"));
        msg.exec();}
    else {int index=0;
        for(int i=0;i<customerList.size();i++)
            if( cusList[row]->id==customerList[i].id){
                    index=i;break; }
    QMessageBox msg;
    msg.setText(QStringLiteral("确定删除该顾客账号么？"));
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int temp= msg.exec();
    switch (temp) {
   case QMessageBox::Yes:customerList.removeAt(index);
                         dishShow();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("删除顾客账号成功！"));
                         msg2.exec();}
                         break;
   case QMessageBox::No:break;}
   cusShow();
}}
void adminwindow::cusEdit(int row,int column){//双击重置密码
   if(row>=0) {w3=new editpassword1(this,cusList[row]);
     w3->show(); cusShow();return;}
    else {QMessageBox msg;
        msg.setText(QStringLiteral("未选中任何顾客账号！"));
        msg.exec();
        return; }
}
void adminwindow::cookShow(){//显示所有厨师信息
    ui->lcookQuery->clear();
    cList.clear();
    ui->cookTable->clear();
    ui->cookTable->setColumnCount(2);
    ui->cookTable->setRowCount(0);
    ui->cookTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("厨师工作证号")) );
    ui->cookTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("厨师账号密码")) );
    ui->cookTable->setColumnWidth(0,600);
    ui->cookTable->setColumnWidth(1,600);
    for(int i=0;i<cookList.size();i++)
        cList.append(&cookList[i]);
    for(int i=0;i<cList.size();i++)
    { ui->cookTable->setRowCount(i+1);
    ui->cookTable->setItem(i,0,new QTableWidgetItem(cList[i]->getId()));
    ui->cookTable->setItem(i,1,new QTableWidgetItem(cList[i]->getPassword()));}
    return;}
void adminwindow::cookAdd(){//添加厨师账号
    type=1;
    w4=new addid(this);
    w4->show();
    return;}
void adminwindow::cookDel(){//删除厨师账号
    int row=ui->cookTable->currentRow();
    if(row<0){QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何用户账号！"));
            msg.exec();return;}
     for(int i=0;i<TodoList.size();i++)
       if(TodoList[i]->getDstate()==received&&TodoList[i]->showCookNum()==cList[row]->getId())
      {QMessageBox msg;
        msg.setText(QStringLiteral("该厨师正在工作中，不能删除该账号！"));
        msg.exec();return;}
    int index=0;
        for(int i=0;i<cookList.size();i++)
            if( cList[row]->getId()==cookList[i].getId()){
                    index=i;break; }
    QMessageBox msg;
    msg.setText(QStringLiteral("确定删除该厨师账号么？"));
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int temp= msg.exec();
    switch (temp) {
   case QMessageBox::Yes:cookList.removeAt(index);
                         dishShow();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("删除厨师账号成功！"));
                         msg2.exec();}
                         break;
   case QMessageBox::No:break;}
   cookShow();
}
void adminwindow::cookQuery(){//查询某位厨师
    if(ui->lcookQuery->text()==""){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入厨师工作证号！"));
        msg.exec();
        return;}
    cList.clear();
    ui->cookTable->clear();
    ui->cookTable->setColumnCount(2);
    ui->cookTable->setRowCount(0);
    ui->cookTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("厨师工作证号")) );
    ui->cookTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("厨师账号密码")) );
    ui->cookTable->setColumnWidth(0,600);
    ui->cookTable->setColumnWidth(1,600);
    QString temp=ui->lcookQuery->text();
    int count=0;
    for(int i=0;i<cookList.size();i++)
    if(cookList[i].getId()==temp)
          { cList.append(&cookList[i]);
            count++;break;}
    if(count==0){QMessageBox msg;
                msg.setText(QStringLiteral("您所查找的厨师不存在！"));
                msg.exec();cookShow();
                return;}
    else for(int i=0;i<cList.size();i++)
    { ui->cookTable->setRowCount(i+1);
    ui->cookTable->setItem(i,0,new QTableWidgetItem(cList[i]->getId()));
    ui->cookTable->setItem(i,1,new QTableWidgetItem(cList[i]->getPassword()));}
    return; }
void adminwindow::cookEdit(int row, int column){//双击重置密码
    if(row>=0) {Cook*pCook=cList[row];
        if(pCook->getPassword()=="")
        {QMessageBox msg;
          msg.setText(QStringLiteral("该厨师尚未注册，不能设置密码！"));
          msg.exec();
          return; }
         w3=new editpassword1(this,cList[row]);
         w3->show();return;}
     else {QMessageBox msg;
         msg.setText(QStringLiteral("未选中任何厨师账号！"));
         msg.exec();
         return; }
}
void adminwindow::waiterShow(){//显示所有服务员信息
    ui->lwaiterQuery->clear();
    wList.clear();
    ui->wTable->clear();
    ui->wTable->setColumnCount(2);
    ui->wTable->setRowCount(0);
    ui->wTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("服务员工作证号")) );
    ui->wTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("服务员账号密码")) );
    ui->wTable->setColumnWidth(0,600);
    ui->wTable->setColumnWidth(1,600);
    for(int i=0;i<waiterList.size();i++)
        wList.append(&waiterList[i]);
    for(int i=0;i<wList.size();i++)
    { ui->wTable->setRowCount(i+1);
    ui->wTable->setItem(i,0,new QTableWidgetItem(wList[i]->getId()));
    ui->wTable->setItem(i,1,new QTableWidgetItem(wList[i]->getPassword()));}
    return;
}
void adminwindow::waiterAdd(){//添加服务员账号
    type=2;
    w4=new addid(this);
    w4->show();
    return;  }
void adminwindow::waiterDel(){//删除服务员账号
    int row=ui->wTable->currentRow();
    if(row<0){QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何用户账号！"));
            msg.exec();}
    else if(!waiterList[row].myTList.isEmpty())
    {QMessageBox msg;
        msg.setText(QStringLiteral("该服务员正在工作中，不能删除该账号！"));
        msg.exec();}
    else {int index=0;
        for(int i=0;i<waiterList.size();i++)
            if( wList[row]->getId()==waiterList[i].getId()){
                    index=i;break; }
    QMessageBox msg;
    msg.setText(QStringLiteral("确定删除该服务员账号么？"));
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int temp= msg.exec();
    switch (temp) {
   case QMessageBox::Yes:waiterList.removeAt(index);
                         dishShow();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("删除服务员账号成功！"));
                         msg2.exec();}
                         break;
   case QMessageBox::No:break;}
   waiterShow();}
}
void adminwindow::waiterQuery(){//查询某位服务员
    if(ui->lwaiterQuery->text()==""){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入服务员工作证号！"));
        msg.exec();
        return;}
    wList.clear();
    ui->wTable->clear();
    ui->wTable->setColumnCount(2);
    ui->wTable->setRowCount(0);
    ui->wTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("服务员工作证号")) );
    ui->wTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("服务员账号密码")) );
    ui->wTable->setColumnWidth(0,600);
    ui->wTable->setColumnWidth(1,600);
    QString temp=ui->lwaiterQuery->text();
    int count=0;
    for(int i=0;i<waiterList.size();i++)
    if(waiterList[i].getId()==temp)
          { wList.append(&waiterList[i]);
            count++;break;}
    if(count==0){QMessageBox msg;
                msg.setText(QStringLiteral("您所查找的服务员不存在！"));
                msg.exec();waiterShow();
                return;}
    else for(int i=0;i<wList.size();i++)
    { ui->wTable->setRowCount(i+1);
    ui->wTable->setItem(i,0,new QTableWidgetItem(wList[i]->getId()));
    ui->wTable->setItem(i,1,new QTableWidgetItem(wList[i]->getPassword()));}
    return;
}
void adminwindow::waiterEdit(int row, int column){//双击重置密码
    if(row>=0) {Waiter*pWaiter=wList[row];
        if(pWaiter->getPassword()=="")
        {QMessageBox msg;
          msg.setText(QStringLiteral("该服务员尚未注册，不能设置密码！"));
          msg.exec();
          return; }
      w3=new editpassword1(this,wList[row]);
      w3->show();return;}
     else {QMessageBox msg;
         msg.setText(QStringLiteral("未选中任何服务员账号！"));
         msg.exec();
         return; }
}
void adminwindow::tableShow(){//显示所有餐桌
    tList.clear();
    ui->tTable->clear();
    ui->tTable->setColumnCount(2);
    ui->tTable->setRowCount(0);
    ui->tTable->setHorizontalHeaderItem(0,new QTableWidgetItem(QStringLiteral("桌号")) );
    ui->tTable->setHorizontalHeaderItem(1,new QTableWidgetItem(QStringLiteral("桌子类型")) );
    ui->tTable->setColumnWidth(0,200);
    ui->tTable->setColumnWidth(1,200);
    for(int i=0;i<tableList.size();i++)
        tList.append(&tableList[i]);
    for(int i=0;i<tList.size();i++)
    { ui->tTable->setRowCount(i+1);
    ui->tTable->setItem(i,0,new QTableWidgetItem(tList[i]->showNum()));
    ui->tTable->setItem(i,1,new QTableWidgetItem(tList[i]->showtType()));}
    return;
}
void adminwindow::tableAdd(){
        w5=new addtable(this);
        w5->show();
        return;}
void adminwindow::tableDel(){
    int row=ui->tTable->currentRow();
    if(row<0){QMessageBox msg;
            msg.setText(QStringLiteral("未选中任何桌子！"));
            msg.exec();}
    else if(tList[row]->gettState()!=empty)
    {QMessageBox msg;
        msg.setText(QStringLiteral("有顾客正在就餐中，不能删除该桌号！"));
        msg.exec();}
    else {int index=0;
        for(int i=0;i<tableList.size();i++)
            if( tList[row]->showNum()==tableList[i].showNum()){
                    index=i;break; }
    QMessageBox msg;
    msg.setText(QStringLiteral("确定删除该桌号么？"));
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int temp= msg.exec();
    switch (temp) {
   case QMessageBox::Yes:tableList.removeAt(index);
                         dishShow();
                         {QMessageBox msg2;
                         msg2.setText(QStringLiteral("删除桌号成功！"));
                         msg2.exec();}
                         break;
   case QMessageBox::No:break;}
   tableShow();
 }
}
