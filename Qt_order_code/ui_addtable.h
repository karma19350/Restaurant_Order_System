/********************************************************************************
** Form generated from reading UI file 'addtable.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTABLE_H
#define UI_ADDTABLE_H

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

class Ui_addtable
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lnum;
    QLabel *label_3;
    QComboBox *ctype;
    QPushButton *bOk;
    QPushButton *bCancel;

    void setupUi(QWidget *addtable)
    {
        if (addtable->objectName().isEmpty())
            addtable->setObjectName(QStringLiteral("addtable"));
        addtable->resize(500, 400);
        label = new QLabel(addtable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addtable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lnum = new QLineEdit(addtable);
        lnum->setObjectName(QStringLiteral("lnum"));
        lnum->setGeometry(QRect(150, 120, 250, 35));
        lnum->setFont(font1);
        label_3 = new QLabel(addtable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 150, 40));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ctype = new QComboBox(addtable);
        ctype->setObjectName(QStringLiteral("ctype"));
        ctype->setGeometry(QRect(150, 190, 130, 35));
        ctype->setFont(font1);
        bOk = new QPushButton(addtable);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(50, 310, 120, 40));
        bOk->setFont(font1);
        bCancel = new QPushButton(addtable);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(300, 310, 120, 40));
        bCancel->setFont(font1);

        retranslateUi(addtable);

        QMetaObject::connectSlotsByName(addtable);
    } // setupUi

    void retranslateUi(QWidget *addtable)
    {
        addtable->setWindowTitle(QApplication::translate("addtable", "Form", 0));
        label->setText(QApplication::translate("addtable", "\346\267\273\345\212\240\351\244\220\346\241\214", 0));
        label_2->setText(QApplication::translate("addtable", "\346\241\214\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("addtable", "\346\241\214\345\255\220\347\247\215\347\261\273\357\274\232", 0));
        ctype->clear();
        ctype->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("addtable", "\344\270\244\344\272\272\346\241\214", 0)
         << QApplication::translate("addtable", "\345\233\233\344\272\272\346\241\214", 0)
         << QApplication::translate("addtable", "\345\205\255\344\272\272\346\241\214", 0)
        );
        bOk->setText(QApplication::translate("addtable", "\347\241\256\345\256\232", 0));
        bCancel->setText(QApplication::translate("addtable", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class addtable: public Ui_addtable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTABLE_H
