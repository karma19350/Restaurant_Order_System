/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *mTable;
    QLabel *label;
    QLineEdit *ldishQuery;
    QPushButton *bdishQuery1;
    QPushButton *bdishShow;
    QComboBox *cQuery;
    QLabel *label_2;
    QPushButton *bdishQuery2;
    QPushButton *bdishEdit;
    QPushButton *bdishAdd;
    QPushButton *bdishDel;
    QWidget *tab_2;
    QTableWidget *cusTable;
    QPushButton *bcusDel;
    QLabel *label_3;
    QLineEdit *lcusQuery;
    QPushButton *bcusQuery;
    QPushButton *bcusShow;
    QWidget *tab_3;
    QTableWidget *cookTable;
    QLabel *label_4;
    QLineEdit *lcookQuery;
    QPushButton *bcookQuery;
    QPushButton *bcookShow;
    QPushButton *bcookDel;
    QPushButton *bcookAdd;
    QWidget *tab_4;
    QTableWidget *wTable;
    QLabel *label_5;
    QPushButton *bwaiterQuery;
    QPushButton *bwaiterShow;
    QLineEdit *lwaiterQuery;
    QPushButton *bwaiterAdd;
    QPushButton *bwaiterDel;
    QWidget *tab_5;
    QTableWidget *tTable;
    QLabel *label_6;
    QPushButton *btableAdd;
    QPushButton *btableDel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *bLogout;
    QPushButton *bExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(1200, 700);
        adminwindow->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);\n"
