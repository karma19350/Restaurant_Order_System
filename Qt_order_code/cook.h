#ifndef COOK_H
#define COOK_H
#include"dish.h"
#include"absuser1.h"
#include "mydatabase.h"
#include<QList>
#include<QVector>
struct Dishmsg{
        QString tableNum;
        QString dishName;
        bool dReceived;
};
class Dish;
class cookwindow;
class Cook: public AbstractUser{
    friend class editpassword1;
    friend class myDatabase;
private:
    Dishmsg DMsg;//利用结构体发送菜品做好的信息
public:
    Cook(){}
    Cook(QString newId, QString newPassword);
    void setDMsg(Dish*pDish);
    void setParent(cookwindow* parent);
    void completeDish(Dish*rowDish);

};



#endif // COOK_H
