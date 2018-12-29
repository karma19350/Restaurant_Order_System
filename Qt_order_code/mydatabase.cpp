#include "mydatabase.h"
#include"customer.h"
#include"admin.h"
#include"dish.h"
#include"table.h"
#include"manager.h"
extern QVector<Dish>Menu;
extern QVector<Table>tableList;
extern QVector<Customer>customerList;
extern QList<Dish>TodoList;
extern QVector<Waiter>waiterList;
extern QVector<Cook>cookList;
extern QVector<Admin>adminList;
extern QVector<Table>ComTableList;
extern QVector<Manager> manList;
myDatabase::myDatabase()
{
    createConnection();
    createTables();
//    //initialCustomer();
    //initialCook();
   // initialDish();
    //initialWaiter();
   // initialTable();
    //initialAdmin();
    //initialManager();
    //db.close();
    //memory();
}
 myDatabase::~myDatabase(){
    //memory();
}
bool myDatabase::createConnection(){
    db=QSqlDatabase::addDatabase("QSQLITE","connection");
    db.setDatabaseName("Qt_order.db");
    if(!db.open()){
        QMessageBox msg;
        msg.setText(QStringLiteral("打开数据库失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;}
    return true;}
bool myDatabase::createTables()
{
    QSqlQuery query(db);
    query.prepare("create table IF NOT EXISTS Customer"
                "(Id VARCHAR PRIMARY KEY,Password  VARCHAR,TotalAmount INT)");//创建用户表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Customer!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS Administrator"
                "(Id VARCHAR PRIMARY KEY,Password  VARCHAR)");//创建系统管理员表
    if (!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Administrator!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS Cook"
                "(Id VARCHAR PRIMARY KEY,Password  VARCHAR)");//创建厨师表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Cook!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS Waiter"
                "(Id VARCHAR PRIMARY KEY,Password  VARCHAR)");//创建服务员表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Waiter!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS Manager"
                "(Id VARCHAR PRIMARY KEY,Password  VARCHAR)");//创建经理表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Manager!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS Dish"
                "(dishName ,price INT,sellNum INT,"
                  "DishType VARCHAR,comment DOUBLE)");//创建菜单表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table Dish!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS TableList"
                "(tableNum VARCHAR,TableType VARCHAR)");//创建桌子列表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table TableList!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS CookComment"
                "(cookNum VARCHAR,dishName VARCHAR,dishComment INT)");//创建评价厨师列表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table CookComment!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    query.prepare("create table IF NOT EXISTS WaiterComment"
                "(waiterNum VARCHAR,tableNum VARCHAR,WaiterComment TEXT,Amount INT)");//创建评价服务员列表
    if(!query.exec())
    {       QMessageBox msg;
            msg.setText("Fatal error!Failed to create table WaiterComment!");
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return false;}
    return true;}
