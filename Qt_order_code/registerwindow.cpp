#include "registerwindow.h"
#include "qmessagebox.h"
#include"qdebug.h"
#include"mainwindow.h"
#include"customer.h"
#include"manager.h"
#include"admin.h"
#include"waiter.h"
#include<QObject>
extern QVector<Customer>customerList;
extern QVector<Waiter>waiterList;
extern QVector<Cook>cookList;
extern QVector<Admin>adminList;
//extern Manager manager;

registerwindow::registerwindow(loginwindow*l):
    ui(new Ui::registerwindow)
{
    ui->setupUi(this);
    parent=l;
    connect(ui->bCancel,SIGNAL(clicked()),parent,SLOT(show()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bRegister,SIGNAL(clicked()),this,SLOT(sendInfo()));
}

registerwindow::~registerwindow()
{
    delete ui;
}
void registerwindow::sendInfo(){
    id=ui->lUserid->text();
    password=ui->lPassword->text();
    password2=ui->lPassword2->text();
if(check()){                             //账号密码合法，判断是否已注册
    if (id.length()==11){//判断顾客是否已注册，手机号是否有效
        for(int i=0;i<customerList.size();i++)
            if(id==customerList[i].getId())
            {QMessageBox msg;
                msg.setText(QStringLiteral("该顾客已注册！"));
                msg.setWindowTitle(QStringLiteral("Error"));
                msg.exec();return;}
        for (int i=0;i<11;i++)
          if (!id[i].isNumber())
          { QMessageBox msg;
            msg.setText(QStringLiteral("手机号无效！"));
            msg.exec();return;}//如果id是手机号检查是否均为数字
         Customer newCustomer(id,password);
         customerList.push_back(newCustomer);
         QMessageBox msg;
         msg.setText(QStringLiteral("顾客注册成功！"));
         msg.setWindowTitle(QStringLiteral("Success"));
         msg.exec();
         this->close();
         parent->show();
    }else if (id.length()==10&&id.startsWith("2016011")){int i;
                for(i=0;i<cookList.size();i++)
                   { if(id==cookList[i].getId()&&cookList[i].getPassword()!="")
                    {QMessageBox msg;
                        msg.setText(QStringLiteral("该厨师已注册！"));
                        msg.setWindowTitle(QStringLiteral("Error"));
                        msg.exec();return;}
                    if(id==cookList[i].getId()&&cookList[i].getPassword()=="")
                                {cookList[i].setPassword(password);
                                QMessageBox msg;
                                msg.setText(QStringLiteral("厨师注册成功！"));
                                msg.setWindowTitle(QStringLiteral("Success"));
                                msg.exec();
                                this->close();
                                parent->show();
                                return;}}
            if(i==cookList.size())
             {QMessageBox msg;
             msg.setText(QStringLiteral("该工作证号无效！"));
             msg.setWindowTitle(QStringLiteral("Error"));
             msg.exec(); return;}
     }else if (id.length()==10&&id.startsWith("2016012")){int i;
                for(i=0;i<waiterList.size();i++)
                   { if(id==waiterList[i].getId()&&waiterList[i].getPassword()!="")
                    {QMessageBox msg;
                        msg.setText(QStringLiteral("该服务员已注册！"));
                        msg.setWindowTitle(QStringLiteral("Error"));
                        msg.exec();return;}
                    if(id==waiterList[i].getId()&&waiterList[i].getPassword()=="")
                                {waiterList[i].setPassword(password);
                                QMessageBox msg;
                                msg.setText(QStringLiteral("服务员注册成功！"));
                                msg.setWindowTitle(QStringLiteral("Success"));
                                msg.exec();
                                this->close();
                                parent->show();
                                return;}}
                 if(i==waiterList.size())
                 {QMessageBox msg;
                 msg.setText(QStringLiteral("该工作证号无效！"));
                 msg.setWindowTitle(QStringLiteral("Error"));
                 msg.exec(); return;}
     }else{QMessageBox msg;
          msg.setText(QStringLiteral("注册信息无效！"));
          msg.setWindowTitle(QStringLiteral("Error"));
          msg.exec();
          return;}
    }else{QMessageBox msg;
    msg.setText(QStringLiteral("系统错误！"));
    msg.setWindowTitle(QStringLiteral("Error"));
    msg.exec();
    return;}
}
bool registerwindow::check(){//判断输入是否合法
    bool flag=true;
    if (password.length()<6||password.length()>15){
            QMessageBox msg;
            msg.setText(QStringLiteral("密码长度应在6至15位之间！"));
            msg.exec();
            flag=false;}
    else if (!(password2==password)) {
            QMessageBox msg;
            msg.setText(QStringLiteral("两次输入密码不同！"));
            msg.exec();
            flag=false;}
    else if(id.isEmpty())
          { QMessageBox msg;
             msg.setText(QStringLiteral("请输入手机号或工作证号！"));
             msg.exec();
             flag=false;}
    return flag;
}
