#include "wcomment.h"
#include "ui_wcomment.h"
#include<QMessageBox>
wcomment::wcomment(MainWindow*w1,Table*pTable) :w1(w1),pTable(pTable),
    ui(new Ui::wcomment)
{
    ui->setupUi(this);
    connect(ui->bSubmit,SIGNAL(clicked()),this,SLOT(submit()));//评价5分
}

wcomment::~wcomment()
{
    delete ui;
}
void wcomment::submit(){
    if(pTable->showWaiterComment()!="")
    {QMessageBox msg;
        msg.setText(QStringLiteral("您已评价！"));
        msg.exec();
        this->close();return; }
    QString temp=ui->ltext->text();
    pTable->setWaiterComment(temp);
    QMessageBox msg;
    msg.setText(QStringLiteral("评价成功！"));
    msg.exec();
   this->close();
}
