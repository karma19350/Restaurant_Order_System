#ifndef COOKWINDOW_H
#define COOKWINDOW_H

#include <QMainWindow>
#include"loginwindow.h"
#include"ui_cookwindow.h"
#include"cook.h"
#include"dish.h"
namespace Ui {
class cookwindow;
}
class Dish;
class cookwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit cookwindow(loginwindow*parent,Cook*pCook);
    ~cookwindow();
private:
    loginwindow*parent;
    Cook* pCook;
    Ui::cookwindow *ui;
    QVector <Dish*> dList;
    QList<Dish*>myList;
    QVector<Dish*>myComList;
private slots:
    void showTodoList();
    void triggerAdd();
    void showmyList();
    void triggerComplete();
    void showmyComList();
    void logout();
    void exitProgram();
    void save();
};

#endif // COOKWINDOW_H
