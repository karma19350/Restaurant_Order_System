#ifndef TABLE_H
#define TABLE_H
#include"dish.h"
#include<QString>
#include"enum.h"
#include"waiter.h"
#include "mydatabase.h"
struct Reqmsg{
        QString tableNum;
        QString Request;
        bool rReceived;
};
//class MainWindow;
class Customer;
class Waiter;
class Dish;
class Table {
    friend class myDatabase;
private:
   QString tableNum;
   QString WaiterNum;
   QString WaiterComment;
   TableState Tstate;
   TableRequest Trequest;
   TableType Ttype;
   QString Ttype1;
   int Amount;
public:Table(QString tableNum,TableType tableType);//不打开数据库时的初始化
     Table(QString tableNum,QString Ttype1);//打开数据库时的初始化
     Table();
     QString showNum();
     QString showtState();
     QString showtRequest();
     QString showtType();
     QString showWaiterNum();
     QString showWaiterComment();
     TableState gettState();
     Customer* showCustomer();
     //Reqmsg showMsg();//用来表示桌子状态或请求的改变
     void setMsg();
     void setMsg1(Dish*);
     void setWaiterNum(QString);
     void setWaiterComment(QString);
     void setAmount(int);
     void copy(const Table&pTable);
     void Turge();
     void TNothing();
     void TWater();
     void TPay();
     void Tempty();
     void Tunattended();
     void Tattended();
};
#endif // TABLE_H
