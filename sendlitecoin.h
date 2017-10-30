#ifndef SENDLITECOIN_H
#define SENDLITECOIN_H

#include <QDialog>
#include "litecoin.h"

namespace Ui {
class sendlitecoin;
}

class sendlitecoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit sendlitecoin(QWidget *parent = 0);
    ~sendlitecoin();
    litecoin Litecoin;
    
    void setdefault();
private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::sendlitecoin *ui;
};

#endif // SENDLITECOIN_H
