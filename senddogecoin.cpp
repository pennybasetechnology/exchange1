#include "senddogecoin.h"
#include "ui_senddogecoin.h"
#include "QDebug"

senddogecoin::senddogecoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::senddogecoin)
{
    ui->setupUi(this);
}

senddogecoin::~senddogecoin()
{
    delete ui;
}

void senddogecoin::on_ok_pushButton_clicked()
{
    if(Dogecoin.validateaddress(ui->lineEdit->text()) == "Not Connected")
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
            qDebug()<<"result : "<<Dogecoin.sendtoaddress(ui->lineEdit->text(),ui->doubleSpinBox->value());

        }
    }

}

void senddogecoin::on_cancel_pushButton_clicked()
{
    this->close();

}

void senddogecoin::on_lineEdit_textChanged(const QString &arg1)
{
    if(Dogecoin.validateaddress(arg1) == "Not Connected")
    {
        ui->ok_pushButton->hide();
    }
    else
    {
        ui->ok_pushButton->show();
    }

}

void senddogecoin::setdefault()
{
    ui->ok_pushButton->show();
    ui->lineEdit->setText("");
    ui->doubleSpinBox->setValue(0.000000);
}

