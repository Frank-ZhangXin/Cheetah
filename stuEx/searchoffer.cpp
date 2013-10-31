#include "searchoffer.h"
#include "ui_searchoffer.h"

SearchOffer::SearchOffer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchOffer)
{
    ui->setupUi(this);
    termList << "2013 Fall" << "2013 Spring" << "2012 Fall";
    itemList << "mid-term" << "syllabus" << "assignment";
    posterList << "David" << "Xin" << "Valli";
    typeList << "Document" << "Electronic" << "Textbook";
    timeList << "Oct 15th" << "Oct 20th" << "Sep 28th";
    brandList << "Apple" << "Nokia" << "Samsung";
    editonList << "2nd Edition" << "3rd Editon" << "New Edition";
    authorList << "John Quarles" << "Jeffery von Ronne" << "Abdullah Muzahid";
    courseList << "CS 5531" << "EE 3323" << "CS 4622";

    // build model
    model = new QStringListModel(this);
    // Combo box displays with model
    model->setStringList(typeList);
    ui->typeCombo->setModel(model);
}

SearchOffer::~SearchOffer()
{
    delete ui;
}

void SearchOffer::on_pushButton_clicked()
{
    QString keyword = ui->searchLine->text();
    QString a;

    QStringList list;

    // build model
    model = new QStringListModel(this);

    if(ui->typeCombo->currentText() == "Document"){
        // search type = document
        // mockup offer information
        list << termList.at(0) + "    " + courseList.at(0) + "      \"" + keyword + "\"     " + itemList.at(0);
        list << termList.at(1) + "    " + courseList.at(1) + "      \"" + keyword + "\"     " + itemList.at(1);
        list << termList.at(2) + "    " + courseList.at(2) + "      \"" + keyword + "\"     " + itemList.at(2);

    }
    else if(ui->typeCombo->currentText() == "Electronic"){
        // search type = electronic
        list << timeList.at(0) + "     " + brandList.at(0) + "     16G Mem  " + keyword;
        list << timeList.at(1) + "     " + brandList.at(1) + "     Fairly new  " + keyword;
        list << timeList.at(2) + "     " + brandList.at(2) + "     8G Mem  " + keyword;

    }
    else{
        // search type = textbook
        list << "\"Introduction " + keyword + "\"    " + editonList.at(0) + "       " + authorList.at(0);
        list << "\"" + keyword + " Theory" + "\"    " + editonList.at(1) + "       " + authorList.at(1);
        list << "\"Learning " + keyword + "\"    " + editonList.at(2) + "       " + authorList.at(2);

    }



    // List view displays with model
    model->setStringList(list);
    ui->listView->setModel(model);
}



void SearchOffer::on_listView_clicked(const QModelIndex &index)
{
    int idx = index.row();
    QString keyword = ui->searchLine->text();

    // mockup offer information

    if(ui->typeCombo->currentText() == "Document"){
        // search type = document
        ui->descrptLine->setText(termList.at(idx) + " " + courseList.at(idx) + " " + keyword + " " + itemList.at(idx));
        ui->timeLine->setText(timeList.at(idx));
        ui->priceLine->setText("$10.00");
        ui->posterLine->setText(posterList.at(idx));
        ui->barterLine->setText("CS 5331 2013 Spring exam review.");
    }
    else if(ui->typeCombo->currentText() == "Electronic"){
        // search type = electronic
        ui->descrptLine->setText(brandList.at(idx) + " " + keyword + "  \"fairly new, only used a few times.\"");
        ui->timeLine->setText(timeList.at(idx));
        ui->priceLine->setText("$150.00");
        ui->posterLine->setText(posterList.at(idx));
        ui->barterLine->setText("Used laser mouse.");
    }
    else{
        // search type = textbook
        ui->descrptLine->setText(courseList.at(idx) + " " + keyword + " " + editonList.at(idx) + " Author: " + authorList.at(idx));
        ui->timeLine->setText(timeList.at(idx));
        ui->priceLine->setText("$20.00");
        ui->posterLine->setText(posterList.at(idx));
        ui->barterLine->setText("\"C++ Primer\" 5th editon");
    }

}

void SearchOffer::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Notification", "Your bid has been placed!");
    this->close();
}
