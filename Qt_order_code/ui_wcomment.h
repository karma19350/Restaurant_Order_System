/********************************************************************************
** Form generated from reading UI file 'wcomment.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCOMMENT_H
#define UI_WCOMMENT_H

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

class Ui_wcomment
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ltext;
    QLabel *label_3;
    QPushButton *bSubmit;
    QLabel *label_4;

    void setupUi(QWidget *wcomment)
    {
        if (wcomment->objectName().isEmpty())
            wcomment->setObjectName(QStringLiteral("wcomment"));
        wcomment->resize(400, 400);
        label = new QLabel(wcomment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 75));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background: rgb(188, 203, 255);\n"
"	color: rgb(85, 85, 127);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(wcomment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 380, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ltext = new QLineEdit(wcomment);
        ltext->setObjectName(QStringLiteral("ltext"));
        ltext->setGeometry(QRect(50, 130, 300, 160));
        ltext->setFont(font1);
        ltext->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(wcomment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 300, 350, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        bSubmit = new QPushButton(wcomment);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));
        bSubmit->setGeometry(QRect(290, 350, 80, 30));
        bSubmit->setFont(font1);
        label_4 = new QLabel(wcomment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 330, 350, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(wcomment);

        QMetaObject::connectSlotsByName(wcomment);
    } // setupUi

    void retranslateUi(QWidget *wcomment)
    {
        wcomment->setWindowTitle(QApplication::translate("wcomment", "Form", 0));
        label->setText(QApplication::translate("wcomment", "\350\257\204\344\273\267\346\234\215\345\212\241", 0));
        label_2->setText(QApplication::translate("wcomment", "\350\257\267\345\234\250\344\270\213\346\226\271\345\241\253\345\206\231\346\202\250\345\257\271\346\234\215\345\212\241\345\221\230\346\234\254\346\254\241\346\234\215\345\212\241\347\232\204\350\257\204\344\273\267\357\274\232", 0));
        label_3->setText(QApplication::translate("wcomment", "<html><head/><body><p>\346\204\237\350\260\242\346\202\250\347\232\204\350\257\204\344\273\267\357\274\201</p></body></html>", 0));
        bSubmit->setText(QApplication::translate("wcomment", "\346\217\220\344\272\244", 0));
        label_4->setText(QApplication::translate("wcomment", "<html><head/><body><p>\346\202\250\347\232\204\350\257\204\344\273\267\346\230\257\346\210\221\344\273\254\350\277\233\346\255\245\347\232\204\346\272\220\346\263\211~</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class wcomment: public Ui_wcomment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCOMMENT_H
