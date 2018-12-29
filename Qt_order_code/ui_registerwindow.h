/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

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

class Ui_registerwindow
{
public:
    QLabel *label;
    QLineEdit *lPassword;
    QLineEdit *lUserid;
    QLineEdit *lPassword2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *bRegister;
    QPushButton *bCancel;
    QLabel *label_2;

    void setupUi(QWidget *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName(QStringLiteral("registerwindow"));
        registerwindow->resize(400, 300);
        registerwindow->setStyleSheet(QLatin1String("QPushButton{color rgb(170, 170, 255)}\n"
""));
        label = new QLabel(registerwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 200, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        lPassword = new QLineEdit(registerwindow);
        lPassword->setObjectName(QStringLiteral("lPassword"));
        lPassword->setGeometry(QRect(150, 130, 200, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lPassword->setFont(font1);
        lPassword->setEchoMode(QLineEdit::Password);
        lUserid = new QLineEdit(registerwindow);
        lUserid->setObjectName(QStringLiteral("lUserid"));
        lUserid->setGeometry(QRect(150, 72, 200, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        lUserid->setFont(font2);
        lPassword2 = new QLineEdit(registerwindow);
        lPassword2->setObjectName(QStringLiteral("lPassword2"));
        lPassword2->setGeometry(QRect(150, 180, 200, 30));
        lPassword2->setFont(font1);
        lPassword2->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(registerwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 100, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_4 = new QLabel(registerwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 100, 30));
        label_4->setFont(font3);
        label_5 = new QLabel(registerwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 100, 30));
        label_5->setFont(font3);
        bRegister = new QPushButton(registerwindow);
        bRegister->setObjectName(QStringLiteral("bRegister"));
        bRegister->setGeometry(QRect(30, 250, 100, 30));
        bRegister->setFont(font2);
        bCancel = new QPushButton(registerwindow);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(270, 250, 100, 30));
        bCancel->setFont(font2);
        label_2 = new QLabel(registerwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 100, 30));
        label_2->setFont(font3);

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QWidget *registerwindow)
    {
        registerwindow->setWindowTitle(QApplication::translate("registerwindow", "Form", 0));
        label->setText(QApplication::translate("registerwindow", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        label_3->setText(QApplication::translate("registerwindow", "\346\211\213\346\234\272\345\217\267/", 0));
        label_4->setText(QApplication::translate("registerwindow", "\345\257\206\347\240\201\357\274\232", 0));
        label_5->setText(QApplication::translate("registerwindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        bRegister->setText(QApplication::translate("registerwindow", "\347\241\256\350\256\244", 0));
        bCancel->setText(QApplication::translate("registerwindow", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("registerwindow", "\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
