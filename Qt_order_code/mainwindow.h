#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtWidgets>
#include"ui_mainwindow.h"
#include"dcomment.h"
#include"wcomment.h"
#include"qwidget.h"
#include"loginwindow.h"
#include"customer.h"
#include"table.h"
#include<vector>
using namespace std;
extern QVector<Dish>Menu;
extern QVector<Table>tableList;

namespace Ui {
class MainWindow;
}
class loginwindow;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(loginwindow*parent,Customer*pCustomer);
    ~MainWindow();
    Dish* getDish(int row);
    Table* getTable(int row);
private slots:
    void triggerSit();//就座
    void triggerAdd();//加菜
    void triggerDelete();//删菜
    void triggerQuery();//查询
    void triggerPay();//付款
    void triggerShow();//全部菜单
    void triggerUrge();//催菜
    void triggerWater();//需要加水
    void showTable();//全部桌子
    void triggerSend();//提交订单
    void sendOrder();//配合提交菜单使用
    void leave();//结账离开
    void commentOnDish();//评价菜品
    void commentOnWaiter();//评价服务员
    void save();
public slots:
    void logout();
    void exitProgram();
    void showDish();//我的餐盘
private:
    Ui::MainWindow *ui;
    dcomment*w1;
    wcomment*w2;
    loginwindow*parent;
    Customer* pCustomer;
    QVector<Table*>tList;
    QVector<Dish*>mList;
    QVector<Dish*>dList;
};

#endif // MAINWINDOW_H
