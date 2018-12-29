#include "cook.h"
extern QVector<Dishmsg>MsgList;
extern QList<Dishmsg>DishmsgList;
extern QVector<Table>tableList;
extern QVector<Customer>customerList;
struct Dishmsg;
extern QList<Dish*>TodoList;
Cook::Cook( QString newId, QString newPassword):
  AbstractUser(newId,newPassword)
{
}
void Cook::completeDish(Dish* rowDish){
     rowDish->DDone();
    setDMsg(rowDish);
    DishmsgList.append(DMsg);
    for(int i=0;i<customerList.size();i++)
        for(int j=0;j<customerList[i].dishList.size();j++)
            if(customerList[i].dishList[j].showWaterNum()==rowDish->showWaterNum())
                customerList[i].dishList[j].DDone();
}
void Cook::setDMsg(Dish *pDish)
{
DMsg.tableNum=pDish->showTableNum();
DMsg.dishName=pDish->showName();
DMsg.dReceived=false;
}
