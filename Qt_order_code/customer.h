#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "absuser1.h"
#include "dish.h"
#include"table.h"
#include "mydatabase.h"
#include<Qvector>
using namespace std;
class MainWindow;
class Dish;
class Table;
class Customer:public AbstractUser{
    friend class adminwindow;
    friend class editpassword1;
    friend class myDatabase;
private:
    MainWindow *parent;
    Table* pTable;
    int curAmount;//当前菜单金额
    int totalAmount;//用户消费记录
public:
    QVector <Dish> dishList;
    Customer(QString newId, QString newPassword);
    Customer(QString newId, QString newPassword,int totalAmount);
    Customer(){}
    void setParent(MainWindow* parent);
    void setTable(Table* rowTable);
    QString getTableNum();
    void addDish(Dish*rowDish);
    void delDish(int row);
    int showcurAmount();
    Table* getTable();
    QString showTableNum();
    QString showId();
public slots:
   void Clogout();
};

#endif // CUSTOMER_H
