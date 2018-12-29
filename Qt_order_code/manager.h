#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include"absuser1.h"
#include "mydatabase.h"
class Manager:public  AbstractUser
{
    friend class myDatabase;
public:
    Manager();
    Manager(QString newId, QString newPassword);
};

#endif // MANAGER_H
