#ifndef SEARCHOFFER_H
#define SEARCHOFFER_H

#include <iostream>
#include <QDialog>
#include <QTableView>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QMessageBox>

using namespace std;

namespace Ui {
class SearchOffer;
}

class SearchOffer : public QDialog
{
    Q_OBJECT
    QStringList termList;
    QStringList itemList;
    QStringList posterList;
    QStringList typeList;
    QStringList timeList;
    QStringList brandList;
    QStringList editonList;
    QStringList authorList;
    QStringList courseList;

public:
    explicit SearchOffer(QWidget *parent = 0);
    ~SearchOffer();


private slots:
    void on_pushButton_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

private:
    Ui::SearchOffer *ui;
    QStringListModel *model;
    QStringListModel *model2;

};



#endif // SEARCHOFFER_H
