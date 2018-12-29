#ifndef DATAWINDOW_H
#define DATAWINDOW_H

#include <QMainWindow>
#include"loginwindow.h"
#include"manager.h"
#include"mydatabase.h"
#include<Qtsql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlDriver>
#include<QtSql/QSqlError>
#include<QtSql/QSqlRecord>
#include<QtSql/QSqlQueryModel>
#include<QtSql/QSqlTableModel>
#include<QtSql/QSqlRelationalTableModel>
#include<QMessageBox>
#include<QTableView>
namespace Ui {
class datawindow;
}
class QSqlTableModel;
class datawindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit datawindow(loginwindow* parent,Manager*pManager);
    ~datawindow();

private:
    Ui::datawindow *ui;
    loginwindow*parent;
    Manager*pManager;
    myDatabase DataBase;
    QSqlTableModel*model1;
    QSqlTableModel*model2;
private slots:void CookShow();
              void WaiterShow();
              void CookClear();
              void CookClear1();
              void WaiterClear();
              void WaiterClear1();
              void CookQuery();
              void WaiterQuery();
              void exitProgram();
              void save();
};

#endif // DATAWINDOW_H
