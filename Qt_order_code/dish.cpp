#include"dish.h"
#include"enum.h"
Dish::Dish(QString dishName, int price,DishType Dtype):dishName(dishName),price(price),Dtype(Dtype)
{
    sellNum=0;
    Dstate=none;
    comment=0;
    tableNum=QString();
    cookNum=QString();
    waterNum=0;
}
void Dish::copy(const Dish&pDish){
    dishName=pDish.dishName;
    price=pDish.price;
    Dtype=pDish.Dtype;
    Dstate=none;
    comment=pDish.comment;
    sellNum=pDish.sellNum;
    tableNum=QString();
    cookNum=QString();
    waterNum=0;
}
Dish::Dish(QString dishName, int price,int sellNum,QString Dtype1,double comment):
dishName(dishName),price(price),sellNum(sellNum),Dtype1(Dtype1),comment(comment)
{
waterNum=0;
if(this->Dtype1=="蒸包类")Dtype= Z;/*蒸包类，煎焗类，蔬菜类，肠粉类，饭粥类，甜品类*/
if(this->Dtype1=="煎焗类")Dtype= J;
if(this->Dtype1=="蔬菜类")Dtype= V;
if(this->Dtype1=="肠粉类")Dtype= C;
if(this->Dtype1=="饭粥类")Dtype= F;
if(this->Dtype1=="甜品类")Dtype= T;
Dstate=none;
tableNum=QString();
cookNum=QString();
}
//int Dish::totalSellNum=0;//所有菜的总销量

QString Dish::showName(){return dishName;}
QString Dish::showTableNum(){return tableNum;}
QString Dish ::showCookNum(){return cookNum;}
QString Dish::showsellNum(){return QString::number(sellNum);}
QString Dish::showPrice(){return QString::number(price);}
QString Dish::showComment1(){return QString::number(comment);}
int Dish::showWaterNum(){return waterNum;}
double Dish::getComment(){return comment;}
QString Dish::showDtype(){
    switch (Dtype) {
    case Z:return(QString(QStringLiteral("蒸包类")));
    case J:return(QString(QStringLiteral("煎焗类")));
    case V:return(QString(QStringLiteral("蔬菜类")));
    case C:return(QString(QStringLiteral("肠粉类")));
    case F:return(QString(QStringLiteral("饭粥类")));
    case T:return(QString(QStringLiteral("甜品类")));
    default:return QString();
    }
}
QString Dish::showDstate(){
    switch (Dstate) {
    case none:return(QString(QStringLiteral("未下单")));
    case ordered:return(QString(QStringLiteral("已下单")));
    case received:return(QString(QStringLiteral("厨师已接单")));
    case done:return(QString(QStringLiteral("菜品已做好")));
    case served:return(QString(QStringLiteral("服务员已上菜")));
    case oncomment:return(QString(QStringLiteral("已评价")));
    default:return QString();
    }
}
QString Dish::showComment(){
    if(comment==0)return(QString(QStringLiteral("新品上市")));
    int temp=static_cast<int>(comment);
    switch (temp) {
    case 5:
    case 4:return(QString(QStringLiteral("超级赞！")));
    case 3:return(QString(QStringLiteral("还不错！")));
    case 2:return(QString(QStringLiteral("一般般")));
    case 1:return(QString(QStringLiteral("不够好")));
    case 0:return(QString(QStringLiteral("真难吃")));
    default:return QString();
    }
}
void Dish::DOrdered(){
    Dstate=ordered;
}
void Dish::DOncomment(){
    Dstate=oncomment;
}
void Dish::DReceived(){
    Dstate=received;
}
void Dish::DDone(){
     Dstate=done;
}
void Dish::DServed(){
   Dstate=served;
}
void Dish::addSellNum(){
    this->sellNum++;
    //totalSellNum++;
}
void Dish::settablNum(QString tName){
    tableNum=tName;
}
void Dish::setcookNum(QString cName){
    cookNum=cName;
}
void Dish::setwaterNum(int wName){
    waterNum=wName;
}
void Dish::setComment(double dComment){
    comment=dComment;
}
void Dish::Dcomment5(){
   this->comment=(comment*(sellNum-1)+5.0)/sellNum;
}
void Dish::Dcomment4(){
   this->comment=(comment*(sellNum-1)+4.0)/sellNum;
}
void Dish::Dcomment3(){
    this->comment=(comment*(sellNum-1)+3.0)/sellNum;
 }
void Dish::Dcomment2(){
    this->comment=(comment*(sellNum-1)+2.0)/sellNum;
 }
void Dish::Dcomment1(){
    this->comment=(comment*(sellNum-1)+1.0)/sellNum;
 }
