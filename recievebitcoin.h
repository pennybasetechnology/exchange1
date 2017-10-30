#ifndef RECIEVEBITCOIN_H
#define RECIEVEBITCOIN_H

#include <QDialog>
#include "bitcoin.h"
#include <QImage>


namespace Ui {
class recievebitcoin;
}

class recievebitcoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit recievebitcoin(QWidget *parent = 0);
    ~recievebitcoin();
    bitcoin Bitcoin;
    void genCode();
    QImage myImage;
    
private:
    Ui::recievebitcoin *ui;
};

#endif // RECIEVEBITCOIN_H
