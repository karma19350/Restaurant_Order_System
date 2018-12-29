#include "loginwindow.h"
#include "ui_loginwindow.h"
#include"adminwindow.h"
#include"mainwindow.h"
#include"cookwindow.h"
#include"datawindow.h"
#include"customer.h"
#include"manager.h"
#include"admin.h"
#include"waiter.h"
#include<QMessageBox>
#include"qstring.h"
#include"mydatabase.h"
extern QVector<Customer>customerList;
extern QVector<Waiter>waiterList;
extern QVector<Cook>cookList;
extern QVector<Admin>adminList;
extern QVector<Manager>manList;
loginwindow::loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginwindow)
{
   myDatabase DataBase;
   DataBase.initialAdmin();
   DataBase.initialCook();
   DataBase.initialCustomer();
   DataBase.initialDish();
   DataBase.initialManager();
   DataBase.initialTable();
   DataBase.initialWaiter();
    w1=NULL;
    w2=NULL;
    w3=NULL;
    w4=NULL;
    w5=NULL;
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    QPalette palette=this->palette();
    palette.setBrush(QPalette::Background,
                     QBrush(QPixmap(":/images/welcome2.png").scaled(
         this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    this->setPalette(palette);
    r=new registerwindow(this);
    connect(ui->bRegister,SIGNAL(clicked(bool)),r,SLOT(show()));
    connect(ui->bRegister,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->bLogin,SIGNAL(clicked()),this,SLOT(login()));
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::login(){
    QString id=ui->lId->text();
    QString password=ui->lPassword->text();
if(password.isEmpty())
    {QMessageBox msgBox;//密码不能为空
     msgBox.setText(QStringLiteral("请输入密码！"));
     msgBox.setWindowTitle(QStringLiteral("Error！"));
     msgBox.exec();return;}
for(int i=0;i<customerList.size();i++)
      if(id==customerList[i].getId())//先从顾客列表里进行查找
           { if(customerList[i].check(password))//判断账号密码是否吻合，如果相符进入顾客界面
                {if (w1!=NULL) {delete w1; w1=NULL;}
                 if (w2!=NULL) {delete w2; w2=NULL;}
                 if (w3!=NULL) {delete w3; w3=NULL;}
                 if (w4!=NULL) {delete w4; w4=NULL;}
                 if (w5!=NULL) {delete w5; w5=NULL;}
                 w1=new MainWindow(this,&customerList[i]);
                 this->close();
                 w1->show();return;}
             else {QMessageBox msgBox;//如果不符，提示错误
                   msgBox.setText(QStringLiteral("手机号或密码错误！"));
                   msgBox.setWindowTitle(QStringLiteral("Error！"));
                   msgBox.exec();return;}}
for(int i=0;i<adminList.size();i++)//再从系管列表里进行查找，同理
          if(id==adminList[i].getId())
                   { if(adminList[i].check(password))
                    {if (w1!=NULL) {delete w1; w1=NULL;}
                     if (w2!=NULL) {delete w2; w2=NULL;}
                     if (w3!=NULL) {delete w3; w3=NULL;}
                     if (w4!=NULL) {delete w4; w4=NULL;}
                     if (w5!=NULL) {delete w5; w5=NULL;}
                     w2=new adminwindow(this,&adminList[i]);
                     this->close();
                     w2->show();return;}
                 else {QMessageBox msgBox;
                      msgBox.setText(QStringLiteral("工作证号或密码错误！"));
                      msgBox.setWindowTitle(QStringLiteral("Error！"));
                      msgBox.exec();return;}}
for(int i=0;i<cookList.size();i++)//再从厨师列表进行查找，同理
        if(id==cookList[i].getId())
                {if(cookList[i].check(password))
                    {if (w1!=NULL) {delete w1; w1=NULL;}
                     if (w2!=NULL) {delete w2; w2=NULL;}
                     if (w3!=NULL) {delete w3; w3=NULL;}
                     if (w4!=NULL) {delete w4; w4=NULL;}
                     if (w5!=NULL) {delete w5; w5=NULL;}
                     w3=new cookwindow(this,&cookList[i]);
                     this->close();
                     w3->show();return;}
                 else if(cookList[i].getPassword()=="")
                         {QMessageBox msgBox;
                            msgBox.setText(QStringLiteral("请先注册！"));
                            msgBox.setWindowTitle(QStringLiteral("Error！"));
                            msgBox.exec();return;}
                else {QMessageBox msgBox;
                msgBox.setText(QStringLiteral("工作证号或密码错误！"));
                msgBox.setWindowTitle(QStringLiteral("Error！"));
                msgBox.exec();return;}}
for(int i=0;i<waiterList.size();i++)//最后从服务员列表里进行查找，同理
           if(id==waiterList[i].getId())
                {if(waiterList[i].check(password))
                    {if (w1!=NULL) {delete w1; w1=NULL;}
                     if (w2!=NULL) {delete w2; w2=NULL;}
                     if (w3!=NULL) {delete w3; w3=NULL;}
                     if (w4!=NULL) {delete w4; w4=NULL;}
                     if (w5!=NULL) {delete w5; w5=NULL;}
                     w4=new waiterwindow(this,&waiterList[i]);
                     this->close();
                     w4->show();return;}
               else if(waiterList[i].getPassword()=="")
                     {QMessageBox msgBox;
                      msgBox.setText(QStringLiteral("请先注册！"));
                      msgBox.setWindowTitle(QStringLiteral("Error！"));
                      msgBox.exec();return;}
                 else {QMessageBox msgBox;
                      msgBox.setText(QStringLiteral("工作证号或密码错误！"));
                      msgBox.setWindowTitle(QStringLiteral("Error！"));
                      msgBox.exec();return;}}
for(int i=0;i<manList.size();i++)//最后从服务员列表里进行查找，同理
           if(id==manList[i].getId())
                {if(manList[i].check(password))
                    {if (w1!=NULL) {delete w1; w1=NULL;}
                     if (w2!=NULL) {delete w2; w2=NULL;}
                     if (w3!=NULL) {delete w3; w3=NULL;}
                     if (w4!=NULL) {delete w4; w4=NULL;}
                     if (w5!=NULL) {delete w5; w5=NULL;}
                     w5=new datawindow(this,&manList[i]);
                     this->close();
                     w5->show();return;}
                 else {QMessageBox msgBox;
                      msgBox.setText(QStringLiteral("工作证号或密码错误！"));
                      msgBox.setWindowTitle(QStringLiteral("Error！"));
                      msgBox.exec();return;}}
QMessageBox msgBox;//如果均没有找到，则提示注册信息
msgBox.setText(QStringLiteral("该用户不存在！"));
msgBox.setInformativeText(QStringLiteral("请注册信息！"));
msgBox.setWindowTitle(QStringLiteral("Error！"));
msgBox.exec();}





