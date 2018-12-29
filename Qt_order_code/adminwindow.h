#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H
#include<QList>
#include <QMainWindow>
#include"admin.h"
#include"loginwindow.h"
#include"table.h"
#include"dish.h"
#include"editdish.h"
#include"adddish.h"
#include"editpassword1.h"
#include"addid.h"
#include"addtable.h"
#include<QList>
namespace Ui {
class adminwindow;
}
class Dish;
class editdish;
class adddish;
class editpassword1;
class addid;
class addtable;
class Admin;
class Cook;
class Waiter;
class Table;
class adminwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminwindow(loginwindow*parent,Admin*pAdmin);
    ~adminwindow();
    Dish*getDish(int row);
    int getType();
private:
    Ui::adminwindow *ui;
    int type;//确定添加账号的类型
    Admin*pAdmin;
    loginwindow*parent;
    editdish*w1;
    adddish*w2;
    editpassword1*w3;
    addid*w4;
    addtable*w5;
    QList<Dish*>mList;
    QList<Table*>tList;
    QList<Customer*>cusList;
    QList<Cook*>cList;
    QList<Waiter*>wList;
private slots:void dishQuery1();//各信号槽的功能见.cpp
              void dishQuery2();
              void dishEdit();
              void dishAdd();
              void dishDel();
              void logout();
              void exitProgram();
              void cusQuery();
              void cusDel();
              void cusEdit(int row,int column);
              void cookAdd();
              void cookDel();
              void cookQuery();
              void cookEdit(int row,int column);
              void waiterAdd();
              void waiterDel();
              void waiterQuery();
              void waiterEdit(int row,int column);
              void tableAdd();
              void tableDel();
              void save();
public slots:void dishShow();
             void cusShow();
             void cookShow();
             void waiterShow();
             void tableShow();
};

#endif // ADMINWINDOW_H
