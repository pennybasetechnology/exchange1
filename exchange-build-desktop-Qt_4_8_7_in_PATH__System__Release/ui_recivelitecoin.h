/********************************************************************************
** Form generated from reading UI file 'recivelitecoin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIVELITECOIN_H
#define UI_RECIVELITECOIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_recivelitecoin
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *qrlabel;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *address_label;
    QLineEdit *address_label_2;

    void setupUi(QDialog *recivelitecoin)
    {
        if (recivelitecoin->objectName().isEmpty())
            recivelitecoin->setObjectName(QString::fromUtf8("recivelitecoin"));
        recivelitecoin->resize(201, 153);
        gridLayout = new QGridLayout(recivelitecoin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(recivelitecoin);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qrlabel = new QLabel(frame_2);
        qrlabel->setObjectName(QString::fromUtf8("qrlabel"));

        gridLayout_3->addWidget(qrlabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 3);

        label_2 = new QLabel(recivelitecoin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        address_label = new QLabel(recivelitecoin);
        address_label->setObjectName(QString::fromUtf8("address_label"));
        QFont font;
        font.setPointSize(12);
        address_label->setFont(font);
        address_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(address_label, 2, 0, 1, 1);

        address_label_2 = new QLineEdit(recivelitecoin);
        address_label_2->setObjectName(QString::fromUtf8("address_label_2"));
        address_label_2->setReadOnly(true);

        gridLayout->addWidget(address_label_2, 1, 0, 1, 1);


        retranslateUi(recivelitecoin);

        QMetaObject::connectSlotsByName(recivelitecoin);
    } // setupUi

    void retranslateUi(QDialog *recivelitecoin)
    {
        recivelitecoin->setWindowTitle(QApplication::translate("recivelitecoin", "Recieve Litecoin", 0, QApplication::UnicodeUTF8));
        qrlabel->setText(QString());
        label_2->setText(QApplication::translate("recivelitecoin", "YOUR LITECOIN ADDRESS", 0, QApplication::UnicodeUTF8));
        address_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class recivelitecoin: public Ui_recivelitecoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIVELITECOIN_H
