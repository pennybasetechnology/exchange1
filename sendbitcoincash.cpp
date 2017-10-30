#include "sendbitcoincash.h"
#include "ui_sendbitcoincash.h"
#include <QDebug>
sendbitcoincash::sendbitcoincash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendbitcoincash)
{
    ui->setupUi(this);
}

sendbitcoincash::~sendbitcoincash()
{
    delete ui;
}

void sendbitcoincash::on_ok_pushButton_clicked()
{
    if(Bitcoincash.validateaddress(ui->lineEdit->text()) == "Not Connected")
    {
        ui->lineEdit->setFocus();
    }
    else
    {
        if(ui->doubleSpinBox->value()== 0)
        {
            ui->doubleSpinBox->setFocus();
        }
        else
        {
            qDebug()<<"result : "<<Bitcoincash.sendtoaddress(ui->lineEdit->text(),ui->doubleSpinBox->value());

        }
    }
}

void sendbitcoincash::on_cancel_pushButton_clicked()
{
    this->close();

}

void sendbitcoincash::on_lineEdit_textChanged(const QString &arg1)
{
    if(Bitcoincash.validateaddress(arg1) == "Not Connected")
    {
        ui->ok_pushButton->hide();
    }
    else
    {
        ui->ok_pushButton->show();
    }

}

void sendbitcoincash::setdefault()
{
    ui->ok_pushButton->show();
    ui->lineEdit->setText("");
    ui->doubleSpinBox->setValue(0.00000000);
}

