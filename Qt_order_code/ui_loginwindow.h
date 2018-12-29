/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QLineEdit *lId;
    QLineEdit *lPassword;
    QPushButton *bRegister;
    QPushButton *bLogin;
    QLabel *lId3;
    QLabel *lPassword3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName(QStringLiteral("loginwindow"));
        loginwindow->resize(600, 500);
        loginwindow->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background: rgba(255,255,255,60);\n"
"	border: 0px;\n"
"	color: white;\n"
"	border-radius:5px;\n"
"	selection-background-color: rgba(255,255,255,150);\n"
"}\n"
"QLable{\n"
"color: white;\n"
"}\n"
"QPushBotton{\n"
"background: rgba(255,255,255,60);\n"
"	border: 0px;\n"
"\n"
"	\n"
"}"));
        lId = new QLineEdit(loginwindow);
        lId->setObjectName(QStringLiteral("lId"));
        lId->setGeometry(QRect(270, 240, 300, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        lId->setFont(font);
        lId->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        lPassword = new QLineEdit(loginwindow);
        lPassword->setObjectName(QStringLiteral("lPassword"));
        lPassword->setGeometry(QRect(270, 320, 300, 40));
        lPassword->setFont(font);
        lPassword->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        lPassword->setEchoMode(QLineEdit::Password);
        bRegister = new QPushButton(loginwindow);
        bRegister->setObjectName(QStringLiteral("bRegister"));
        bRegister->setGeometry(QRect(380, 410, 150, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        bRegister->setFont(font1);
        bRegister->setStyleSheet(QLatin1String("color: rgb(85, 0, 0);\n"
"background: rgba(255,255,255,60);"));
        bLogin = new QPushButton(loginwindow);
        bLogin->setObjectName(QStringLiteral("bLogin"));
        bLogin->setGeometry(QRect(70, 410, 150, 35));
        bLogin->setFont(font1);
        bLogin->setStyleSheet(QLatin1String("color: rgb(85, 0, 0);\n"
"background: rgba(255,255,255,60);"));
        lId3 = new QLabel(loginwindow);
        lId3->setObjectName(QStringLiteral("lId3"));
        lId3->setGeometry(QRect(50, 240, 200, 40));
        lId3->setFont(font1);
        lId3->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        lPassword3 = new QLabel(loginwindow);
        lPassword3->setObjectName(QStringLiteral("lPassword3"));
        lPassword3->setGeometry(QRect(180, 320, 100, 40));
        lPassword3->setFont(font1);
        lPassword3->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        label = new QLabel(loginwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 400, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("color: rgb(72, 57, 53);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(loginwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 400, 100));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QWidget *loginwindow)
    {
        loginwindow->setWindowTitle(QApplication::translate("loginwindow", "\347\202\271\351\203\275\345\276\267++\351\244\220\345\216\205\346\234\215\345\212\241\344\270\216\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        bRegister->setText(QApplication::translate("loginwindow", "\346\263\250\345\206\214", 0));
        bLogin->setText(QApplication::translate("loginwindow", "\347\231\273\345\275\225", 0));
        lId3->setText(QApplication::translate("loginwindow", "\346\211\213\346\234\272\345\217\267/\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        lPassword3->setText(QApplication::translate("loginwindow", "\345\257\206\347\240\201\357\274\232", 0));
        label->setText(QApplication::translate("loginwindow", "\347\202\271\351\203\275\345\276\267++\345\271\277\345\274\217\350\214\266\351\244\220\345\216\205", 0));
        label_2->setText(QApplication::translate("loginwindow", "<html><head/><body><p>\346\254\242\350\277\216\345\205\211\344\270\264!</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
