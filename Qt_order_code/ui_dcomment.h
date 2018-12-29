/********************************************************************************
** Form generated from reading UI file 'dcomment.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCOMMENT_H
#define UI_DCOMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dcomment
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *bComDish5;
    QPushButton *bComDish4;
    QPushButton *bComDish3;
    QPushButton *bComDish2;
    QPushButton *bComDish1;

    void setupUi(QWidget *dcomment)
    {
        if (dcomment->objectName().isEmpty())
            dcomment->setObjectName(QStringLiteral("dcomment"));
        dcomment->resize(300, 400);
        label = new QLabel(dcomment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 300, 75));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(dcomment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 90, 300, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        bComDish5 = new QPushButton(dcomment);
        bComDish5->setObjectName(QStringLiteral("bComDish5"));
        bComDish5->setGeometry(QRect(60, 130, 180, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        bComDish5->setFont(font2);
        bComDish4 = new QPushButton(dcomment);
        bComDish4->setObjectName(QStringLiteral("bComDish4"));
        bComDish4->setGeometry(QRect(60, 180, 180, 35));
        bComDish4->setFont(font2);
        bComDish3 = new QPushButton(dcomment);
        bComDish3->setObjectName(QStringLiteral("bComDish3"));
        bComDish3->setGeometry(QRect(60, 230, 180, 35));
        bComDish3->setFont(font2);
        bComDish2 = new QPushButton(dcomment);
        bComDish2->setObjectName(QStringLiteral("bComDish2"));
        bComDish2->setGeometry(QRect(60, 280, 180, 35));
        bComDish2->setFont(font2);
        bComDish1 = new QPushButton(dcomment);
        bComDish1->setObjectName(QStringLiteral("bComDish1"));
        bComDish1->setGeometry(QRect(60, 330, 180, 35));
        bComDish1->setFont(font2);

        retranslateUi(dcomment);

        QMetaObject::connectSlotsByName(dcomment);
    } // setupUi

    void retranslateUi(QWidget *dcomment)
    {
        dcomment->setWindowTitle(QApplication::translate("dcomment", "Form", 0));
        label->setText(QApplication::translate("dcomment", "\350\257\204\344\273\267\350\217\234\345\223\201", 0));
        label_2->setText(QApplication::translate("dcomment", "\344\272\262\357\274\214\350\256\260\345\276\227\347\273\231\345\245\275\350\257\204\345\223\246~", 0));
        bComDish5->setText(QApplication::translate("dcomment", "\350\266\205\347\272\247\350\265\236\357\274\201\357\274\2105\345\210\206\357\274\211", 0));
        bComDish4->setText(QApplication::translate("dcomment", "\350\277\230\344\270\215\351\224\231\357\274\201\357\274\2104\345\210\206\357\274\211", 0));
        bComDish3->setText(QApplication::translate("dcomment", "\344\270\200\350\210\254\350\210\254  \357\274\2103\345\210\206\357\274\211", 0));
        bComDish2->setText(QApplication::translate("dcomment", "\344\270\215\345\244\237\345\245\275  \357\274\2102\345\210\206\357\274\211", 0));
        bComDish1->setText(QApplication::translate("dcomment", "\347\234\237\351\232\276\345\220\203\357\274\201\357\274\2101\345\210\206\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class dcomment: public Ui_dcomment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCOMMENT_H
