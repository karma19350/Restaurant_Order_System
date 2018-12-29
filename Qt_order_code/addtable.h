#ifndef ADDTABLE_H
#define ADDTABLE_H

#include <QWidget>
#include"adminwindow.h"
#include"table.h"
#include"enum.h"

namespace Ui {
class addtable;
}

class addtable : public QWidget
{
    Q_OBJECT

public:
    explicit addtable(adminwindow *parent);
    ~addtable();

private:
    Ui::addtable *ui;
    adminwindow *parent;
    QString newNum;
    QString newType1;
private slots:void sendInfo();
};

#endif // ADDTABLE_H
