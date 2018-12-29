/********************************************************************************
** Form generated from reading UI file 'datawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAWINDOW_H
#define UI_DATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datawindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLineEdit *lCook;
    QPushButton *bCookQuery;
    QTableView *cTable;
    QPushButton *bCookShow;
    QPushButton *bCookClear;
    QWidget *tab_2;
    QLabel *label;
    QLineEdit *lWaiter;
    QPushButton *bWaiterQuery;
    QTableView *wTable;
    QPushButton *bWaiterShow;
    QPushButton *bWaiterClear;
    QPushButton *bExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *datawindow)
    {
        if (datawindow->objectName().isEmpty())
            datawindow->setObjectName(QStringLiteral("datawindow"));
        datawindow->resize(800, 600);
        centralwidget = new QWidget(datawindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);\n"
"	padding:20px;\n"
"width:360px;\n"
"height:30px;\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: rgb(189, 232, 255);\n"
"\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 15, 150, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label_2->setFont(font);
        lCook = new QLineEdit(tab);
        lCook->setObjectName(QStringLiteral("lCook"));
        lCook->setGeometry(QRect(200, 15, 250, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        lCook->setFont(font1);
        bCookQuery = new QPushButton(tab);
        bCookQuery->setObjectName(QStringLiteral("bCookQuery"));
        bCookQuery->setGeometry(QRect(570, 12, 150, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        bCookQuery->setFont(font2);
        cTable = new QTableView(tab);
        cTable->setObjectName(QStringLiteral("cTable"));
        cTable->setGeometry(QRect(30, 65, 740, 350));
        cTable->setFont(font1);
        cTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        bCookShow = new QPushButton(tab);
        bCookShow->setObjectName(QStringLiteral("bCookShow"));
        bCookShow->setEnabled(true);
        bCookShow->setGeometry(QRect(110, 430, 180, 40));
        bCookShow->setFont(font);
        bCookClear = new QPushButton(tab);
        bCookClear->setObjectName(QStringLiteral("bCookClear"));
        bCookClear->setEnabled(true);
        bCookClear->setGeometry(QRect(510, 430, 180, 40));
        bCookClear->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 15, 180, 30));
        label->setFont(font);
        lWaiter = new QLineEdit(tab_2);
        lWaiter->setObjectName(QStringLiteral("lWaiter"));
        lWaiter->setGeometry(QRect(200, 15, 250, 30));
        lWaiter->setFont(font1);
        bWaiterQuery = new QPushButton(tab_2);
        bWaiterQuery->setObjectName(QStringLiteral("bWaiterQuery"));
        bWaiterQuery->setGeometry(QRect(570, 12, 150, 35));
        bWaiterQuery->setFont(font2);
        wTable = new QTableView(tab_2);
        wTable->setObjectName(QStringLiteral("wTable"));
        wTable->setGeometry(QRect(30, 65, 740, 350));
        wTable->setFont(font1);
        wTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        bWaiterShow = new QPushButton(tab_2);
        bWaiterShow->setObjectName(QStringLiteral("bWaiterShow"));
        bWaiterShow->setEnabled(true);
        bWaiterShow->setGeometry(QRect(30, 430, 180, 40));
        bWaiterShow->setFont(font);
        bWaiterClear = new QPushButton(tab_2);
        bWaiterClear->setObjectName(QStringLiteral("bWaiterClear"));
        bWaiterClear->setEnabled(true);
        bWaiterClear->setGeometry(QRect(310, 430, 180, 40));
        bWaiterClear->setFont(font);
        bExit = new QPushButton(tab_2);
        bExit->setObjectName(QStringLiteral("bExit"));
        bExit->setEnabled(true);
        bExit->setGeometry(QRect(590, 430, 180, 40));
        bExit->setFont(font);
        tabWidget->addTab(tab_2, QString());
        datawindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(datawindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        datawindow->setMenuBar(menubar);
        statusbar = new QStatusBar(datawindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        datawindow->setStatusBar(statusbar);

        retranslateUi(datawindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(datawindow);
    } // setupUi

    void retranslateUi(QMainWindow *datawindow)
    {
        datawindow->setWindowTitle(QApplication::translate("datawindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("datawindow", " \345\216\250\345\270\210\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        bCookQuery->setText(QApplication::translate("datawindow", " \346\237\245\350\257\242", 0));
        bCookShow->setText(QApplication::translate("datawindow", " \346\230\276\347\244\272\345\205\250\351\203\250", 0));
        bCookClear->setText(QApplication::translate("datawindow", "\346\270\205\347\251\272\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("datawindow", "\350\217\234\345\223\201\350\257\204\344\273\267\345\210\227\350\241\250", 0));
        label->setText(QApplication::translate("datawindow", "\346\234\215\345\212\241\345\221\230\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        bWaiterQuery->setText(QApplication::translate("datawindow", " \346\237\245\350\257\242", 0));
        bWaiterShow->setText(QApplication::translate("datawindow", " \346\230\276\347\244\272\345\205\250\351\203\250", 0));
        bWaiterClear->setText(QApplication::translate("datawindow", " \346\270\205\347\251\272\345\210\227\350\241\250", 0));
        bExit->setText(QApplication::translate("datawindow", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("datawindow", "\346\234\215\345\212\241\350\257\204\344\273\267\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class datawindow: public Ui_datawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAWINDOW_H
