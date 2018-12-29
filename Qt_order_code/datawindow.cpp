#include "datawindow.h"
#include "ui_datawindow.h"
#include"mydatabase.h"
#include"loginwindow.h"
#include<QString>
#include<QMessageBox>
//extern myDatabase DataBase;
datawindow::datawindow(loginwindow *parent,Manager*pManager):parent(parent),pManager(pManager),
    ui(new Ui::datawindow)
{
    ui->setupUi(this);
    connect(ui->bCookShow,SIGNAL(clicked()),this,SLOT(CookShow()));//显示所有已售菜品列表
    connect(ui->bCookQuery,SIGNAL(clicked()),this,SLOT(CookQuery()));//查询某个厨师的情况
    connect(ui->bCookClear,SIGNAL(clicked()),this,SLOT(CookClear()));//清空已售菜单
    connect(ui->bWaiterShow,SIGNAL(clicked()),this,SLOT(WaiterShow()));//显示所有就餐餐桌情况
    connect(ui->bWaiterQuery,SIGNAL(clicked()),this,SLOT(WaiterQuery()));//查询某位服务员情况
    connect(ui->bWaiterClear,SIGNAL(clicked()),this,SLOT(WaiterClear()));//清空就餐情况
    connect(ui->bExit,SIGNAL(clicked()),this,SLOT(exitProgram()));//退出登录

    model1=new QSqlTableModel(this,DataBase.db);
    model1->setTable("CookComment");
    model1->select();
    model1->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->cTable->setModel(model1);
    model1->setHeaderData(0,Qt::Horizontal,tr("厨师工作证号"));
    model1->setHeaderData(1,Qt::Horizontal,tr("菜品名称"));
    model1->setHeaderData(2,Qt::Horizontal,tr("顾客评分（0~5分）"));
    ui->cTable->setColumnWidth(0,240);
    ui->cTable->setColumnWidth(1,240);
    ui->cTable->setColumnWidth(2,240);

    model2=new QSqlTableModel(this,DataBase.db);
    model2->setTable("WaiterComment");
    model2->select();
    model2->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->wTable->setModel(model2);
    model2->setHeaderData(0,Qt::Horizontal,tr("服务员工作证号"));
    model2->setHeaderData(1,Qt::Horizontal,tr("桌号"));
    model2->setHeaderData(2,Qt::Horizontal,tr("顾客服务评价"));
    model2->setHeaderData(3,Qt::Horizontal,tr("顾客消费金额"));
    ui->wTable->setColumnWidth(0,240);
    ui->wTable->setColumnWidth(1,200);
    ui->wTable->setColumnWidth(2,280);
    ui->wTable->setColumnWidth(3,240);
}
void datawindow::CookShow(){
    model1->setTable("CookComment");
   model1->select();
   model1->setHeaderData(0,Qt::Horizontal,tr("厨师工作证号"));
   model1->setHeaderData(1,Qt::Horizontal,tr("菜品名称"));
   model1->setHeaderData(2,Qt::Horizontal,tr("顾客评分（0~5分）"));
   ui->cTable->setColumnWidth(0,240);
   ui->cTable->setColumnWidth(1,240);
   ui->cTable->setColumnWidth(2,240);
   ui->lCook->clear();
}
void datawindow::CookQuery(){
    QString CookNum=ui->lCook->text();
    model1->setFilter(QString ("cookNum='%1'").arg(CookNum));
    model1->select();
    model1->setHeaderData(0,Qt::Horizontal,tr("厨师工作证号"));
    model1->setHeaderData(1,Qt::Horizontal,tr("菜品名称"));
    model1->setHeaderData(2,Qt::Horizontal,tr("顾客评分（0~5分）"));
    ui->cTable->setColumnWidth(0,240);
    ui->cTable->setColumnWidth(1,240);
    ui->cTable->setColumnWidth(2,240);
}
void datawindow::CookClear(){
    QMessageBox msgBox;
    msgBox.setFixedWidth(500);
    msgBox.setText(QStringLiteral("您确定要菜品销售记录么吗？"));
    msgBox.setInformativeText("一旦确定数据将永久清除");
    QPushButton *bYes=msgBox.addButton(QStringLiteral("是"),QMessageBox::ButtonRole::NoRole);
    QPushButton *bNo=msgBox.addButton(QStringLiteral("否"),QMessageBox::ButtonRole::NoRole);
    connect(bYes,SIGNAL(clicked()),&msgBox,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(CookClear1()));
    connect(bNo,SIGNAL(clicked()),&msgBox,SLOT(close()));
    msgBox.exec();
    return;}
