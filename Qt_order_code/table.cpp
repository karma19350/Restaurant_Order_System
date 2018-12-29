#include"table.h"
#include"enum.h"
#include<QString>
extern QList<Reqmsg>RMsgList;
Table::Table(QString tableNum,TableType tableType):tableNum(tableNum),Ttype(tableType){
    Tstate=empty;
    Trequest=nothing;
    //Msg={showNum(),showtRequest(),false};
    WaiterNum="";
    WaiterComment="";
    Amount=0;
}
Table::Table(){}
Table::Table(QString tableNum,QString Ttype1):tableNum(tableNum),Ttype1(Ttype1){
 WaiterNum=QString();
 WaiterComment=QString();
if(this->Ttype1=="四人桌") Ttype=four;
if(this->Ttype1=="两人桌") Ttype=two;
if(this->Ttype1=="六人桌") Ttype=six;
Trequest=nothing;
Tstate=empty;
Amount=0;}
void Table::copy(const Table&pTable){
   tableNum=pTable.tableNum;
   WaiterNum=pTable.WaiterNum;
   WaiterComment=pTable.WaiterComment;
   Amount=pTable.Amount;
}
QString Table::showNum(){
    return tableNum;
}
QString Table::showtState(){
    switch (Tstate) {
    case empty:return (QString(QStringLiteral("空闲")));
    case unattended:return (QString(QStringLiteral("等候服务")));
    case attended:return (QString(QStringLiteral("就餐中")));
    default:return QString(); }
}
QString Table::showtType(){
    switch (Ttype) {
    case two:return (QString(QStringLiteral("两人桌")));
    case four:return (QString(QStringLiteral("四人桌")));
    case six:return (QString(QStringLiteral("六人桌")));
    default:return QString();
    }

}
TableState Table::gettState(){
    return  Tstate;
}
QString Table::showWaiterNum(){
    return WaiterNum;
}
QString Table::showWaiterComment(){
    return WaiterComment;
}
QString Table::showtRequest(){//nothing,urge,water,pay
    switch (Trequest) {
    case urge:return (QString(QStringLiteral("催菜：")));
    case water:return (QString(QStringLiteral("需要加水")));
    case pay:return (QString(QStringLiteral("请求结账")));
    default:return QString(); }
}
void Table::setMsg1(Dish*pDish){
    Reqmsg newMsg={this->tableNum,this->showtRequest()+pDish->showName(),false};
    RMsgList.append(newMsg);
}
void Table::setMsg(){
    Reqmsg newMsg={this->tableNum,this->showtRequest(),false};
    RMsgList.append(newMsg);
}
void Table::setWaiterNum(QString waiternum){
    WaiterNum=waiternum;
}
void Table::setWaiterComment(QString waitercomment){
    WaiterComment=waitercomment;
}
void Table::setAmount(int amount){
    Amount=amount;
}
void Table::Turge(){
    Trequest=urge;
}
void Table::TNothing(){
    Trequest=nothing;
}
void Table::TWater(){
    Trequest=water;
}
void Table::TPay(){
    Trequest=pay;
}
void Table::Tempty(){
     Tstate=empty;
}
 void Table::Tunattended(){
     Tstate=unattended;
 }
 void Table::Tattended(){
      Tstate=attended;
 }
