#include "addid.h"
#include "ui_addid.h"
#include<QMessageBox>
extern QVector<Waiter>waiterList;
extern QVector<Cook>cookList;
addid::addid(adminwindow *parent) :
    parent(parent),
    ui(new Ui::addid)
{
    ui->setupUi(this);
    connect(ui->bOk,SIGNAL(clicked()),this,SLOT(sendInfo()));
    connect(ui->bCancel,SIGNAL(clicked()),this,SLOT(close()));
}

addid::~addid()
{
    delete ui;
}
void addid::sendInfo(){
    temp=ui->lId->text() ;
    if(ui->lId->text()=="")
       { QMessageBox msg;
        msg.setText(QStringLiteral("工作证号不能为空！"));
        msg.exec();return;}
    if(parent->getType()==1)
       {if(!temp.startsWith("2016011")||!(temp.length()==10) )
             {QMessageBox msg;
              msg.setText(QStringLiteral("厨师工作证号不合法！"));
              msg.exec();return;}
        for(int i=0;i<cookList.size();i++)
            if(temp==cookList[i].getId())
            {QMessageBox msg;
                msg.setText(QStringLiteral("该厨师已存在！"));
                msg.exec();return;}
        Cook newCook(temp,"");
        cookList.append(newCook);
        QMessageBox msg;
        msg.setText(QStringLiteral("添加信息成功！"));
        msg.exec();
        parent->cookShow();
    }
    if(parent->getType()==2)
       {if(!(temp.startsWith("2016012"))||!temp.length()==10 )
             {QMessageBox msg;
              msg.setText(QStringLiteral("服务员工作证号不合法！"));
              msg.exec();return;}
        for(int i=0;i<waiterList.size();i++)
            if(temp==waiterList[i].getId())
            {QMessageBox msg;
                msg.setText(QStringLiteral("该服务员已存在！"));
                msg.exec();return;}
        Waiter newWaiter(temp,"");
        waiterList.append(newWaiter);
        QMessageBox msg;
        msg.setText(QStringLiteral("添加信息成功！"));
        msg.exec();
        parent->waiterShow();
    }
    this->close();
}
