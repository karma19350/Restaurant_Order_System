#include"customer.h"
#include"dish.h"
#include"mainwindow.h"
#include"ui_mainwindow.h"
#include<QVector>
#include<QDebug>
extern  QVector<Dish>Menu;
extern QList<Dish*>TodoList;
extern QVector<Table>ComTableList;
extern QVector<Waiter>waiterList;
Customer::Customer(QString newId, QString newPassword):AbstractUser(newId,newPassword)
  {
    parent=NULL;
    pTable=NULL;
    curAmount=0;
    totalAmount=0;
    dishList.clear();
}
Customer::Customer(QString newId, QString newPassword,int totalAmount):AbstractUser(newId,newPassword)
  ,totalAmount(totalAmount)
  {
    parent=NULL;
    pTable=NULL;
    curAmount=0;
    dishList.clear();
}
void Customer::setParent(MainWindow* parent){
    this->parent=parent;
}
void Customer::addDish(Dish *rowDish){//向食物托盘中添加菜品，此时将菜品信息复制一份最后形成每日流水
   for(int i=0;i<Menu.size();i++)
       if(rowDish->showName()==Menu[i].showName())
         { Dish newDish;//建立在栈上而非堆上
        newDish.copy(Menu[i]);
        dishList.push_back(newDish);
        curAmount=curAmount+newDish.showPrice().toInt();}
}

void Customer::delDish(int row){//从食物托盘中删去菜品
    curAmount=curAmount-(dishList[row].showPrice().toInt());
    /*for(int i=0;i<TodoList.size();i++)
        if(TodoList[i]=&dishList[row])
          TodoList.removeAt(i);*/
    dishList.removeAt(row); 
    QMessageBox msg;
    msg.setText(QStringLiteral("您已成功删除菜品！"));
    msg.exec();
    return;}

void Customer::setTable(Table* rowTable){//就座后顾客和桌子连起来
     this->pTable=rowTable;
   // parent->linkTable(rowTable);
}
QString Customer::getTableNum(){//返回顾客所坐桌子的座位号
     return pTable->showNum();
 }
/*void Customer::curAmountClear(){//顾客当前消费金额清空
    totalAmount=totalAmount+curAmount;
    this->curAmount=0;
}*/
int Customer::showcurAmount(){//显示顾客当前消费金额
    return curAmount;
}
void Customer::Clogout(){
    dishList.clear();
    Table newTable;
    newTable.copy(*pTable);
    newTable.setAmount(curAmount);
    totalAmount=totalAmount+curAmount;
    this->curAmount=0;
    ComTableList.append(newTable);
    pTable->Tempty();
    if(pTable->showWaiterNum()!="")
       {for(int i=0;i<waiterList.size();i++)
          if( waiterList[i].getId()==pTable->showWaiterNum())
              for(int j=0;j<waiterList[i].myTList.size();j++)
                  if(waiterList[i].myTList[j]->showNum()==pTable->showNum())
                         waiterList[i].myTList.removeAt(j);}
    pTable->setWaiterNum("");
    pTable->setWaiterComment("");
    pTable->setAmount(0);
    pTable=NULL;
    parent=NULL;
    return;
}
QString Customer::showTableNum(){//显示桌号
    return pTable->showNum();
}

QString Customer::showId(){//显示账号,其实父类已经有getId函数了
    return id;
}
Table*Customer:: getTable(){
    return pTable;
}
