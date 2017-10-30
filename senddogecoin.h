#ifndef SENDDOGECOIN_H
#define SENDDOGECOIN_H

#include <QDialog>
#include "dogecoin.h"

namespace Ui {
class senddogecoin;
}

class senddogecoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit senddogecoin(QWidget *parent = 0);
    ~senddogecoin();
    dogecoin Dogecoin;
    void setdefault();
    
private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::senddogecoin *ui;
};

#endif // SENDDOGECOIN_H
