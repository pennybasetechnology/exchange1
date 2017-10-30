/********************************************************************************
** Form generated from reading UI file 'sendbitcoin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDBITCOIN_H
#define UI_SENDBITCOIN_H

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

class Ui_sendbitcoin
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

    void setupUi(QDialog *sendbitcoin)
    {
        if (sendbitcoin->objectName().isEmpty())
            sendbitcoin->setObjectName(QString::fromUtf8("sendbitcoin"));
        sendbitcoin->resize(478, 110);
        gridLayout_3 = new QGridLayout(sendbitcoin);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(sendbitcoin);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(sendbitcoin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(sendbitcoin);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(sendbitcoin);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(6);
        doubleSpinBox->setSingleStep(0.001);

        gridLayout_2->addWidget(doubleSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(sendbitcoin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ok_pushButton = new QPushButton(sendbitcoin);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));

        gridLayout->addWidget(ok_pushButton, 0, 1, 1, 1);

        cancel_pushButton = new QPushButton(sendbitcoin);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));

        gridLayout->addWidget(cancel_pushButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(sendbitcoin);

        QMetaObject::connectSlotsByName(sendbitcoin);
    } // setupUi

    void retranslateUi(QDialog *sendbitcoin)
    {
        sendbitcoin->setWindowTitle(QApplication::translate("sendbitcoin", "Send Bitcoin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("sendbitcoin", "TO", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("sendbitcoin", "AMOUNT", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("sendbitcoin", "btc", 0, QApplication::UnicodeUTF8));
        ok_pushButton->setText(QApplication::translate("sendbitcoin", "OK", 0, QApplication::UnicodeUTF8));
        cancel_pushButton->setText(QApplication::translate("sendbitcoin", "CANCEL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sendbitcoin: public Ui_sendbitcoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDBITCOIN_H
