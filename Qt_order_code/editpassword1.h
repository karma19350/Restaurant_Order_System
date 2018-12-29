#ifndef EDITPASSWORD1_H
#define EDITPASSWORD1_H

#include <QWidget>
#include"absuser1.h"
#include"adminwindow.h"

namespace Ui {
class editpassword1;
}
class editpassword1 : public QWidget
{
    Q_OBJECT

public:
    explicit editpassword1(adminwindow*parent,AbstractUser*pAbsuser);
    ~editpassword1();

private:
    Ui::editpassword1 *ui;
    adminwindow*parent;
    AbstractUser*pAbsuser;
    QString newPassword;
private slots:void sendInfo();
};

#endif // EDITPASSWORD1_H
