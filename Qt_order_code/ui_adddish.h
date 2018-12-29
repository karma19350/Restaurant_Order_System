/********************************************************************************
** Form generated from reading UI file 'adddish.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDISH_H
#define UI_ADDDISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adddish
{
public:
    QLineEdit *lname;
    QLabel *label_2;
    QComboBox *ctype;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lmoney;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *bOk;
    QPushButton *bCancel;

    void setupUi(QWidget *adddish)
    {
        if (adddish->objectName().isEmpty())
            adddish->setObjectName(QStringLiteral("adddish"));
        adddish->resize(500, 400);
        lname = new QLineEdit(adddish);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setGeometry(QRect(150, 100, 250, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        lname->setFont(font);
        label_2 = new QLabel(adddish);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 150, 40));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ctype = new QComboBox(adddish);
        ctype->setObjectName(QStringLiteral("ctype"));
        ctype->setGeometry(QRect(150, 170, 130, 35));
        ctype->setFont(font);
        label_3 = new QLabel(adddish);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 150, 40));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(adddish);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        lmoney = new QLineEdit(adddish);
        lmoney->setObjectName(QStringLiteral("lmoney"));
        lmoney->setGeometry(QRect(150, 250, 100, 35));
        lmoney->setFont(font);
        label_5 = new QLabel(adddish);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 250, 41, 40));
        label_5->setFont(font);
        label_4 = new QLabel(adddish);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 250, 150, 40));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        bOk = new QPushButton(adddish);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(50, 330, 120, 40));
        bOk->setFont(font);
        bCancel = new QPushButton(adddish);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(300, 330, 120, 40));
        bCancel->setFont(font);

        retranslateUi(adddish);

        QMetaObject::connectSlotsByName(adddish);
    } // setupUi

    void retranslateUi(QWidget *adddish)
    {
        adddish->setWindowTitle(QApplication::translate("adddish", "Form", 0));
        label_2->setText(QApplication::translate("adddish", "\350\217\234\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        ctype->clear();
        ctype->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("adddish", "\350\222\270\345\214\205\347\261\273", 0)
         << QApplication::translate("adddish", "\347\205\216\347\204\227\347\261\273", 0)
         << QApplication::translate("adddish", "\350\224\254\350\217\234\347\261\273", 0)
         << QApplication::translate("adddish", "\350\202\240\347\262\211\347\261\273", 0)
         << QApplication::translate("adddish", "\351\245\255\347\262\245\347\261\273", 0)
         << QApplication::translate("adddish", "\347\224\234\345\223\201\347\261\273", 0)
        );
        label_3->setText(QApplication::translate("adddish", "\350\217\234\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        label->setText(QApplication::translate("adddish", "\346\267\273\345\212\240\350\217\234\345\223\201", 0));
        label_5->setText(QApplication::translate("adddish", "\345\205\203", 0));
        label_4->setText(QApplication::translate("adddish", "\350\217\234\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        bOk->setText(QApplication::translate("adddish", "\347\241\256\345\256\232", 0));
        bCancel->setText(QApplication::translate("adddish", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class adddish: public Ui_adddish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDISH_H
