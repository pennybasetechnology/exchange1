#ifndef RECIEVEBITCOINCASH_H
#define RECIEVEBITCOINCASH_H

#include <QDialog>
#include "bitcoincash.h"
#include "qrencode.h"

namespace Ui {
class recievebitcoincash;
}

class recievebitcoincash : public QDialog
{
    Q_OBJECT
    
public:
    explicit recievebitcoincash(QWidget *parent = 0);
    ~recievebitcoincash();
    bitcoincash Cbitcoincash;
    void setaddress();
    void genCode();
    QImage myImage;
    
private:
    Ui::recievebitcoincash *ui;
};

#endif // RECIEVEBITCOINCASH_H