bool myDatabase::initialCustomer(){//打开数据库初始化顾客列表
    QSqlQuery query(db);
    query.exec("select * from Customer");
    while(query.next())
    {
        QString id=query.value(0).toString();
        QString password=query.value(1).toString();
        int totalNUM=query.value(2).toInt();
        Customer c(id,password,totalNUM);
        customerList.append(c);
    }
    return true;
}
bool myDatabase::initialAdmin(){//打开数据库初始化管理员列表
    QSqlQuery query(db);
    query.exec("select * from Administrator");
    while(query.next())
    {
        QString id=query.value(0).toString();
        QString password=query.value(1).toString();
        Admin a(id,password);
        adminList.append(a);
    }
    return true;
}
bool myDatabase::initialWaiter(){//初始化服务员
    QSqlQuery query(db);
    query.exec("select * from Waiter");
    while(query.next())
    {
        QString id=query.value(0).toString();
        QString password=query.value(1).toString();
        Waiter w(id,password);
        waiterList.append(w);
    }
    return true;
}
bool myDatabase::initialCook(){//初始化厨师
    QSqlQuery query(db);
    query.exec("select * from Cook");
    while(query.next())
    {
        QString id=query.value(0).toString();
        QString password=query.value(1).toString();
        Cook c(id,password);
        cookList.append(c);
    }
    return true;
}
bool myDatabase::initialManager(){//打开数据库初始化管理员列表
    QSqlQuery query(db);
    query.exec("select * from Manager");
    while(query.next())
    {
        QString id=query.value(0).toString();
        QString password=query.value(1).toString();
        Manager m(id,password);
        manList.append(m);
    }
    return true;
}
bool myDatabase::initialDish(){//初始化菜单
    QSqlQuery query(db);
    query.exec("select * from Dish");
    while(query.next())
    {
        QString id=query.value(0).toString();
        int price=query.value(1).toInt();
        int sellNum=query.value(2).toInt();
        QString temp=query.value(3).toString();
        double comment=query.value(4).toDouble();
        Dish d(id,price,sellNum,temp,comment);
        Menu.append(d);
    }
    return true;
}
bool myDatabase::initialTable(){//初始化桌子列表
    QSqlQuery query(db);
    query.exec("select * from TableList");
    while(query.next())
    {
        QString tableNum=query.value(0).toString();
        QString temp=query.value(1).toString();
        Table t(tableNum,temp);
        tableList.append(t);
    }
    return true;
}
bool myDatabase::memory(){
    QSqlQuery query(db);
    query.exec("DELETE from Administrator");
    query.prepare("insert into Administrator values(?,?)");
    for(int i=0;i<adminList.size();i++)
      { query.bindValue(0,adminList[i].id);
        query.bindValue(1,adminList[i].password);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新管理员表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from Customer");
    query.prepare("insert into Customer values(?,?,?)");
    for(int i=0;i<customerList.size();i++)
      { query.bindValue(0,customerList[i].id);
        query.bindValue(1,customerList[i].password);
        query.bindValue(2,customerList[i].totalAmount);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新顾客表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from Waiter");
    query.prepare("insert into Waiter values(?,?)");
    for(int i=0;i<waiterList.size();i++)
      { query.bindValue(0,waiterList[i].id);
        query.bindValue(1,waiterList[i].password);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新服务员表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from Cook");
    query.prepare("insert into Cook values(?,?)");
    for(int i=0;i<cookList.size();i++)
      { query.bindValue(0,cookList[i].id);
        query.bindValue(1,cookList[i].password);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新厨师表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from Manager");
    query.prepare("insert into Manager values(?,?)");
    for(int i=0;i<manList.size();i++)
      { query.bindValue(0,manList[i].id);
        query.bindValue(1,manList[i].password);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新经理表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.prepare("insert into CookComment values(?,?,?)");
    for(int i=0;i<TodoList.size();i++)
      { //query.bindValue(0,TodoList[i].waterNum);
        query.bindValue(0,TodoList[i].cookNum);
        query.bindValue(1,TodoList[i].dishName);
        query.bindValue(2,TodoList[i].comment);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新菜单流水表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.prepare("insert into WaiterComment values(?,?,?,?)");
    for(int i=0;i<ComTableList.size();i++)
      { query.bindValue(0,ComTableList[i].WaiterNum);
        query.bindValue(1,ComTableList[i].tableNum);
        query.bindValue(2,ComTableList[i].WaiterComment);
        query.bindValue(3,ComTableList[i].Amount);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新餐桌流水表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from Dish");
    query.prepare("insert into Dish values(?,?,?,?,?)");
    for(int i=0;i<Menu.size();i++)
      { query.bindValue(0,Menu[i].dishName);
        query.bindValue(1,Menu[i].price);
        query.bindValue(2,Menu[i].sellNum);
        query.bindValue(3,Menu[i].Dtype1);
        query.bindValue(4,Menu[i].comment);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新菜单表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
    query.exec("DELETE from TableList");
    query.prepare("insert into TableList values(?,?)");
    for(int i=0;i<tableList.size();i++)
      { query.bindValue(0,tableList[i].tableNum);
        query.bindValue(1,tableList[i].Ttype1);
        bool success=query.exec();
        if(!success)
        {QMessageBox msg;
        msg.setText(QStringLiteral("更新桌子表失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();}}
return true;
}
