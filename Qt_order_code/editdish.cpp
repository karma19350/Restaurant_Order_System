#include "editdish.h"
#include "ui_editdish.h"
#include"adminwindow.h"
#include<QMessageBox>
editdish::editdish(adminwindow *parent,Dish*pDish):
    parent(parent),pDish(pDish),
    ui(new Ui::editdish)
{
    ui->setupUi(this);
    ui->lname->setText(pDish->showName());
    ui->lmoney->setText(pDish->showPrice());
    ui->ctype->setCurrentText(pDish->showDtype());
    ui->lmoney->setEnabled(false);
    ui->lname->setEnabled(false);//打开窗口，但是还不能编辑
    ui->ctype->setEnabled(false);
   /*newName=ui->lname->text();
    newPrice=ui->lmoney->text().toInt();
    int temp=ui->ctype->currentIndex();
    switch (temp) {
    case 0:newType=Z;break;{Z,J,V,C,F,T};蒸包类，煎焗类，蔬菜类，肠粉类，饭粥类，甜品类
    case 1:newType=J;break;
    case 2:newType=V;break;
    case 3:newType=C;break;
    case 4:newType=F;break;
    default:newType=T;甜品类，系管没有资格增加新的菜类
        break;
    }*/
    connect(ui->bEdit,SIGNAL(clicked()),this,SLOT(edit()));
    connect(ui->bOk,SIGNAL(clicked()),this,SLOT(sendInfo()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));

}

void editdish::edit(){//开始编辑菜品信息
    ui->lmoney->setEnabled(true);
    ui->lname->setEnabled(true);
    ui->ctype->setEnabled(true);
}
void editdish::sendInfo(){
    newName=ui->lname->text();
    newPrice=ui->lmoney->text().toInt();
    int temp=ui->ctype->currentIndex();
    switch (temp) {
    case 0:newType=Z;newType1=QStringLiteral("蒸包类");break;//{Z,J,V,C,F,T};/*蒸包类，煎焗类，蔬菜类，肠粉类，饭粥类，甜品类*/
    case 1:newType=J;newType1=QStringLiteral("煎焗类");break;
    case 2:newType=V;newType1=QStringLiteral("蔬菜类");break;
    case 3:newType=C;newType1=QStringLiteral("肠粉类");break;
    case 4:newType=F;newType1=QStringLiteral("饭粥类");break;
    default:newType=T;newType1=QStringLiteral("甜品类");//甜品类，系管没有资格增加新的菜品
        break;
    }
    if(newName==""||newPrice<=0)
       { QMessageBox msg;
        msg.setText(QStringLiteral("输入信息不合法"));
        msg.exec();return;}
    pDish->dishName=newName;
    pDish->price=newPrice;
    pDish->Dtype=newType;
    pDish->Dtype1=newType1;
    QMessageBox msg;
    msg.setText(QStringLiteral("修改信息成功！"));
    msg.exec();
    parent->dishShow();
    this->close();
}
editdish::~editdish()
{
    delete ui;
}
