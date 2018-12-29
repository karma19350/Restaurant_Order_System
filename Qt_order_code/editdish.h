#ifndef EDITDISH_H
#define EDITDISH_H

#include <QWidget>
#include"adminwindow.h"
#include"dish.h"
#include"enum.h"

namespace Ui {
class editdish;
}
class Dish;
class editdish : public QWidget
{
    Q_OBJECT

public:
    explicit editdish(adminwindow *parent,Dish*pDish);
    ~editdish();
    Ui::editdish *ui;
private:
    adminwindow*parent;
    Dish*pDish;
    QString newName;
    int newPrice;
    DishType newType;
    QString newType1;
private slots:void sendInfo();
              void edit();
};

#endif // EDITDISH_H
