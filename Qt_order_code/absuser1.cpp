#include"absuser1.h"
#include<QString>

AbstractUser:: AbstractUser(QString newId,QString newPassword):
    id(newId),password(newPassword){}
bool AbstractUser:: check(QString Inpassword){
    if(Inpassword==password)
    return true;
    else return false;
}
