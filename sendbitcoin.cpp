#include "sendbitcoin.h"
#include "ui_sendbitcoin.h"
#include <QDebug>
sendbitcoin::sendbitcoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendbitcoin)
{
    ui->setupUi(this);

}

sendbitcoin::~sendbitcoin()
{
    delete ui;
}

void sendbitcoin::on_ok_pushButton_clicked()
{
    if(Bitcoin.validateaddress(ui->lineEdit->text()) == "0")
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
            qDebug()<<"result : "<<Bitcoin.sendtoaddress(ui->lineEdit->text(),ui->doubleSpinBox->value());

        }
    }
}

void sendbitcoin::on_cancel_pushButton_clicked()
{
    this->close();

}

void sendbitcoin::on_lineEdit_textChanged(const QString &arg1)
{
    if(Bitcoin.validateaddress(arg1) == "Not Connected")
    {
        ui->ok_pushButton->hide();
    }
    else
    {
        ui->ok_pushButton->show();
    }

}

void sendbitcoin::setdefault()
{
    ui->ok_pushButton->show();
    ui->lineEdit->setText("");
    ui->doubleSpinBox->setValue(0.00000000);
}

