#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QObject>
#include<Qtsql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlDriver>
#include<QtSql/QSqlError>
#include<QtSql/QSqlRecord>
#include<QtSql/QSqlTableModel>
#include<QtDebug>
#include<QtSql/QSqlField>
#include<QMessageBox>
class myDatabase:public QObject
{
    Q_OBJECT
public:
    myDatabase();
    ~myDatabase();
    QSqlDatabase db;
public:
    bool initialCustomer();
    bool initialAdmin();
    bool initialWaiter();
    bool initialCook();
    bool initialDish();
    bool initialTable();
    bool initialManager();
private:bool createConnection();
    bool createTables();

public slots:bool memory();
};

#endif // MYDATABASE_H
