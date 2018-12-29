#include "dcomment.h"
#include "ui_dcomment.h"
#include"mainwindow.h"
#include"dish.h"
#include"enum.h"
extern QVector<Dish>Menu;
extern QList<Dish>TodoList;
dcomment::dcomment(MainWindow*w1,Dish*pDish) :w1(w1),pDish(pDish),
    ui(new Ui::dcomment)
{
    ui->setupUi(this);
    connect(ui->bComDish5,SIGNAL(clicked()),this,SLOT(judge5()));//评价5分
    connect(ui->bComDish4,SIGNAL(clicked()),this,SLOT(judge4()));//评价4分
    connect(ui->bComDish3,SIGNAL(clicked()),this,SLOT(judge3()));//评价3分
    connect(ui->bComDish2,SIGNAL(clicked()),this,SLOT(judge2()));//评价2分
    connect(ui->bComDish1,SIGNAL(clicked()),this,SLOT(judge1()));//评价1分
}
void dcomment::judge5(){
    if(pDish->getDstate()==oncomment){
        QMessageBox msg;
        msg.setText(QStringLiteral("您已评价！"));
        msg.exec();
        this->close();}
    else if(pDish->getDstate()==served){
                  pDish->DOncomment();
                  pDish->setComment(5.0);
               for(int i=0;i<TodoList.size();i++)
                     if(pDish->showWaterNum()==TodoList[i].showWaterNum())
                       {TodoList[i].DOncomment();
                       TodoList[i].setComment(5.0);}
         QMessageBox msg;
         msg.setText(QStringLiteral("评价成功！"));
         msg.setWindowTitle(QStringLiteral("Success"));
         msg.exec();
         this->close();}
    else{ QMessageBox msg;
    msg.setText(QStringLiteral("您还不能评价！"));
    msg.exec();
    this->close();}
    }
void dcomment::judge4(){
if(pDish->getDstate()==oncomment){
    QMessageBox msg;
    msg.setText(QStringLiteral("您已评价！"));
    msg.exec();
    this->close();}
else if(pDish->getDstate()==served){
              pDish->DOncomment();
              pDish->setComment(4.0);
           for(int i=0;i<TodoList.size();i++)
                 if(pDish->showWaterNum()==TodoList[i].showWaterNum())
                   {TodoList[i].setComment(4.0);
                     TodoList[i].DOncomment();
                     break;}
     QMessageBox msg;
     msg.setText(QStringLiteral("评价成功！"));
     msg.setWindowTitle(QStringLiteral("Success"));
     msg.exec();
     this->close();}
else{ QMessageBox msg;
msg.setText(QStringLiteral("您还不能评价！"));
msg.exec();
this->close();}
}

void dcomment::judge3(){
    if(pDish->getDstate()==oncomment){
        QMessageBox msg;
        msg.setText(QStringLiteral("您已评价！"));
        msg.exec();
        this->close();}
    else if(pDish->getDstate()==served){
                  pDish->DOncomment();
                  pDish->setComment(3.0);
               for(int i=0;i<TodoList.size();i++)
                     if(pDish->showWaterNum()==TodoList[i].showWaterNum())
                       {TodoList[i].setComment(3.0);
                         TodoList[i].DOncomment();
                         break;}
         QMessageBox msg;
         msg.setText(QStringLiteral("评价成功！"));
         msg.setWindowTitle(QStringLiteral("Success"));
         msg.exec();
         this->close();}
    else{ QMessageBox msg;
    msg.setText(QStringLiteral("您还不能评价！"));
    msg.exec();
    this->close();}
    }
void dcomment::judge2(){
    if(pDish->getDstate()==oncomment){
        QMessageBox msg;
        msg.setText(QStringLiteral("您已评价！"));
        msg.exec();
        this->close();}
    else if(pDish->getDstate()==served){
                  pDish->DOncomment();
                  pDish->setComment(2.0);
                 for(int i=0;i<TodoList.size();i++)
                     if(pDish->showWaterNum()==TodoList[i].showWaterNum())
                       {TodoList[i].setComment(2.0);
                         TodoList[i].DOncomment();
                         break;}
         QMessageBox msg;
         msg.setText(QStringLiteral("评价成功！"));
         msg.setWindowTitle(QStringLiteral("Success"));
         msg.exec();
         this->close();}
    else{ QMessageBox msg;
    msg.setText(QStringLiteral("您还不能评价！"));
    msg.exec();
    this->close();}
    }
void dcomment::judge1(){
    if(pDish->getDstate()==oncomment){
        QMessageBox msg;
        msg.setText(QStringLiteral("您已评价！"));
        msg.exec();
        this->close();}
    else if(pDish->getDstate()==served){
                  pDish->DOncomment();
                  pDish->setComment(1.0);
               for(int i=0;i<TodoList.size();i++)
                     if(pDish->showWaterNum()==TodoList[i].showWaterNum())
                       {TodoList[i].setComment(1.0);
                         TodoList[i].DOncomment();break;}
         QMessageBox msg;
         msg.setText(QStringLiteral("评价成功！"));
         msg.setWindowTitle(QStringLiteral("Success"));
         msg.exec();
         this->close();}
    else{ QMessageBox msg;
    msg.setText(QStringLiteral("您还不能评价！"));
    msg.exec();
    this->close();}
    }
dcomment::~dcomment()
{
    delete ui;
}
