#include "editpassword1.h"
#include "ui_editpassword1.h"
#include"absuser1.h"
#include<QMessageBox>

editpassword1::editpassword1(adminwindow*parent,AbstractUser*pAbsuser) :
    parent(parent),pAbsuser(pAbsuser),
    ui(new Ui::editpassword1)
{
    ui->setupUi(this);
    ui->lId->setText(pAbsuser->id);
    ui->lpassword->setText(pAbsuser->password);
    connect(ui->bOk,SIGNAL(clicked()),this,SLOT(sendInfo()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));
}
void editpassword1::sendInfo(){
    newPassword=ui->lpassword->text();
    if(newPassword.length()<6||newPassword.length()>15)
       { QMessageBox msg;
        msg.setText(QStringLiteral("输入新密码需要在6-15位间"));
        msg.exec();return;}
    pAbsuser->password=newPassword;
    QMessageBox msg;
    msg.setText(QStringLiteral("修改信息成功！"));
    msg.exec();
    parent->cusShow();
    parent->cookShow();
    parent->waiterShow();
    this->close();
}
editpassword1::~editpassword1()
{
    delete ui;
}
