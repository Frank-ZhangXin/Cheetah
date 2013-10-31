#ifndef POSTOFFER_H
#define POSTOFFER_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class PostOffer;
}

class PostOffer : public QDialog
{
    Q_OBJECT
    QStringList itemList;
    QStringList dateList;
    QStringList priceList;

public:
    explicit PostOffer(QWidget *parent = 0);
    ~PostOffer();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PostOffer *ui;
    QStandardItemModel *model;
    QStringListModel *model2;
};

#endif // POSTOFFER_H
