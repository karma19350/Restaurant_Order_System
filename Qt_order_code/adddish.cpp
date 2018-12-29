#include "adddish.h"
#include "ui_adddish.h"
#include<QMessageBox>
extern QVector<Dish>Menu;
adddish::adddish(adminwindow *parent) :
    parent(parent),
    ui(new Ui::adddish)
{
    ui->setupUi(this);
    connect(ui->bOk,SIGNAL(clicked()),this,SLOT(sendInfo()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));
}

adddish::~adddish()
{
    delete ui;
}
void adddish::sendInfo(){
    newName=ui->lname->text();
    newPrice=ui->lmoney->text().toInt();
    int temp=ui->ctype->currentIndex();
    switch (temp) {
    case 1:newType1=QStringLiteral("蒸包类");break;//{Z,J,V,C,F,T};/*蒸包类，煎焗类，蔬菜类，肠粉类，饭粥类，甜品类*/
    case 2:newType1=QStringLiteral("煎焗类");break;
    case 3:newType1=QStringLiteral("蔬菜类");break;
    case 4:newType1=QStringLiteral("肠粉类");break;
    case 5:newType1=QStringLiteral("饭粥类");break;
    case 6:newType1=QStringLiteral("甜品类");break;
    default://甜品类，系管没有资格增加新的菜品
        break;
    }
    if(ui->lname->text()=="")
       { QMessageBox msg;
        msg.setText(QStringLiteral("菜品名称不能为空！"));
        msg.exec();return;}
    if(ui->lmoney->text()=="")
       { QMessageBox msg;
        msg.setText(QStringLiteral("尚未输入商品价格！"));
        msg.exec();return;}
    if(newPrice<=0)
       { QMessageBox msg;
        msg.setText(QStringLiteral("商品价格不合法！"));
        msg.exec();return;}
    if(ui->ctype->currentIndex()==0)
       { QMessageBox msg;
        msg.setText(QStringLiteral("未选择商品种类！"));
        msg.exec();return;}
    for(int i=0;i<Menu.size();i++)
        if(newName==Menu[i].showName())
        {QMessageBox msg;
            msg.setText(QStringLiteral("该菜品已存在！"));
            msg.exec();return;
        }
    Dish newDish(newName,newPrice,0,newType1,0);
    Menu.append(newDish);
    QMessageBox msg;
    msg.setText(QStringLiteral("添加信息成功！"));
    msg.exec();
    parent->dishShow();
    this->close();
}
