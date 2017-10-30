/********************************************************************************
** Form generated from reading UI file 'sendbitcoincash.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDBITCOINCASH_H
#define UI_SENDBITCOINCASH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_sendbitcoincash
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *sendbitcoincash)
    {
        if (sendbitcoincash->objectName().isEmpty())
            sendbitcoincash->setObjectName(QString::fromUtf8("sendbitcoincash"));
        sendbitcoincash->resize(366, 124);
        gridLayout_3 = new QGridLayout(sendbitcoincash);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(sendbitcoincash);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(sendbitcoincash);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(sendbitcoincash);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(sendbitcoincash);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(6);
        doubleSpinBox->setSingleStep(0.001);

        gridLayout_2->addWidget(doubleSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(sendbitcoincash);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ok_pushButton = new QPushButton(sendbitcoincash);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));

        gridLayout->addWidget(ok_pushButton, 0, 1, 1, 1);

        cancel_pushButton = new QPushButton(sendbitcoincash);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));

        gridLayout->addWidget(cancel_pushButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(sendbitcoincash);

        QMetaObject::connectSlotsByName(sendbitcoincash);
    } // setupUi

    void retranslateUi(QDialog *sendbitcoincash)
    {
        sendbitcoincash->setWindowTitle(QApplication::translate("sendbitcoincash", "Send Bitcoin Cash", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("sendbitcoincash", "TO", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("sendbitcoincash", "AMOUNT", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("sendbitcoincash", "bch", 0, QApplication::UnicodeUTF8));
        ok_pushButton->setText(QApplication::translate("sendbitcoincash", "OK", 0, QApplication::UnicodeUTF8));
        cancel_pushButton->setText(QApplication::translate("sendbitcoincash", "CANCEL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sendbitcoincash: public Ui_sendbitcoincash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDBITCOINCASH_H
