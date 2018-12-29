#include "mainwindow.h"
#include"loginwindow.h"
#include"admin.h"
#include"dish.h"
#include"table.h"
#include"customer.h"
#include"manager.h"
#include <QApplication>
#include<QVector>
#include<QList>
#include<QStringList>
#include"mydatabase.h"
using namespace std;
QList<Dishmsg>DishmsgList;//所有的菜品完成信息
QList<Reqmsg>RMsgList;//所有的催菜等需求信息
QVector<Dish>Menu;
QVector<Table>tableList;
QVector<Customer>customerList;
QList<Dish>TodoList;
QVector<Waiter>waiterList;
QVector<Cook>cookList;
QVector<Admin>adminList;
QVector<Manager>manList;
QVector<Table>ComTableList;



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    loginwindow w;
    w.show();
    myDatabase DataBase;
    DataBase.memory();
    return a.exec();
}
