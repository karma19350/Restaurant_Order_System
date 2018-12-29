/********************************************************************************
** Form generated from reading UI file 'addid.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDID_H
#define UI_ADDID_H

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

class Ui_addid
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lId;
    QPushButton *bOk;
    QPushButton *bCancel;

    void setupUi(QWidget *addid)
    {
        if (addid->objectName().isEmpty())
            addid->setObjectName(QStringLiteral("addid"));
        addid->resize(400, 300);
        label = new QLabel(addid);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addid);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 150, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        lId = new QLineEdit(addid);
        lId->setObjectName(QStringLiteral("lId"));
        lId->setGeometry(QRect(150, 140, 220, 30));
        lId->setFont(font1);
        bOk = new QPushButton(addid);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(50, 220, 100, 30));
        bOk->setFont(font1);
        bCancel = new QPushButton(addid);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(250, 220, 100, 30));
        bCancel->setFont(font1);

        retranslateUi(addid);

        QMetaObject::connectSlotsByName(addid);
    } // setupUi

    void retranslateUi(QWidget *addid)
    {
        addid->setWindowTitle(QApplication::translate("addid", "Form", 0));
        label->setText(QApplication::translate("addid", "\346\267\273\345\212\240\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("addid", "\346\226\260\345\267\245\344\275\234\350\257\201\345\217\267\357\274\232", 0));
        bOk->setText(QApplication::translate("addid", "\347\241\256\350\256\244", 0));
        bCancel->setText(QApplication::translate("addid", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class addid: public Ui_addid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDID_H
