#ifndef SENDBITCOINCASH_H
#define SENDBITCOINCASH_H

#include <QDialog>
#include "bitcoincash.h"

namespace Ui {
class sendbitcoincash;
}

class sendbitcoincash : public QDialog
{
    Q_OBJECT
    
public:
    explicit sendbitcoincash(QWidget *parent = 0);
    ~sendbitcoincash();
    bitcoincash Bitcoincash;
    void setdefault();
    
private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);


private:
    Ui::sendbitcoincash *ui;
};

#endif // SENDBITCOINCASH_H
