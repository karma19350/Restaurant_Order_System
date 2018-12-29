#include "waiter.h"
#include<QString>
#include<QVector>
#include<QObject>
#include<QMessageBox>
#include"table.h"
extern QVector<Table>tableList;
extern QList<Dishmsg>DishmsgList;
extern QList<Reqmsg>RMsgList;
Waiter::Waiter(QString newId, QString newPassword):
  AbstractUser(newId,newPassword)
{
myTList.clear();
myMsgList.clear();
parent=NULL;
}
void Waiter::setParent(waiterwindow* parent){
    this->parent=parent;
}
void Waiter::addTable(Table*rowTable){
    if(rowTable->gettState()==unattended)
   {  myTList.append(rowTable);
     rowTable->Tattended();
     rowTable->setWaiterNum(id);}
     else{
         QMessageBox msg;
         msg.setText(QStringLiteral("您不能为该餐桌服务！"));
         msg.exec();
     }
}
void Waiter::dealTable(int row){
   for(int i=0;i<tableList.size();i++)
     {  if(tableList[i].showNum()==myMsgList[row].tableNum)
           tableList[i].TNothing();break; }
    myMsgList.removeAt(row);
}
void Waiter::getDMsg(){//接受菜品做好的信息
 for(int j=0;j<myTList.size();j++)
  for(int i=0;i<DishmsgList.size();i++)
    if(DishmsgList[i].tableNum==myTList[j]->showNum()&&DishmsgList[i].dReceived==false)
          { myDMsgList.append(DishmsgList[i]);
           DishmsgList[i].dReceived=true;}
 }
void Waiter::getMsg(){
  for(int j=0;j<myTList.size();j++)
   for(int i=0;i<RMsgList.size();i++)
     if(RMsgList[i].tableNum==myTList[j]->showNum()&&RMsgList[i].rReceived==false)
             { myMsgList.append(RMsgList[i]);
              RMsgList[i].rReceived=true;}
}
void Waiter::Wlogout(){
    myMsgList.clear();
    myDMsgList.clear();
    myTList.clear();
    parent=NULL;
}
