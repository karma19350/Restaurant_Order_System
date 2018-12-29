#ifndef ADMIN_H
#define ADMIN_H
#include "absuser1.h"
#include "mydatabase.h"
#include "adminwindow.h"
#include<QString>
class adminwindow;
class Admin: public AbstractUser{
    friend class editpassword1;
    friend class myDatabase;
private:
    adminwindow *parent;

    bool checkId();
public:
    Admin(){}
    Admin(QString id, QString password);
    void setParent(adminwindow* parent);
};


#endif // ADMIN_H
