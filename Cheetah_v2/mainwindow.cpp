#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);




    //=====Search data generation Start=====

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
    ui->combo_Type->setModel(model);

    //=====Search data generation End======


    //=====Buying data generation Start=====

    model2 = new QStandardItemModel(3, 3, this);
    model2->setHeaderData(0, Qt::Horizontal, QObject::tr("Item"));
    model2->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
    model2->setHeaderData(2, Qt::Horizontal, QObject::tr("Price"));

    itemList2 << "\"Merriam-Webster's Vocabulary\"" << "\"The Blind Side" << "\"The Warm Bodies\"" << "Used bike" << "CS 6422 exam" << "\"Computer Arechitecture\"";
    dateList << "May 20th" << "July 7th" << "Oct 12th" << "Sep 15th" << "Sep 20th" << "Oct 29th";
    priceList << "$12.00" << "$3.00 or \n\"CS 5672\" assignment solution" << "$2.00 or Coke-Cola 2 cans" << "$5.00" << "Starbucks gift card" << "McDonald's gift card";

    for (int row = 0; row < 3; row++){
            QModelIndex idx = model2->index(row, 0, QModelIndex());
            model2->setData(idx, itemList2.at(row));
    }

    for (int row = 0; row < 3; row++){
            QModelIndex idx = model2->index(row, 1, QModelIndex());
            model2->setData(idx, dateList.at(row));
    }

     for (int row = 0; row < 3; row++){
            QModelIndex idx = model2->index(row, 2, QModelIndex());
            model2->setData(idx, priceList.at(row));
     }


     ui->table_Buying->setModel(model2);

     // resize row and column to fit content
     ui->table_Buying->resizeRowsToContents();
     ui->table_Buying->resizeColumnsToContents();



    //=====Buying data generation End=====


     //=====Selling data generation Start=====

     model3 = new QStandardItemModel(3, 3, this);
     model3->setHeaderData(0, Qt::Horizontal, QObject::tr("Item"));
     model3->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
     model3->setHeaderData(2, Qt::Horizontal, QObject::tr("Price"));

     for (int row = 0; row < 3; row++){
             QModelIndex idx = model3->index(row, 0, QModelIndex());
             model3->setData(idx, itemList2.at(3 + row));
     }

     for (int row = 0; row < 3; row++){
             QModelIndex idx = model3->index(row, 1, QModelIndex());
             model3->setData(idx, dateList.at(3 + row));
     }

      for (int row = 0; row < 3; row++){
             QModelIndex idx = model3->index(row, 2, QModelIndex());
             model3->setData(idx, priceList.at(3 + row));
     }

      ui->table_Selling->setModel(model3);

      // resize row and column to fit content
      ui->table_Selling->resizeRowsToContents();
      ui->table_Selling->resizeColumnsToContents();

    //=====Selling data generation End=====


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_SignIn_clicked()
{
    if (ui->line_ID->isModified() && ui->line_password->isModified()) {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox signIn_notice;
        signIn_notice.setText("Oh man, ID or password is missing!");
        signIn_notice.setStandardButtons(QMessageBox::Ok);
        signIn_notice.setIcon(QMessageBox::Information);
        signIn_notice.exec();
    }
}

void MainWindow::on_pushButton_SignUp_clicked()
{
    SignUp mySignUp;
    mySignUp.setModal(true);
    mySignUp.exec();
}

void MainWindow::on_push_Search_clicked()
{
    QString keyword = ui->line_Search->text();

    QStringList list;

        // build model
        model = new QStringListModel(this);

        if(ui->combo_Type->currentText() == "Document"){
            // search type = document
            // mockup offer information
            list << termList.at(0) + "    " + courseList.at(0) + "      \"" + keyword + "\"     " + itemList.at(0);
            list << termList.at(1) + "    " + courseList.at(1) + "      \"" + keyword + "\"     " + itemList.at(1);
            list << termList.at(2) + "    " + courseList.at(2) + "      \"" + keyword + "\"     " + itemList.at(2);

        }
        else if(ui->combo_Type->currentText() == "Electronic"){
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
            ui->list_Result->setModel(model);
}

void MainWindow::on_list_Result_clicked(const QModelIndex &index)
{
    int idx = index.row();
    QString keyword = ui->line_Search->text();

    if(ui->combo_Type->currentText() == "Document"){
            // search type = document
            ui->line_Discription->setText(termList.at(idx) + " " + courseList.at(idx) + " " + keyword + " " + itemList.at(idx));
            ui->line_Time->setText(timeList.at(idx));
            ui->line_Price->setText("$10.00");
            ui->line_Poster->setText(posterList.at(idx));
            ui->line_Barter->setText("CS 5331 2013 Spring exam review.");
        }
        else if(ui->combo_Type->currentText() == "Electronic"){
            // search type = electronic
            ui->line_Discription->setText(brandList.at(idx) + " " + keyword + "  \"fairly new, only used a few times.\"");
            ui->line_Time->setText(timeList.at(idx));
            ui->line_Price->setText("$150.00");
            ui->line_Poster->setText(posterList.at(idx));
            ui->line_Barter->setText("Used laser mouse.");
        }
        else{
            // search type = textbook
            ui->line_Discription->setText(courseList.at(idx) + " " + keyword + " " + editonList.at(idx) + " Author: " + authorList.at(idx));
            ui->line_Time->setText(timeList.at(idx));
            ui->line_Price->setText("$20.00");
            ui->line_Poster->setText(posterList.at(idx));
            ui->line_Barter->setText("\"C++ Primer\" 5th editon");
        }
}

void MainWindow::on_push_Bid_clicked()
{
    QMessageBox::information(this, "Notification", "Your bid has been placed!");
}

void MainWindow::on_push_Buy_clicked()
{
    QMessageBox::information(this, "Notification", "Your order has been placed!");
}



void MainWindow::on_push_Send_clicked()
{
    if (!(ui->line_Item2->isModified() && ui->line_Discription2->isModified() && ui->line_Poster2->isModified())) {
        QMessageBox msgBox;
        msgBox.setText("Please complete basic information!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else {
        QMessageBox msgBox2;
        msgBox2.setText("Send successfully!");
        msgBox2.setStandardButtons(QMessageBox::Ok);
        msgBox2.setIcon(QMessageBox::Information);
        msgBox2.exec();
    }
}

void MainWindow::on_push_Delete_clicked()
{
    // popup delete warning
    QMessageBox msgBox;
    msgBox.setText("Are you sure to delete this offer?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Warning);
    int ret = msgBox.exec();

    if(ret == QMessageBox::Ok) {
        int row_idx = ui->table_Buying->selectionModel()->currentIndex().row();
        ui->table_Buying->model()->removeRow(row_idx);
        int row_idx2 = ui->table_Selling->selectionModel()->currentIndex().row();
        ui->table_Selling->model()->removeRow(row_idx2);
    }
}

void MainWindow::on_push_Save_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Save changes of offer?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.exec();
}
