#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signin.h"
#include "searchoffer.h"
#include "postoffer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    logFlag = 0;
}

void MainWindow::on_pushButton_clicked()
{
    SignIn mySignIn;
    mySignIn.setModal(true);
    mySignIn.exec();
    logFlag = 1;
}

void MainWindow::on_pushButton_2_clicked()
{
    if (logFlag == 0) {
        QMessageBox msg;
        msg.setText("Please Sign In/Sign Up.");
        msg.setIcon(QMessageBox::Information);
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
    else{
        SearchOffer mySearchOffer;
        mySearchOffer.setModal(true);
        mySearchOffer.exec();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (logFlag == 0) {
        QMessageBox msg;
        msg.setText("Please Sign In/Sign Up.");
        msg.setIcon(QMessageBox::Information);
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
    else{
        PostOffer myPostOffer;
        myPostOffer.setModal(true);
        myPostOffer.exec();
    }
}
