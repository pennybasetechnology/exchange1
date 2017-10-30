#ifndef SENDBITCOIN_H
#define SENDBITCOIN_H

#include <QDialog>

#include <bitcoin.h>

namespace Ui {
class sendbitcoin;
}

class sendbitcoin : public QDialog
{
    Q_OBJECT
    
public:
    explicit sendbitcoin(QWidget *parent = 0);
    ~sendbitcoin();

    bitcoin Bitcoin;
    void setdefault();
    
private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::sendbitcoin *ui;
};

#endif // SENDBITCOIN_H
