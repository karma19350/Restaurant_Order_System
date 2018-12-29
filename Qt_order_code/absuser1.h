#ifndef ABSUSER1_H
#define ABSUSER1_H
#include <QString>
#include <QApplication>
class Dish;
class AbstractUser{
    friend class editpassword1;
protected:
    QString id;
    QString password;
public:
    AbstractUser(QString newId,QString newPassword);
    AbstractUser(){}
    // ~AbstractUser(){}
    QString getId(){return id;}
    QString getPassword(){return password;}
    void setPassword(QString NewPassword){password=NewPassword;}
    bool check(QString Inpassword);
};


#endif // ABSUSER1_H
