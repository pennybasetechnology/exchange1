/********************************************************************************
** Form generated from reading UI file 'recievebitcoincash.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIEVEBITCOINCASH_H
#define UI_RECIEVEBITCOINCASH_H

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

class Ui_recievebitcoincash
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *qrlabel;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *address_label_1;
    QLineEdit *address_label;

    void setupUi(QDialog *recievebitcoincash)
    {
        if (recievebitcoincash->objectName().isEmpty())
            recievebitcoincash->setObjectName(QString::fromUtf8("recievebitcoincash"));
        recievebitcoincash->resize(222, 167);
        gridLayout_3 = new QGridLayout(recievebitcoincash);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(recievebitcoincash);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qrlabel = new QLabel(frame);
        qrlabel->setObjectName(QString::fromUtf8("qrlabel"));

        gridLayout_2->addWidget(qrlabel, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 3);

        label = new QLabel(recievebitcoincash);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        address_label_1 = new QLabel(recievebitcoincash);
        address_label_1->setObjectName(QString::fromUtf8("address_label_1"));
        QFont font;
        font.setPointSize(12);
        address_label_1->setFont(font);
        address_label_1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(address_label_1, 2, 0, 1, 1);

        address_label = new QLineEdit(recievebitcoincash);
        address_label->setObjectName(QString::fromUtf8("address_label"));
        address_label->setReadOnly(true);

        gridLayout_3->addWidget(address_label, 1, 0, 1, 1);


        retranslateUi(recievebitcoincash);

        QMetaObject::connectSlotsByName(recievebitcoincash);
    } // setupUi

    void retranslateUi(QDialog *recievebitcoincash)
    {
        recievebitcoincash->setWindowTitle(QApplication::translate("recievebitcoincash", "Recieve Bitcoin Cash", 0, QApplication::UnicodeUTF8));
        qrlabel->setText(QString());
        label->setText(QApplication::translate("recievebitcoincash", "YOUR BITCOIN CASH ADDRESS", 0, QApplication::UnicodeUTF8));
        address_label_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class recievebitcoincash: public Ui_recievebitcoincash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIEVEBITCOINCASH_H
