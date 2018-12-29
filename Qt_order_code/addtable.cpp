#include "addtable.h"
#include "ui_addtable.h"
#include<QMessageBox>
extern QVector<Table>tableList;
addtable::addtable(adminwindow *parent) :
    parent(parent),
    ui(new Ui::addtable)
{
    ui->setupUi(this);
    connect(ui->bOk,SIGNAL(clicked()),this,SLOT(sendInfo()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));
}

addtable::~addtable()
{
    delete ui;
}
void addtable::sendInfo(){
    newNum=ui->lnum->text();
    int temp=ui->ctype->currentIndex();
    switch (temp) {
    case 1:newType1=QStringLiteral("两人桌");;break;//two,four,six};//餐桌的类型:两人桌，四人桌，六人桌
    case 2:newType1=QStringLiteral("四人桌");break;
    case 3:newType1=QStringLiteral("六人桌");break;
    default://系管没有资格增加新的桌子类型
        break;
    }
    if(ui->lnum->text()=="")
       { QMessageBox msg;
        msg.setText(QStringLiteral("桌号不能为空！"));
        msg.exec();return;}
    if(ui->ctype->currentIndex()==0)
       { QMessageBox msg;
        msg.setText(QStringLiteral("未选择桌子类型！"));
        msg.exec();return;}
    for(int i=0;i<tableList.size();i++)
        if(newNum==tableList[i].showNum())
        {QMessageBox msg;
            msg.setText(QStringLiteral("该桌号已存在！"));
            msg.exec();return;
        }
    Table newTable(newNum,newType1);
    tableList.append(newTable);
    QMessageBox msg;
    msg.setText(QStringLiteral("添加信息成功！"));
    msg.exec();
    parent->tableShow();
    this->close();
}
