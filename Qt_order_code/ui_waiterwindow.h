/********************************************************************************
** Form generated from reading UI file 'waiterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITERWINDOW_H
#define UI_WAITERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waiterwindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tTable;
    QPushButton *bAdd;
    QPushButton *bRefresh1;
    QWidget *tab_2;
    QTableWidget *rTable;
    QPushButton *bDeal;
    QPushButton *bRefresh2;
    QWidget *tab_3;
    QTableWidget *msgTable;
    QPushButton *bGetDish;
    QPushButton *bLogout;
    QPushButton *bExit;
    QPushButton *bRefresh3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *waiterwindow)
    {
        if (waiterwindow->objectName().isEmpty())
            waiterwindow->setObjectName(QStringLiteral("waiterwindow"));
        waiterwindow->resize(1000, 700);
        waiterwindow->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);\n"
"	padding:20px;\n"
"width:293px;\n"
"height:30px;\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: rgb(189, 232, 255);\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(waiterwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1000, 700));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tTable = new QTableWidget(tab);
        tTable->setObjectName(QStringLiteral("tTable"));
        tTable->setGeometry(QRect(20, 30, 960, 450));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        tTable->setFont(font);
        bAdd = new QPushButton(tab);
        bAdd->setObjectName(QStringLiteral("bAdd"));
        bAdd->setGeometry(QRect(800, 530, 180, 45));
        bAdd->setFont(font);
        bRefresh1 = new QPushButton(tab);
        bRefresh1->setObjectName(QStringLiteral("bRefresh1"));
        bRefresh1->setGeometry(QRect(520, 530, 180, 45));
        bRefresh1->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        rTable = new QTableWidget(tab_2);
        rTable->setObjectName(QStringLiteral("rTable"));
        rTable->setGeometry(QRect(20, 30, 960, 450));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        rTable->setFont(font1);
        bDeal = new QPushButton(tab_2);
        bDeal->setObjectName(QStringLiteral("bDeal"));
        bDeal->setGeometry(QRect(800, 530, 180, 45));
        bDeal->setFont(font1);
        bRefresh2 = new QPushButton(tab_2);
        bRefresh2->setObjectName(QStringLiteral("bRefresh2"));
        bRefresh2->setGeometry(QRect(520, 530, 180, 45));
        bRefresh2->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        msgTable = new QTableWidget(tab_3);
        msgTable->setObjectName(QStringLiteral("msgTable"));
        msgTable->setGeometry(QRect(20, 30, 960, 450));
        msgTable->setFont(font);
        bGetDish = new QPushButton(tab_3);
        bGetDish->setObjectName(QStringLiteral("bGetDish"));
        bGetDish->setGeometry(QRect(30, 520, 180, 40));
        bGetDish->setFont(font1);
        bLogout = new QPushButton(tab_3);
        bLogout->setObjectName(QStringLiteral("bLogout"));
        bLogout->setGeometry(QRect(525, 520, 180, 40));
        bLogout->setFont(font1);
        bExit = new QPushButton(tab_3);
        bExit->setObjectName(QStringLiteral("bExit"));
        bExit->setGeometry(QRect(790, 520, 180, 40));
        bExit->setFont(font1);
        bRefresh3 = new QPushButton(tab_3);
        bRefresh3->setObjectName(QStringLiteral("bRefresh3"));
        bRefresh3->setGeometry(QRect(280, 520, 180, 40));
        bRefresh3->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        waiterwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(waiterwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 17));
        waiterwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(waiterwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        waiterwindow->setStatusBar(statusbar);

        retranslateUi(waiterwindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(waiterwindow);
    } // setupUi

    void retranslateUi(QMainWindow *waiterwindow)
    {
        waiterwindow->setWindowTitle(QApplication::translate("waiterwindow", "\347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        bAdd->setText(QApplication::translate("waiterwindow", "\346\210\221\346\235\245\347\205\247\346\226\231", 0));
        bRefresh1->setText(QApplication::translate("waiterwindow", "\345\210\267\346\226\260\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("waiterwindow", "\351\244\220\346\241\214\345\210\227\350\241\250", 0));
        bDeal->setText(QApplication::translate("waiterwindow", "\351\251\254\344\270\212\345\244\204\347\220\206\357\274\201", 0));
        bRefresh2->setText(QApplication::translate("waiterwindow", "  \345\210\267\346\226\260\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("waiterwindow", " \351\241\276\345\256\242\351\234\200\346\261\202", 0));
        bGetDish->setText(QApplication::translate("waiterwindow", " \345\211\215\345\216\273\347\253\257\350\217\234", 0));
        bLogout->setText(QApplication::translate("waiterwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
        bExit->setText(QApplication::translate("waiterwindow", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        bRefresh3->setText(QApplication::translate("waiterwindow", " \345\210\267\346\226\260\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("waiterwindow", "  \350\217\234\345\223\201\346\266\210\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class waiterwindow: public Ui_waiterwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITERWINDOW_H
