#ifndef DISH_H
#define DISH_H
#include<QString>
#include"customer.h"
#include"enum.h"
#include"cook.h"
#include"editdish.h"
#include "mydatabase.h"
class MainWindow;
class Customer;
class Cook;
class Dish{
    friend class editdish;
    friend class myDatabase;
public:
    Dish(){}
    Dish(QString dishName, int price,DishType Dtype);//不带数据库的初始化
    Dish(QString dishName, int price,int sellNum,QString Dtype1,double comment);//带数据库的初始化
    void copy(const Dish&pDish);
    QString showName();
    QString showDtype();
    QString showPrice();
    QString showDstate();
    QString showComment();
    QString showComment1();
    QString showsellNum();
    QString showTableNum();
    QString showCookNum();
    int showWaterNum();
    double getComment();
    DishState getDstate(){return Dstate;}
    void addSellNum(); 
    void settablNum(QString);
    void setcookNum(QString);
    void setwaterNum(int);
    void setComment(double);
    void DOrdered();
    void DReceived();
    void DDone();
    void DServed();
    void DOncomment();
    void Dcomment5();
    void Dcomment4();
    void Dcomment3();
    void Dcomment2();
    void Dcomment1();
private:
    QString dishName;
    int price;
    int sellNum;
    int waterNum;
    DishType Dtype;
    QString Dtype1;
    DishState Dstate;
    double comment;
    QString tableNum;
    QString cookNum;
    //static int totalSellNum;//静态变量可以记录所有菜的总销量
};

#endif // DISH_H
