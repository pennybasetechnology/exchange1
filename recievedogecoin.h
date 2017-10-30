#ifndef RECIEVEDOGECOIN_H
#define RECIEVEDOGECOIN_H

#include <QDialog>
#include <dogecoin.h>
#include <qrencode.h>
#include <QImage>

namespace Ui {
class recievedogecoin;
}

class recievedogecoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit recievedogecoin(QWidget *parent = 0);
    ~recievedogecoin();
    dogecoin Cdogecoin;
    void setaddress();
    void gencode();
    QImage myImage;
    
private:
    Ui::recievedogecoin *ui;
};

#endif // RECIEVEDOGECOIN_H
