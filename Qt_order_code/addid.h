#ifndef ADDID_H
#define ADDID_H

#include <QWidget>
#include"adminwindow.h"
namespace Ui {
class addid;
}

class addid : public QWidget
{
    Q_OBJECT

public:
    explicit addid(adminwindow *parent);
    ~addid();

private:
    Ui::addid *ui;
    adminwindow *parent;
    QString temp;
private slots:void sendInfo();
};

#endif // ADDID_H
