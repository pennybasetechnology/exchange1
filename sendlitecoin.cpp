#include "sendlitecoin.h"
#include "ui_sendlitecoin.h"
#include <QDebug>

sendlitecoin::sendlitecoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendlitecoin)
{
    ui->setupUi(this);
}

sendlitecoin::~sendlitecoin()
{
    delete ui;
}

void sendlitecoin::setdefault()
{
    ui->ok_pushButton->show();
    ui->lineEdit->setText("");
    ui->doubleSpinBox->setValue(0.00000000);
}


void sendlitecoin::on_ok_pushButton_clicked()
{

    if(Litecoin.validateaddress(ui->lineEdit->text()) == "Not Connected")
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
            qDebug()<<"result : "<<Litecoin.sendtoaddress(ui->lineEdit->text(),ui->doubleSpinBox->value());

        }
    }
}

void sendlitecoin::on_cancel_pushButton_clicked()
{
    this->close();
}

void sendlitecoin::on_lineEdit_textChanged(const QString &arg1)
{
    if(Litecoin.validateaddress(arg1) == "Not Connected")
    {
        ui->ok_pushButton->hide();
    }
    else
    {
        ui->ok_pushButton->show();
    }
}
