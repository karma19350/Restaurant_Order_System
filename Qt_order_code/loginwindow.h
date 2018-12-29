#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include"ui_loginwindow.h"
#include"registerwindow.h"

namespace Ui {
class loginwindow;
}
class cookwindow;
class registerwindow;
class MainWindow;
class waiterwindow;
class adminwindow;
class datawindow;
class loginwindow : public QWidget
{
    Q_OBJECT
friend class MainWindow;
friend class adminwindow;
friend class cookwindow;
friend class waiterwindow;
friend class datawindow;
public:
    explicit loginwindow(QWidget *parent = 0);
    ~loginwindow();
    Ui::loginwindow *ui;
public slots:void login();
private:
    registerwindow*r;
    MainWindow*w1;
    adminwindow*w2;
    cookwindow*w3;
    waiterwindow*w4;
    datawindow*w5;
};

#endif // LOGINWINDOW_H