"	padding:20px;\n"
"width:200px;\n"
"height:30px;\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: rgb(189, 232, 255);\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(adminwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1200, 700));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        mTable = new QTableWidget(tab);
        mTable->setObjectName(QStringLiteral("mTable"));
        mTable->setGeometry(QRect(20, 50, 1160, 450));
        mTable->setFont(font);
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 150, 30));
        label->setFont(font);
        ldishQuery = new QLineEdit(tab);
        ldishQuery->setObjectName(QStringLiteral("ldishQuery"));
        ldishQuery->setGeometry(QRect(150, 10, 250, 30));
        ldishQuery->setFont(font);
        bdishQuery1 = new QPushButton(tab);
        bdishQuery1->setObjectName(QStringLiteral("bdishQuery1"));
        bdishQuery1->setGeometry(QRect(450, 7, 150, 35));
        bdishQuery1->setFont(font);
        bdishShow = new QPushButton(tab);
        bdishShow->setObjectName(QStringLiteral("bdishShow"));
        bdishShow->setGeometry(QRect(20, 520, 180, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        bdishShow->setFont(font1);
        cQuery = new QComboBox(tab);
        cQuery->setObjectName(QStringLiteral("cQuery"));
        cQuery->setGeometry(QRect(810, 7, 150, 35));
        cQuery->setFont(font);
        cQuery->setFocusPolicy(Qt::ClickFocus);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 10, 150, 30));
        label_2->setFont(font);
        bdishQuery2 = new QPushButton(tab);
        bdishQuery2->setObjectName(QStringLiteral("bdishQuery2"));
        bdishQuery2->setGeometry(QRect(1020, 7, 150, 35));
        bdishQuery2->setFont(font);
        bdishEdit = new QPushButton(tab);
        bdishEdit->setObjectName(QStringLiteral("bdishEdit"));
        bdishEdit->setGeometry(QRect(340, 520, 180, 50));
        bdishEdit->setFont(font1);
        bdishAdd = new QPushButton(tab);
        bdishAdd->setObjectName(QStringLiteral("bdishAdd"));
        bdishAdd->setGeometry(QRect(665, 520, 180, 50));
        bdishAdd->setFont(font1);
        bdishDel = new QPushButton(tab);
        bdishDel->setObjectName(QStringLiteral("bdishDel"));
        bdishDel->setGeometry(QRect(1000, 520, 180, 50));
        bdishDel->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        cusTable = new QTableWidget(tab_2);
        cusTable->setObjectName(QStringLiteral("cusTable"));
        cusTable->setGeometry(QRect(20, 50, 1160, 450));
        cusTable->setFont(font);
        cusTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cusTable->setSelectionMode(QAbstractItemView::SingleSelection);
        cusTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        bcusDel = new QPushButton(tab_2);
        bcusDel->setObjectName(QStringLiteral("bcusDel"));
        bcusDel->setEnabled(true);
        bcusDel->setGeometry(QRect(880, 520, 300, 50));
        bcusDel->setFont(font1);
        bcusDel->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 8, 170, 30));
        label_3->setFont(font);
        lcusQuery = new QLineEdit(tab_2);
        lcusQuery->setObjectName(QStringLiteral("lcusQuery"));
        lcusQuery->setGeometry(QRect(200, 10, 250, 30));
        lcusQuery->setFont(font);
        bcusQuery = new QPushButton(tab_2);
        bcusQuery->setObjectName(QStringLiteral("bcusQuery"));
        bcusQuery->setGeometry(QRect(800, 8, 150, 35));
        bcusQuery->setFont(font);
        bcusShow = new QPushButton(tab_2);
        bcusShow->setObjectName(QStringLiteral("bcusShow"));
        bcusShow->setGeometry(QRect(1000, 8, 150, 35));
        bcusShow->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        cookTable = new QTableWidget(tab_3);
        cookTable->setObjectName(QStringLiteral("cookTable"));
        cookTable->setGeometry(QRect(20, 50, 1160, 450));
        cookTable->setFont(font);
        cookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cookTable->setSelectionMode(QAbstractItemView::SingleSelection);
        cookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 170, 30));
        label_4->setFont(font);
        lcookQuery = new QLineEdit(tab_3);
        lcookQuery->setObjectName(QStringLiteral("lcookQuery"));
        lcookQuery->setGeometry(QRect(220, 10, 250, 30));
        lcookQuery->setFont(font);
        bcookQuery = new QPushButton(tab_3);
        bcookQuery->setObjectName(QStringLiteral("bcookQuery"));
        bcookQuery->setGeometry(QRect(800, 8, 150, 35));
        bcookQuery->setFont(font);
        bcookShow = new QPushButton(tab_3);
        bcookShow->setObjectName(QStringLiteral("bcookShow"));
        bcookShow->setGeometry(QRect(1000, 8, 150, 35));
        bcookShow->setFont(font);
        bcookDel = new QPushButton(tab_3);
        bcookDel->setObjectName(QStringLiteral("bcookDel"));
        bcookDel->setEnabled(true);
        bcookDel->setGeometry(QRect(880, 520, 300, 50));
        bcookDel->setFont(font1);
        bcookDel->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        bcookAdd = new QPushButton(tab_3);
        bcookAdd->setObjectName(QStringLiteral("bcookAdd"));
        bcookAdd->setEnabled(true);
        bcookAdd->setGeometry(QRect(520, 520, 300, 50));
        bcookAdd->setFont(font1);
        bcookAdd->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        wTable = new QTableWidget(tab_4);
        wTable->setObjectName(QStringLiteral("wTable"));
        wTable->setGeometry(QRect(20, 50, 1160, 450));
        wTable->setFont(font);
        wTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        wTable->setSelectionMode(QAbstractItemView::SingleSelection);
        wTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 200, 30));
        label_5->setFont(font);
        bwaiterQuery = new QPushButton(tab_4);
        bwaiterQuery->setObjectName(QStringLiteral("bwaiterQuery"));
        bwaiterQuery->setGeometry(QRect(800, 8, 150, 35));
        bwaiterQuery->setFont(font);
        bwaiterShow = new QPushButton(tab_4);
        bwaiterShow->setObjectName(QStringLiteral("bwaiterShow"));
        bwaiterShow->setGeometry(QRect(1000, 8, 150, 35));
        bwaiterShow->setFont(font);
        lwaiterQuery = new QLineEdit(tab_4);
        lwaiterQuery->setObjectName(QStringLiteral("lwaiterQuery"));
        lwaiterQuery->setGeometry(QRect(250, 10, 250, 30));
        lwaiterQuery->setFont(font);
        bwaiterAdd = new QPushButton(tab_4);
        bwaiterAdd->setObjectName(QStringLiteral("bwaiterAdd"));
        bwaiterAdd->setEnabled(true);
        bwaiterAdd->setGeometry(QRect(520, 520, 300, 50));
        bwaiterAdd->setFont(font1);
        bwaiterAdd->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        bwaiterDel = new QPushButton(tab_4);
        bwaiterDel->setObjectName(QStringLiteral("bwaiterDel"));
        bwaiterDel->setEnabled(true);
        bwaiterDel->setGeometry(QRect(880, 520, 300, 50));
        bwaiterDel->setFont(font1);
        bwaiterDel->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tTable = new QTableWidget(tab_5);
        tTable->setObjectName(QStringLiteral("tTable"));
        tTable->setGeometry(QRect(20, 50, 400, 450));
        tTable->setFont(font);
        tTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 11, 300, 30));
        label_6->setFont(font1);
        btableAdd = new QPushButton(tab_5);
        btableAdd->setObjectName(QStringLiteral("btableAdd"));
        btableAdd->setGeometry(QRect(20, 530, 150, 40));
        btableAdd->setFont(font1);
        btableDel = new QPushButton(tab_5);
        btableDel->setObjectName(QStringLiteral("btableDel"));
        btableDel->setGeometry(QRect(260, 530, 150, 40));
        btableDel->setFont(font1);
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(500, 80, 600, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(650, 140, 300, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(16);
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(750, 200, 100, 30));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(620, 260, 400, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        label_10->setFont(font4);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(620, 300, 400, 40));
        label_11->setFont(font4);
        label_11->setAlignment(Qt::AlignCenter);
        bLogout = new QPushButton(tab_5);
        bLogout->setObjectName(QStringLiteral("bLogout"));
        bLogout->setGeometry(QRect(640, 425, 150, 50));
        bLogout->setFont(font1);
        bExit = new QPushButton(tab_5);
        bExit->setObjectName(QStringLiteral("bExit"));
        bExit->setGeometry(QRect(860, 425, 150, 50));
        bExit->setFont(font1);
        tabWidget->addTab(tab_5, QString());
        adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminwindow->setStatusBar(statusbar);

        retranslateUi(adminwindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "\347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("adminwindow", " \350\217\234\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        bdishQuery1->setText(QApplication::translate("adminwindow", "\346\237\245\350\257\242", 0));
        bdishShow->setText(QApplication::translate("adminwindow", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        cQuery->clear();
        cQuery->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("adminwindow", "\350\222\270\345\214\205\347\261\273", 0)
         << QApplication::translate("adminwindow", "\347\205\216\347\204\227\347\261\273", 0)
         << QApplication::translate("adminwindow", "\350\224\254\350\217\234\347\261\273", 0)
         << QApplication::translate("adminwindow", "\350\202\240\347\262\211\347\261\273", 0)
         << QApplication::translate("adminwindow", "\351\245\255\347\262\245\347\261\273", 0)
         << QApplication::translate("adminwindow", "\347\224\234\345\223\201\347\261\273", 0)
        );
        label_2->setText(QApplication::translate("adminwindow", " \350\217\234\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        bdishQuery2->setText(QApplication::translate("adminwindow", "\346\214\211\347\261\273\346\237\245\350\257\242", 0));
        bdishEdit->setText(QApplication::translate("adminwindow", "\347\274\226\350\276\221\350\217\234\345\223\201", 0));
        bdishAdd->setText(QApplication::translate("adminwindow", "\345\242\236\345\212\240\350\217\234\345\223\201", 0));
        bdishDel->setText(QApplication::translate("adminwindow", "\345\210\240\351\231\244\350\217\234\345\223\201", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("adminwindow", "\350\217\234\345\215\225\345\210\227\350\241\250", 0));
        bcusDel->setText(QApplication::translate("adminwindow", "\345\210\240\351\231\244\346\227\240\346\225\210\350\264\246\345\217\267", 0));
        label_3->setText(QApplication::translate("adminwindow", "\351\241\276\345\256\242\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        bcusQuery->setText(QApplication::translate("adminwindow", " \346\237\245\350\257\242", 0));
        bcusShow->setText(QApplication::translate("adminwindow", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("adminwindow", " \351\241\276\345\256\242\345\210\227\350\241\250", 0));
        label_4->setText(QApplication::translate("adminwindow", "\345\216\250\345\270\210\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        bcookQuery->setText(QApplication::translate("adminwindow", "\346\237\245\350\257\242", 0));
        bcookShow->setText(QApplication::translate("adminwindow", "\346\230\276\347\244\272\346\211\200\346\234\211", 0));
        bcookDel->setText(QApplication::translate("adminwindow", "\345\210\240\351\231\244\346\227\240\346\225\210\350\264\246\345\217\267", 0));
        bcookAdd->setText(QApplication::translate("adminwindow", "\346\267\273\345\212\240\346\226\260\350\264\246\345\217\267", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("adminwindow", "   \345\216\250\345\270\210\345\210\227\350\241\250", 0));
        label_5->setText(QApplication::translate("adminwindow", "  \346\234\215\345\212\241\345\221\230\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        bwaiterQuery->setText(QApplication::translate("adminwindow", "\346\237\245\350\257\242", 0));
        bwaiterShow->setText(QApplication::translate("adminwindow", "\346\230\276\347\244\272\346\211\200\346\234\211", 0));
        bwaiterAdd->setText(QApplication::translate("adminwindow", "\346\267\273\345\212\240\346\226\260\350\264\246\345\217\267", 0));
        bwaiterDel->setText(QApplication::translate("adminwindow", "\345\210\240\351\231\244\346\227\240\346\225\210\350\264\246\345\217\267", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("adminwindow", " \346\234\215\345\212\241\345\221\230\345\210\227\350\241\250", 0));
        label_6->setText(QApplication::translate("adminwindow", " \346\230\276\347\244\272\345\275\223\345\211\215\346\211\200\346\234\211\351\244\220\346\241\214\345\217\267\357\274\232", 0));
        btableAdd->setText(QApplication::translate("adminwindow", "\346\267\273\345\212\240\346\241\214\345\217\267", 0));
        btableDel->setText(QApplication::translate("adminwindow", "\345\210\240\351\231\244\346\241\214\345\217\267", 0));
        label_7->setText(QApplication::translate("adminwindow", "    \347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_8->setText(QApplication::translate("adminwindow", "C++\347\250\213\345\272\217\350\256\276\350\256\241\344\270\216\350\256\255\347\273\203", 0));
        label_9->setText(QApplication::translate("adminwindow", " \350\256\276\350\256\241\350\200\205", 0));
        label_10->setText(QApplication::translate("adminwindow", "\351\222\237\346\270\205\346\211\254     2016011481", 0));
        label_11->setText(QApplication::translate("adminwindow", "zhongqy16@mails.tsinghua.edu.cn", 0));
        bLogout->setText(QApplication::translate("adminwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
        bExit->setText(QApplication::translate("adminwindow", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("adminwindow", "\345\205\266\344\273\226", 0));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