void datawindow::CookClear1(){
   QSqlQuery query(DataBase.db);
   query.exec("DELETE from CookComment");
}
void datawindow::WaiterShow(){
    model2->setTable("WaiterComment");
    model2->select();
    model2->setHeaderData(0,Qt::Horizontal,tr("服务员工作证号"));
    model2->setHeaderData(1,Qt::Horizontal,tr("桌号"));
    model2->setHeaderData(2,Qt::Horizontal,tr("顾客服务评价"));
    model2->setHeaderData(3,Qt::Horizontal,tr("顾客消费金额"));
    ui->wTable->setColumnWidth(0,240);
    ui->wTable->setColumnWidth(1,200);
    ui->wTable->setColumnWidth(2,280);
    ui->wTable->setColumnWidth(3,240);
    ui->lWaiter->clear();
}
void datawindow::WaiterQuery(){
    QString WaiterNum=ui->lWaiter->text();
    model2->setFilter(QString ("waiterNum='%1'").arg(WaiterNum));
    model2->select();
    model2->setHeaderData(0,Qt::Horizontal,tr("服务员工作证号"));
    model2->setHeaderData(1,Qt::Horizontal,tr("桌号"));
    model2->setHeaderData(2,Qt::Horizontal,tr("顾客服务评价"));
    model2->setHeaderData(3,Qt::Horizontal,tr("顾客消费金额"));
    ui->wTable->setColumnWidth(0,240);
    ui->wTable->setColumnWidth(1,200);
    ui->wTable->setColumnWidth(2,280);
    ui->wTable->setColumnWidth(3,240);
    ui->lWaiter->clear();
}
void datawindow::WaiterClear(){
    QMessageBox msgBox;
    msgBox.setFixedWidth(500);
    msgBox.setText(QStringLiteral("您确定要餐桌就餐记录么吗？"));
    msgBox.setInformativeText("一旦确定数据将永久清除");
    QPushButton *bYes=msgBox.addButton(QStringLiteral("是"),QMessageBox::ButtonRole::NoRole);
    QPushButton *bNo=msgBox.addButton(QStringLiteral("否"),QMessageBox::ButtonRole::NoRole);
    connect(bYes,SIGNAL(clicked()),&msgBox,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(WaiterClear1()));
    connect(bNo,SIGNAL(clicked()),&msgBox,SLOT(close()));
    msgBox.exec();
    return;}
void datawindow::WaiterClear1(){
   QSqlQuery query(DataBase.db);
   query.exec("DELETE from WaiterComment");
}
void datawindow::exitProgram(){
    QMessageBox msgBox;
    msgBox.setFixedWidth(500);
    msgBox.setText(QStringLiteral("您确定要退出系统吗？"));
    QPushButton *bYes=msgBox.addButton(QStringLiteral("是"),QMessageBox::ButtonRole::NoRole);
    QPushButton *bNo=msgBox.addButton(QStringLiteral("否"),QMessageBox::ButtonRole::NoRole);
    connect(bYes,SIGNAL(clicked()),&msgBox,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(close()));
    connect(bYes,SIGNAL(clicked()),this,SLOT(save()));
    connect(bNo,SIGNAL(clicked()),&msgBox,SLOT(close()));
    msgBox.exec();
    return;}
void datawindow::save(){
DataBase.memory();
}
datawindow::~datawindow()
{
    delete ui;
}
