/********************************************************************************
** Form generated from reading UI file 'editpassword1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPASSWORD1_H
#define UI_EDITPASSWORD1_H

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

class Ui_editpassword1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lpassword;
    QPushButton *bOk;
    QPushButton *bCancel;
    QLabel *label_3;
    QLineEdit *lId;

    void setupUi(QWidget *editpassword1)
    {
        if (editpassword1->objectName().isEmpty())
            editpassword1->setObjectName(QStringLiteral("editpassword1"));
        editpassword1->resize(400, 300);
        label = new QLabel(editpassword1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(editpassword1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        lpassword = new QLineEdit(editpassword1);
        lpassword->setObjectName(QStringLiteral("lpassword"));
        lpassword->setGeometry(QRect(120, 150, 220, 30));
        lpassword->setFont(font1);
        bOk = new QPushButton(editpassword1);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(50, 210, 100, 30));
        bOk->setFont(font1);
        bCancel = new QPushButton(editpassword1);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(250, 210, 100, 30));
        bCancel->setFont(font1);
        label_3 = new QLabel(editpassword1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 150, 40));
        label_3->setFont(font1);
        lId = new QLineEdit(editpassword1);
        lId->setObjectName(QStringLiteral("lId"));
        lId->setEnabled(false);
        lId->setGeometry(QRect(120, 90, 220, 30));
        lId->setFont(font1);

        retranslateUi(editpassword1);

        QMetaObject::connectSlotsByName(editpassword1);
    } // setupUi

    void retranslateUi(QWidget *editpassword1)
    {
        editpassword1->setWindowTitle(QApplication::translate("editpassword1", "Form", 0));
        label->setText(QApplication::translate("editpassword1", "\351\207\215\346\226\260\350\256\276\347\275\256\345\257\206\347\240\201", 0));
        label_2->setText(QApplication::translate("editpassword1", "\345\257\206\347\240\201\357\274\232", 0));
        bOk->setText(QApplication::translate("editpassword1", "\347\241\256\350\256\244", 0));
        bCancel->setText(QApplication::translate("editpassword1", "\345\217\226\346\266\210", 0));
        label_3->setText(QApplication::translate("editpassword1", "\350\264\246\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class editpassword1: public Ui_editpassword1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPASSWORD1_H
