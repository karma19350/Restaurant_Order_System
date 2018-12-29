/********************************************************************************
** Form generated from reading UI file 'dcomment1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCOMMENT1_H
#define UI_DCOMMENT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dcoment
{
public:
    QLabel *label;
    QPushButton *bCcom5;
    QPushButton *bCcom4;
    QPushButton *bCcom3;
    QPushButton *bCcom2;
    QPushButton *bCcom1;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QWidget *dcoment)
    {
        if (dcoment->objectName().isEmpty())
            dcoment->setObjectName(QStringLiteral("dcoment"));
        dcoment->resize(300, 400);
        label = new QLabel(dcoment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 300, 75));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);"));
        label->setAlignment(Qt::AlignCenter);
        bCcom5 = new QPushButton(dcoment);
        bCcom5->setObjectName(QStringLiteral("bCcom5"));
        bCcom5->setGeometry(QRect(60, 130, 180, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        bCcom5->setFont(font1);
        bCcom5->setStyleSheet(QStringLiteral(""));
        bCcom4 = new QPushButton(dcoment);
        bCcom4->setObjectName(QStringLiteral("bCcom4"));
        bCcom4->setGeometry(QRect(60, 170, 180, 25));
        bCcom4->setFont(font1);
        bCcom3 = new QPushButton(dcoment);
        bCcom3->setObjectName(QStringLiteral("bCcom3"));
        bCcom3->setGeometry(QRect(60, 210, 180, 25));
        bCcom3->setFont(font1);
        bCcom2 = new QPushButton(dcoment);
        bCcom2->setObjectName(QStringLiteral("bCcom2"));
        bCcom2->setGeometry(QRect(60, 250, 180, 25));
        bCcom2->setFont(font1);
        bCcom1 = new QPushButton(dcoment);
        bCcom1->setObjectName(QStringLiteral("bCcom1"));
        bCcom1->setGeometry(QRect(60, 290, 180, 25));
        bCcom1->setFont(font1);
        label_2 = new QLabel(dcoment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 200, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Devanagari"));
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(dcoment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 335, 300, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(11);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(dcoment);

        QMetaObject::connectSlotsByName(dcoment);
    } // setupUi

    void retranslateUi(QWidget *dcoment)
    {
        dcoment->setWindowTitle(QApplication::translate("dcoment", "Form", 0));
        label->setText(QApplication::translate("dcoment", "\350\257\204\344\273\267\350\217\234\345\223\201", 0));
        bCcom5->setText(QApplication::translate("dcoment", "\350\266\205\347\272\247\350\265\236\357\274\201 \357\274\2105\345\210\206\357\274\211", 0));
        bCcom4->setText(QApplication::translate("dcoment", "\350\277\230\344\270\215\351\224\231\357\274\201 \357\274\2104\345\210\206\357\274\211", 0));
        bCcom3->setText(QApplication::translate("dcoment", "\344\270\200\350\210\254\350\210\254  \357\274\2103\345\210\206\357\274\211", 0));
        bCcom2->setText(QApplication::translate("dcoment", "\344\270\215\345\244\237\345\245\275  \357\274\2102\345\210\206\357\274\211", 0));
        bCcom1->setText(QApplication::translate("dcoment", "\347\234\237\351\232\276\345\220\203\357\274\201 \357\274\2101\345\210\206\357\274\211", 0));
        label_2->setText(QApplication::translate("dcoment", "\344\272\262\357\274\214\350\256\260\345\276\227\347\273\231\345\245\275\350\257\204\345\223\246~", 0));
        label_4->setText(QApplication::translate("dcoment", "\346\204\237\350\260\242\346\202\250\347\232\204\350\257\204\344\273\267~  \346\202\250\347\232\204\350\257\204\344\273\267\346\230\257\346\210\221\344\273\254\350\277\233\346\255\245\347\232\204\346\272\220\346\263\211!", 0));
    } // retranslateUi

};

namespace Ui {
    class dcoment: public Ui_dcoment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCOMMENT1_H
