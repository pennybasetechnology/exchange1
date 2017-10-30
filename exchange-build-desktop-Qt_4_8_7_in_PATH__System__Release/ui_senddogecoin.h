/********************************************************************************
** Form generated from reading UI file 'senddogecoin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDDOGECOIN_H
#define UI_SENDDOGECOIN_H

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

class Ui_senddogecoin
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *senddogecoin)
    {
        if (senddogecoin->objectName().isEmpty())
            senddogecoin->setObjectName(QString::fromUtf8("senddogecoin"));
        senddogecoin->resize(449, 119);
        gridLayout_3 = new QGridLayout(senddogecoin);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ok_pushButton = new QPushButton(senddogecoin);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));

        gridLayout->addWidget(ok_pushButton, 0, 1, 1, 1);

        cancel_pushButton = new QPushButton(senddogecoin);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));

        gridLayout->addWidget(cancel_pushButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(senddogecoin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(senddogecoin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(senddogecoin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        label = new QLabel(senddogecoin);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(senddogecoin);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(8);
        doubleSpinBox->setSingleStep(0.001);

        gridLayout_2->addWidget(doubleSpinBox, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(senddogecoin);

        QMetaObject::connectSlotsByName(senddogecoin);
    } // setupUi

    void retranslateUi(QDialog *senddogecoin)
    {
        senddogecoin->setWindowTitle(QApplication::translate("senddogecoin", "Send Dogecoin", 0, QApplication::UnicodeUTF8));
        ok_pushButton->setText(QApplication::translate("senddogecoin", "OK", 0, QApplication::UnicodeUTF8));
        cancel_pushButton->setText(QApplication::translate("senddogecoin", "CANCEL", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("senddogecoin", "AMOUNT", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("senddogecoin", "doge", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("senddogecoin", "TO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class senddogecoin: public Ui_senddogecoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDDOGECOIN_H
