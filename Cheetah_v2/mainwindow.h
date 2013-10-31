#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtCore>
#include <QtGui>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    // Search offer data
    QStringList termList;
    QStringList itemList;
    QStringList posterList;
    QStringList typeList;
    QStringList timeList;
    QStringList brandList;
    QStringList editonList;
    QStringList authorList;
    QStringList courseList;

    // Buying and Selling dat
    QStringList itemList2;
    QStringList dateList;
    QStringList priceList;





public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_SignIn_clicked();

    void on_pushButton_SignUp_clicked();

    void on_push_Search_clicked();

    void on_list_Result_clicked(const QModelIndex &index);

    void on_push_Bid_clicked();

    void on_push_Buy_clicked();


    void on_push_Send_clicked();

    void on_push_Delete_clicked();

    void on_push_Save_clicked();

private:
    Ui::MainWindow *ui;

    // Search offer data
    QStringListModel *model;

    // Buying offer data
    QStandardItemModel *model2;

    // Selling offer dat
    QStandardItemModel *model3;


};

#endif // MAINWINDOW_H
