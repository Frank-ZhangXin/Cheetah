#include "postoffer.h"
#include "ui_postoffer.h"


PostOffer::PostOffer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostOffer)
{
    ui->setupUi(this);
    model = new QStandardItemModel(3, 3, this);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Item"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Price"));

    itemList << "\"Merriam-Webster's Vocabulary\"" << "\"The Blind Side" << "\"The Warm Bodies\"";
    dateList << "May 20th" << "July 7th" << "Oct 12th";
    priceList << "$12.00" << "$3.00 or \n\"CS 5672\" assignment solution" << "$2.00 or Coke-Cola 2 cans";

    for (int row = 0; row < 3; row++){
        QModelIndex idx = model->index(row, 0, QModelIndex());
        model->setData(idx, itemList.at(row));
    }

    for (int row = 0; row < 3; row++){
        QModelIndex idx = model->index(row, 1, QModelIndex());
        model->setData(idx, dateList.at(row));
    }

    for (int row = 0; row < 3; row++){
        QModelIndex idx = model->index(row, 2, QModelIndex());
        model->setData(idx, priceList.at(row));
    }


    ui->offerTable->setModel(model);

    // resize row and column to fit content
    ui->offerTable->resizeRowsToContents();
    ui->offerTable->resizeColumnsToContents();
}

PostOffer::~PostOffer()
{
    delete ui;
}

void PostOffer::on_pushButton_4_clicked()
{
    // popup delete warning
    QMessageBox msgBox;
    msgBox.setText("Are you sure to delete this offer?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Warning);
    int ret = msgBox.exec();

    if(ret == QMessageBox::Ok) {
        int row_idx = ui->offerTable->selectionModel()->currentIndex().row();
        ui->offerTable->model()->removeRow(row_idx);
    }
    else {
        this->close();
    }

}

void PostOffer::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Save changes of offer?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.exec();
}

void PostOffer::on_pushButton_5_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Send successfully!");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
}
