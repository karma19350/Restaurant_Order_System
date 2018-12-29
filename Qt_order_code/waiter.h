#ifndef WAITER_H
#define WAITER_H
#include <QObject>
#include<QList>
#include<QVector>
#include<QStringList>
#include"table.h"
#include"waiterwindow.h"
#include"absuser1.h"
#include "mydatabase.h"
struct Reqmsg;
struct Dishmsg;
class Table;
class waiterwindow;
class Waiter : public AbstractUser
{
    friend class editpassword1;
    friend class myDatabase;
public:
    Waiter(QString newId, QString newPassword);
    Waiter(){}
    QList<Reqmsg>myMsgList;
    QList<Dishmsg>myDMsgList;
    QList<Table*>myTList;
    void addTable(Table* rowTable);
    void dealTable(int row);
    void Wlogout();
    void setParent(waiterwindow* parent);
    void getDMsg();//得到菜品信息
    void getMsg();//得到需求信息
private:
        waiterwindow *parent;
};

#endif // WAITER_H
