#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>
#include"ui_registerwindow.h"
#include"loginwindow.h"
#include"qstring.h"

namespace Ui {
class registerwindow;
}
class loginwindow;
class registerwindow : public QWidget
{
    Q_OBJECT
public:
    explicit registerwindow(loginwindow*l);
    ~registerwindow();
    Ui::registerwindow *ui;
public slots:
    void sendInfo();
private:

    loginwindow*parent;
    bool check();
    bool checkId();
    QString id;
    QString password;
    QString password2;
};

#endif // REGISTERWINDOW_H
