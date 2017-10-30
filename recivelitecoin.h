#ifndef RECIVELITECOIN_H
#define RECIVELITECOIN_H

#include <QDialog>
#include <litecoin.h>
#include <QImage>
#include <qrencode.h>

namespace Ui {
class recivelitecoin;
}

class recivelitecoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit recivelitecoin(QWidget *parent = 0);
    ~recivelitecoin();
    litecoin Clitecoin;
    void setaddress();
    void genCode();
    QImage myImage;
    
private:
    Ui::recivelitecoin *ui;
};

#endif // RECIVELITECOIN_H
