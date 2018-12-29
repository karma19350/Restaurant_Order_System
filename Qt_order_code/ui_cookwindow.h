/********************************************************************************
** Form generated from reading UI file 'cookwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOKWINDOW_H
#define UI_COOKWINDOW_H

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

class Ui_cookwindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tdTable;
    QPushButton *bRefresh1;
    QPushButton *bAdd;
    QWidget *tab_2;
    QTableWidget *myTable;
    QPushButton *bComplete;
    QWidget *tab_3;
    QTableWidget *cTable;
    QPushButton *bRefresh2;
    QPushButton *bLogout;
    QPushButton *bExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cookwindow)
    {
        if (cookwindow->objectName().isEmpty())
            cookwindow->setObjectName(QStringLiteral("cookwindow"));
        cookwindow->resize(1000, 700);
        cookwindow->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);\n"
"	padding:20px;\n"
"width:293px;\n"
"height:30px;\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: rgb(189, 232, 255);\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(cookwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1000, 700));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tdTable = new QTableWidget(tab);
        tdTable->setObjectName(QStringLiteral("tdTable"));
        tdTable->setGeometry(QRect(20, 30, 960, 450));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        tdTable->setFont(font);
        bRefresh1 = new QPushButton(tab);
        bRefresh1->setObjectName(QStringLiteral("bRefresh1"));
        bRefresh1->setGeometry(QRect(550, 520, 150, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        bRefresh1->setFont(font1);
        bAdd = new QPushButton(tab);
        bAdd->setObjectName(QStringLiteral("bAdd"));
        bAdd->setGeometry(QRect(760, 520, 220, 50));
        bAdd->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        myTable = new QTableWidget(tab_2);
        myTable->setObjectName(QStringLiteral("myTable"));
        myTable->setGeometry(QRect(20, 30, 960, 450));
        myTable->setFont(font);
        bComplete = new QPushButton(tab_2);
        bComplete->setObjectName(QStringLiteral("bComplete"));
        bComplete->setGeometry(QRect(740, 530, 200, 50));
        bComplete->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        cTable = new QTableWidget(tab_3);
        cTable->setObjectName(QStringLiteral("cTable"));
        cTable->setGeometry(QRect(20, 30, 960, 450));
        cTable->setFont(font);
        bRefresh2 = new QPushButton(tab_3);
        bRefresh2->setObjectName(QStringLiteral("bRefresh2"));
        bRefresh2->setGeometry(QRect(30, 520, 180, 50));
        bRefresh2->setFont(font1);
        bLogout = new QPushButton(tab_3);
        bLogout->setObjectName(QStringLiteral("bLogout"));
        bLogout->setGeometry(QRect(410, 520, 180, 50));
        bLogout->setFont(font1);
        bExit = new QPushButton(tab_3);
        bExit->setObjectName(QStringLiteral("bExit"));
        bExit->setGeometry(QRect(790, 520, 180, 50));
        bExit->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        cookwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cookwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 17));
        cookwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(cookwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        cookwindow->setStatusBar(statusbar);

        retranslateUi(cookwindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(cookwindow);
    } // setupUi

    void retranslateUi(QMainWindow *cookwindow)
    {
        cookwindow->setWindowTitle(QApplication::translate("cookwindow", "\347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\347\256\241\347\220\206\344\270\216\346\234\215\345\212\241\347\263\273\347\273\237", 0));
        bRefresh1->setText(QApplication::translate("cookwindow", " \345\210\267\346\226\260\345\210\227\350\241\250", 0));
        bAdd->setText(QApplication::translate("cookwindow", "  \345\212\240\345\205\245\342\200\234\346\210\221\347\232\204\344\273\273\345\212\241\342\200\235", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("cookwindow", "\344\273\273\345\212\241\346\270\205\345\215\225", 0));
        bComplete->setText(QApplication::translate("cookwindow", "    \344\273\273\345\212\241\345\256\214\346\210\220\357\274\201", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("cookwindow", "  \346\210\221\347\232\204\344\273\273\345\212\241", 0));
        bRefresh2->setText(QApplication::translate("cookwindow", " \345\210\267\346\226\260\345\210\227\350\241\250", 0));
        bLogout->setText(QApplication::translate("cookwindow", "  \351\200\200\345\207\272\347\231\273\345\275\225", 0));
        bExit->setText(QApplication::translate("cookwindow", "  \351\200\200\345\207\272\347\263\273\347\273\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("cookwindow", "\345\267\262\345\256\214\346\210\220\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class cookwindow: public Ui_cookwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOKWINDOW_H
