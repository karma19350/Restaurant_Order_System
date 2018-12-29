#ifndef WAITERWINDOW_H
#define WAITERWINDOW_H

#include <QMainWindow>
#include"waiter.h"
#include"loginwindow.h"
#include<QVector>
namespace Ui {
class waiterwindow;
}
class Waiter;
class Table;
class waiterwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit waiterwindow(loginwindow*parent,Waiter*pWaiter);
    ~waiterwindow();
    Table*getTable(int row);
    void logout1();//配合退出系统使用
private:
    Ui::waiterwindow *ui;
    loginwindow*parent;
    Waiter* pWaiter;
    QVector<Table*>tList;
private slots:
    void showReq();
    void showDish();
    void triggerAdd();
    void triggerDeal();
    void triggerGetDish();
    void logout();
    void exitProgram();
    void save();
public slots:void showTable();
};

#endif // WAITERWINDOW_H
