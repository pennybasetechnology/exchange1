#include "recievebitcoincash.h"
#include "ui_recievebitcoincash.h"

recievebitcoincash::recievebitcoincash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recievebitcoincash)
{
    ui->setupUi(this);
    genCode();
}

recievebitcoincash::~recievebitcoincash()
{
    delete ui;
}

void recievebitcoincash::setaddress()
{
    ui->address_label->setText(Cbitcoincash.defaultaddress());
}

void recievebitcoincash::genCode()
{
    QString uri = "bitcoincash:"+Cbitcoincash.defaultaddress();

    if (uri != "")
    {
        ui->qrlabel->setText("");

       QRcode *code = QRcode_encodeString(uri.toUtf8().constData(), 0, QR_ECLEVEL_L, QR_MODE_8, 1);
        if (!code)
        {
            ui->qrlabel->setText(tr("Error encoding URI into QR Code."));
            return;
        }
        myImage = QImage(code->width + 8, code->width + 8, QImage::Format_RGB32);
        myImage.fill(0xffffff);
        unsigned char *p = code->data;
        for (int y = 0; y < code->width; y++)
        {
            for (int x = 0; x < code->width; x++)
            {
                myImage.setPixel(x + 4, y + 4, ((*p & 1) ? 0x0 : 0xffffff));
                p++;
            }
        }
        QRcode_free(code);

        ui->qrlabel->setPixmap(QPixmap::fromImage(myImage).scaled(300, 300));

        ui->address_label->setText(Cbitcoincash.defaultaddress());
   }
}
