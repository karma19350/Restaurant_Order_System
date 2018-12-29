/********************************************************************************
** Form generated from reading UI file 'editdish.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDISH_H
#define UI_EDITDISH_H

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

class Ui_editdish
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lname;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lmoney;
    QComboBox *ctype;
    QLabel *label_5;
    QPushButton *bOk;
    QPushButton *bCancel;
    QPushButton *bEdit;

    void setupUi(QWidget *editdish)
    {
        if (editdish->objectName().isEmpty())
            editdish->setObjectName(QStringLiteral("editdish"));
        editdish->resize(500, 400);
        label = new QLabel(editdish);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(editdish);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lname = new QLineEdit(editdish);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setGeometry(QRect(150, 100, 250, 35));
        lname->setFont(font1);
        label_3 = new QLabel(editdish);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 150, 40));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(editdish);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 250, 150, 40));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lmoney = new QLineEdit(editdish);
        lmoney->setObjectName(QStringLiteral("lmoney"));
        lmoney->setGeometry(QRect(150, 250, 100, 35));
        lmoney->setFont(font1);
        ctype = new QComboBox(editdish);
        ctype->setObjectName(QStringLiteral("ctype"));
        ctype->setGeometry(QRect(150, 170, 130, 35));
        ctype->setFont(font1);
        label_5 = new QLabel(editdish);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 250, 41, 40));
        label_5->setFont(font1);
        bOk = new QPushButton(editdish);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(200, 330, 120, 40));
        bOk->setFont(font1);
        bCancel = new QPushButton(editdish);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(370, 330, 120, 40));
        bCancel->setFont(font1);
        bEdit = new QPushButton(editdish);
        bEdit->setObjectName(QStringLiteral("bEdit"));
        bEdit->setGeometry(QRect(20, 330, 120, 40));
        bEdit->setFont(font1);

        retranslateUi(editdish);

        QMetaObject::connectSlotsByName(editdish);
    } // setupUi

    void retranslateUi(QWidget *editdish)
    {
        editdish->setWindowTitle(QApplication::translate("editdish", "Form", 0));
        label->setText(QApplication::translate("editdish", "\347\274\226\350\276\221\350\217\234\345\223\201\350\265\204\346\226\231", 0));
        label_2->setText(QApplication::translate("editdish", "\350\217\234\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label_3->setText(QApplication::translate("editdish", "\350\217\234\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        label_4->setText(QApplication::translate("editdish", "\350\217\234\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        ctype->clear();
        ctype->insertItems(0, QStringList()
         << QApplication::translate("editdish", "\350\222\270\345\214\205\347\261\273", 0)
         << QApplication::translate("editdish", "\347\205\216\347\204\227\347\261\273", 0)
         << QApplication::translate("editdish", "\350\224\254\350\217\234\347\261\273", 0)
         << QApplication::translate("editdish", "\350\202\240\347\262\211\347\261\273", 0)
         << QApplication::translate("editdish", "\351\245\255\347\262\245\347\261\273", 0)
         << QApplication::translate("editdish", "\347\224\234\345\223\201\347\261\273", 0)
        );
        label_5->setText(QApplication::translate("editdish", "\345\205\203", 0));
        bOk->setText(QApplication::translate("editdish", "\347\241\256\345\256\232", 0));
        bCancel->setText(QApplication::translate("editdish", "\345\217\226\346\266\210", 0));
        bEdit->setText(QApplication::translate("editdish", "\347\274\226\350\276\221", 0));
    } // retranslateUi

};

namespace Ui {
    class editdish: public Ui_editdish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDISH_H
