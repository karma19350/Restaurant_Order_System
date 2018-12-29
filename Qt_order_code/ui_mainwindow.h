/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tTable;
    QPushButton *bSit;
    QLabel *lFull;
    QPushButton *bRefresh;
    QWidget *tab_2;
    QTableWidget *mTable;
    QLineEdit *lQuery;
    QLabel *label;
    QPushButton *bQuery;
    QPushButton *bAdd;
    QPushButton *bShow;
    QWidget *tab_3;
    QTableWidget *dTable;
    QPushButton *bDelete;
    QPushButton *bSend;
    QPushButton *bUrge;
    QPushButton *bComdish;
    QPushButton *bMyRefresh;
    QWidget *tab_4;
    QPushButton *bWater;
    QPushButton *bPay;
    QPushButton *bComwaiter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *bLogout;
    QPushButton *bExit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_2;
    QLabel *lTablenum;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lTotal;
    QLabel *label_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 700);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);\n"
"	padding:20px;\n"
"width:260px;\n"
"height:30px;\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: rgb(189, 232, 255);\n"
"\n"
"}\n"
""));
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1200, 700));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        tabWidget->setFont(font1);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(20, 20));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tTable = new QTableWidget(tab);
        tTable->setObjectName(QStringLiteral("tTable"));
        tTable->setEnabled(true);
        tTable->setGeometry(QRect(20, 30, 1160, 450));
        tTable->setFont(font1);
        tTable->setContextMenuPolicy(Qt::DefaultContextMenu);
        tTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        bSit = new QPushButton(tab);
        bSit->setObjectName(QStringLiteral("bSit"));
        bSit->setGeometry(QRect(960, 510, 150, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        bSit->setFont(font2);
        bSit->setStyleSheet(QString::fromUtf8("QPushButton::text{\n"
"\n"
"}\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lFull = new QLabel(tab);
        lFull->setObjectName(QStringLiteral("lFull"));
        lFull->setGeometry(QRect(0, 150, 1000, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(18);
        lFull->setFont(font3);
        lFull->setAlignment(Qt::AlignCenter);
        bRefresh = new QPushButton(tab);
        bRefresh->setObjectName(QStringLiteral("bRefresh"));
        bRefresh->setGeometry(QRect(700, 510, 150, 51));
        bRefresh->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        mTable = new QTableWidget(tab_2);
        mTable->setObjectName(QStringLiteral("mTable"));
        mTable->setEnabled(true);
        mTable->setGeometry(QRect(20, 50, 1160, 450));
        mTable->setFont(font1);
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        lQuery = new QLineEdit(tab_2);
        lQuery->setObjectName(QStringLiteral("lQuery"));
        lQuery->setGeometry(QRect(200, 10, 250, 30));
        lQuery->setFont(font1);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(35, 10, 91, 30));
        label->setFont(font2);
        bQuery = new QPushButton(tab_2);
        bQuery->setObjectName(QStringLiteral("bQuery"));
        bQuery->setGeometry(QRect(800, 10, 150, 35));
        bQuery->setFont(font2);
        bAdd = new QPushButton(tab_2);
        bAdd->setObjectName(QStringLiteral("bAdd"));
        bAdd->setEnabled(false);
        bAdd->setGeometry(QRect(880, 530, 300, 50));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        bAdd->setFont(font4);
        bAdd->setStyleSheet(QLatin1String("QPushButton::text{\n"
"}\n"
"color: rgb(187, 226, 255);"));
        bShow = new QPushButton(tab_2);
        bShow->setObjectName(QStringLiteral("bShow"));
        bShow->setGeometry(QRect(1000, 10, 150, 35));
        bShow->setFont(font2);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        dTable = new QTableWidget(tab_3);
        dTable->setObjectName(QStringLiteral("dTable"));
        dTable->setEnabled(true);
        dTable->setGeometry(QRect(20, 50, 1160, 450));
        dTable->setFont(font1);
        dTable->setContextMenuPolicy(Qt::DefaultContextMenu);
        dTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dTable->setSelectionMode(QAbstractItemView::SingleSelection);
        dTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        bDelete = new QPushButton(tab_3);
        bDelete->setObjectName(QStringLiteral("bDelete"));
        bDelete->setEnabled(false);
        bDelete->setGeometry(QRect(270, 520, 180, 50));
        bDelete->setFont(font2);
        bSend = new QPushButton(tab_3);
        bSend->setObjectName(QStringLiteral("bSend"));
        bSend->setEnabled(false);
        bSend->setGeometry(QRect(510, 520, 180, 50));
        bSend->setFont(font2);
        bSend->setStyleSheet(QString::fromUtf8("QPushButtom::text{\n"
"\n"
"\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}"));
        bUrge = new QPushButton(tab_3);
        bUrge->setObjectName(QStringLiteral("bUrge"));
        bUrge->setEnabled(false);
        bUrge->setGeometry(QRect(750, 520, 180, 50));
        bUrge->setFont(font2);
        bComdish = new QPushButton(tab_3);
        bComdish->setObjectName(QStringLiteral("bComdish"));
        bComdish->setEnabled(false);
        bComdish->setGeometry(QRect(1000, 520, 180, 50));
        bComdish->setFont(font2);
        bMyRefresh = new QPushButton(tab_3);
        bMyRefresh->setObjectName(QStringLiteral("bMyRefresh"));
        bMyRefresh->setGeometry(QRect(20, 520, 180, 50));
        bMyRefresh->setFont(font2);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        bWater = new QPushButton(tab_4);
        bWater->setObjectName(QStringLiteral("bWater"));
        bWater->setEnabled(false);
        bWater->setGeometry(QRect(85, 280, 200, 50));
        bWater->setFont(font2);
        bPay = new QPushButton(tab_4);
        bPay->setObjectName(QStringLiteral("bPay"));
        bPay->setEnabled(false);
        bPay->setGeometry(QRect(85, 440, 200, 50));
        bPay->setFont(font2);
        bComwaiter = new QPushButton(tab_4);
        bComwaiter->setObjectName(QStringLiteral("bComwaiter"));
        bComwaiter->setEnabled(false);
        bComwaiter->setGeometry(QRect(85, 360, 200, 50));
        bComwaiter->setFont(font2);
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(460, 80, 600, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(20);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(610, 140, 300, 40));
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(710, 200, 100, 30));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(570, 260, 400, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(11);
        label_7->setFont(font6);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(570, 300, 400, 40));
        label_8->setFont(font6);
        label_8->setAlignment(Qt::AlignCenter);
        bLogout = new QPushButton(tab_4);
        bLogout->setObjectName(QStringLiteral("bLogout"));
        bLogout->setGeometry(QRect(550, 425, 150, 50));
        bLogout->setFont(font2);
        bExit = new QPushButton(tab_4);
        bExit->setObjectName(QStringLiteral("bExit"));
        bExit->setGeometry(QRect(850, 425, 150, 50));
        bExit->setFont(font2);
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 120, 211, 41));
        horizontalLayout_1 = new QHBoxLayout(layoutWidget);
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        horizontalLayout_1->addWidget(label_2);

        lTablenum = new QLabel(layoutWidget);
        lTablenum->setObjectName(QStringLiteral("lTablenum"));
        lTablenum->setFont(font2);

        horizontalLayout_1->addWidget(lTablenum);

        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 180, 211, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        lTotal = new QLabel(layoutWidget1);
        lTotal->setObjectName(QStringLiteral("lTotal"));
        lTotal->setFont(font2);

        horizontalLayout_2->addWidget(lTotal);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(470, 510, 600, 30));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(10);
        label_9->setFont(font7);
        label_9->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        bSit->setText(QApplication::translate("MainWindow", "\345\260\261\345\272\247", 0));
        lFull->setText(QApplication::translate("MainWindow", "\346\212\261\346\255\211\357\274\214\347\233\256\345\211\215\346\262\241\346\234\211\347\251\272\345\272\247\344\275\215\357\274\214\350\257\267\350\200\220\345\277\203\347\255\211\345\200\231~", 0));
        bRefresh->setText(QApplication::translate("MainWindow", " \345\210\267\346\226\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\351\244\220\346\241\214\345\210\227\350\241\250", 0));
        label->setText(QApplication::translate("MainWindow", " \350\217\234\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        bQuery->setText(QApplication::translate("MainWindow", " \346\237\245\350\257\242", 0));
        bAdd->setText(QApplication::translate("MainWindow", "   \345\212\240\345\205\245\342\200\234\351\243\237\347\211\251\346\211\230\347\233\230\342\200\235", 0));
        bShow->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "  \350\217\234\345\215\225\345\210\227\350\241\250", 0));
        bDelete->setText(QApplication::translate("MainWindow", "  \345\210\240\351\231\244\350\217\234\345\223\201", 0));
        bSend->setText(QApplication::translate("MainWindow", " \346\217\220\344\272\244\350\256\242\345\215\225", 0));
        bUrge->setText(QApplication::translate("MainWindow", " \345\202\254\344\277\203\344\270\212\350\217\234", 0));
        bComdish->setText(QApplication::translate("MainWindow", "\350\257\204\344\273\267\350\217\234\345\223\201", 0));
        bMyRefresh->setText(QApplication::translate("MainWindow", "  \345\210\267\346\226\260\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\210\221\347\232\204\350\217\234\345\215\225", 0));
        bWater->setText(QApplication::translate("MainWindow", " \346\210\221\350\246\201\345\212\240\346\260\264", 0));
        bPay->setText(QApplication::translate("MainWindow", "\347\273\223\350\264\246\347\246\273\345\274\200", 0));
        bComwaiter->setText(QApplication::translate("MainWindow", "\350\257\204\344\273\267\346\234\215\345\212\241", 0));
        label_4->setText(QApplication::translate("MainWindow", "    \347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_5->setText(QApplication::translate("MainWindow", "C++\347\250\213\345\272\217\350\256\276\350\256\241\344\270\216\350\256\255\347\273\203", 0));
        label_6->setText(QApplication::translate("MainWindow", " \350\256\276\350\256\241\350\200\205", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\222\237\346\270\205\346\211\254     2016011481", 0));
        label_8->setText(QApplication::translate("MainWindow", "zhongqy16@mails.tsinghua.edu.cn", 0));
        bLogout->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
        bExit->setText(QApplication::translate("MainWindow", "  \351\200\200\345\207\272\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\260\261\345\272\247\346\241\214\345\217\267\357\274\232", 0));
        lTablenum->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\347\224\250\351\244\220\351\207\221\351\242\235\357\274\232", 0));
        lTotal->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\346\270\251\351\246\250\346\217\220\347\244\272:\347\224\250\351\244\220\347\273\223\346\235\237\345\220\216\350\257\267\347\202\271\345\207\273\347\273\223\346\235\237\347\246\273\345\274\200\357\274\214\350\257\267\344\270\215\350\246\201\347\233\264\346\216\245\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", " \345\221\274\345\217\253\346\234\215\345\212\241", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
