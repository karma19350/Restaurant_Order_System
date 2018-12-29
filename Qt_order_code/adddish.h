#ifndef ADDDISH_H
#define ADDDISH_H

#include <QWidget>
#include"adminwindow.h"
#include"dish.h"
#include"enum.h"

namespace Ui {
class adddish;
}

class adddish : public QWidget
{
    Q_OBJECT

public:
    explicit adddish(adminwindow *parent);
    ~adddish();

private:
    Ui::adddish *ui;
    adminwindow *parent;
    QString newName;
    int newPrice;
    QString newType1;
private slots:void sendInfo();
};

#endif // ADDDISH_H
