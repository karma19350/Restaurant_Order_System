#ifndef DCOMMENT_H
#define DCOMMENT_H

#include <QWidget>
#include"ui_mainwindow.h"
#include"dish.h"
namespace Ui {
class dcomment;
}

class dcomment : public QWidget
{
    Q_OBJECT

public:
    explicit dcomment(MainWindow*w1,Dish*pDish );
    ~dcomment();

private:
    Ui::dcomment *ui;
    MainWindow*w1;
    Dish* pDish;
private slots:
    void judge5();
    void judge4();
    void judge3();
    void judge2();
    void judge1();
};

#endif // DCOMMENT_H
