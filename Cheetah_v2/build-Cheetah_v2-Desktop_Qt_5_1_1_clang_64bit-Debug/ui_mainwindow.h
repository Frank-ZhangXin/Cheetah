/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_36;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_ID;
    QLineEdit *line_ID;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_Password;
    QLineEdit *line_password;
    QPushButton *pushButton_SignIn;
    QPushButton *pushButton_SignUp;
    QWidget *page_offer;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tab_Offer;
    QWidget *tab_Search;
    QGroupBox *group_Bid;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_Bargin;
    QLineEdit *line_Bargain;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Message;
    QPlainTextEdit *messageBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *push_Bid;
    QPushButton *push_Buy;
    QGroupBox *group_Find;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *combo_Type;
    QLineEdit *line_Search;
    QPushButton *push_Search;
    QListView *list_Result;
    QGroupBox *group_Info;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Discription;
    QLineEdit *line_Discription;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Price;
    QLineEdit *line_Price;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_Poster;
    QLineEdit *line_Poster;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_37;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_Barter;
    QLineEdit *line_Barter;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Time;
    QLineEdit *line_Time;
    QWidget *tab_Post;
    QPushButton *push_Send;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_Discription2;
    QLineEdit *line_Discription2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_24;
    QCheckBox *check_Cash;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_Cash;
    QLineEdit *line_Cash;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *check_Barter;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_Barter2;
    QLineEdit *line_Barter2;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_Item2;
    QLineEdit *line_Item2;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_Poster2;
    QLineEdit *line_Poster2;
    QWidget *widget7;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Path;
    QLineEdit *line_Path;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *push_Upload;
    QPushButton *push_Browser;
    QWidget *tab_View;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_33;
    QPushButton *push_Save;
    QPushButton *push_Delete;
    QWidget *widget8;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QTableView *table_Selling;
    QWidget *widget9;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_13;
    QTableView *table_Buying;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(704, 725);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        page_login = new QWidget();
        page_login->setObjectName(QStringLiteral("page_login"));
        widget = new QWidget(page_login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 621, 35));
        horizontalLayout_36 = new QHBoxLayout(widget);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_ID = new QLabel(widget);
        label_ID->setObjectName(QStringLiteral("label_ID"));

        horizontalLayout_35->addWidget(label_ID);

        line_ID = new QLineEdit(widget);
        line_ID->setObjectName(QStringLiteral("line_ID"));

        horizontalLayout_35->addWidget(line_ID);


        horizontalLayout_36->addLayout(horizontalLayout_35);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_Password = new QLabel(widget);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        horizontalLayout_34->addWidget(label_Password);

        line_password = new QLineEdit(widget);
        line_password->setObjectName(QStringLiteral("line_password"));

        horizontalLayout_34->addWidget(line_password);


        horizontalLayout_36->addLayout(horizontalLayout_34);

        pushButton_SignIn = new QPushButton(widget);
        pushButton_SignIn->setObjectName(QStringLiteral("pushButton_SignIn"));

        horizontalLayout_36->addWidget(pushButton_SignIn);

        pushButton_SignUp = new QPushButton(widget);
        pushButton_SignUp->setObjectName(QStringLiteral("pushButton_SignUp"));

        horizontalLayout_36->addWidget(pushButton_SignUp);

        stackedWidget->addWidget(page_login);
        page_offer = new QWidget();
        page_offer->setObjectName(QStringLiteral("page_offer"));
        page_offer->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(page_offer);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tab_Offer = new QTabWidget(page_offer);
        tab_Offer->setObjectName(QStringLiteral("tab_Offer"));
        tab_Search = new QWidget();
        tab_Search->setObjectName(QStringLiteral("tab_Search"));
        group_Bid = new QGroupBox(tab_Search);
        group_Bid->setObjectName(QStringLiteral("group_Bid"));
        group_Bid->setGeometry(QRect(10, 370, 611, 221));
        layoutWidget = new QWidget(group_Bid);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 441, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_Bargin = new QLabel(layoutWidget);
        label_Bargin->setObjectName(QStringLiteral("label_Bargin"));

        horizontalLayout_8->addWidget(label_Bargin);

        line_Bargain = new QLineEdit(layoutWidget);
        line_Bargain->setObjectName(QStringLiteral("line_Bargain"));

        horizontalLayout_8->addWidget(line_Bargain);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Message = new QLabel(layoutWidget);
        label_Message->setObjectName(QStringLiteral("label_Message"));

        verticalLayout_4->addWidget(label_Message);

        messageBox = new QPlainTextEdit(layoutWidget);
        messageBox->setObjectName(QStringLiteral("messageBox"));

        verticalLayout_4->addWidget(messageBox);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget_2 = new QWidget(group_Bid);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(480, 30, 115, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        push_Bid = new QPushButton(layoutWidget_2);
        push_Bid->setObjectName(QStringLiteral("push_Bid"));

        verticalLayout_3->addWidget(push_Bid);

        push_Buy = new QPushButton(layoutWidget_2);
        push_Buy->setObjectName(QStringLiteral("push_Buy"));

        verticalLayout_3->addWidget(push_Buy);

        group_Find = new QGroupBox(tab_Search);
        group_Find->setObjectName(QStringLiteral("group_Find"));
        group_Find->setGeometry(QRect(10, 0, 621, 201));
        layoutWidget_3 = new QWidget(group_Find);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 601, 171));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        horizontalLayout_2->addLayout(horizontalLayout);

        combo_Type = new QComboBox(layoutWidget_3);
        combo_Type->setObjectName(QStringLiteral("combo_Type"));
        combo_Type->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_Type->sizePolicy().hasHeightForWidth());
        combo_Type->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(combo_Type);

        line_Search = new QLineEdit(layoutWidget_3);
        line_Search->setObjectName(QStringLiteral("line_Search"));

        horizontalLayout_2->addWidget(line_Search);

        push_Search = new QPushButton(layoutWidget_3);
        push_Search->setObjectName(QStringLiteral("push_Search"));
        push_Search->setAutoDefault(true);
        push_Search->setDefault(true);
        push_Search->setFlat(false);

        horizontalLayout_2->addWidget(push_Search);


        verticalLayout_6->addLayout(horizontalLayout_2);

        list_Result = new QListView(layoutWidget_3);
        list_Result->setObjectName(QStringLiteral("list_Result"));

        verticalLayout_6->addWidget(list_Result);

        group_Info = new QGroupBox(tab_Search);
        group_Info->setObjectName(QStringLiteral("group_Info"));
        group_Info->setGeometry(QRect(10, 210, 621, 151));
        widget1 = new QWidget(group_Info);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 30, 601, 111));
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Discription = new QLabel(widget1);
        label_Discription->setObjectName(QStringLiteral("label_Discription"));

        horizontalLayout_3->addWidget(label_Discription);

        line_Discription = new QLineEdit(widget1);
        line_Discription->setObjectName(QStringLiteral("line_Discription"));

        horizontalLayout_3->addWidget(line_Discription);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_Price = new QLabel(widget1);
        label_Price->setObjectName(QStringLiteral("label_Price"));

        horizontalLayout_5->addWidget(label_Price);

        line_Price = new QLineEdit(widget1);
        line_Price->setObjectName(QStringLiteral("line_Price"));

        horizontalLayout_5->addWidget(line_Price);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_Poster = new QLabel(widget1);
        label_Poster->setObjectName(QStringLiteral("label_Poster"));

        horizontalLayout_6->addWidget(label_Poster);

        line_Poster = new QLineEdit(widget1);
        line_Poster->setObjectName(QStringLiteral("line_Poster"));

        horizontalLayout_6->addWidget(line_Poster);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_Barter = new QLabel(widget1);
        label_Barter->setObjectName(QStringLiteral("label_Barter"));

        horizontalLayout_9->addWidget(label_Barter);

        line_Barter = new QLineEdit(widget1);
        line_Barter->setObjectName(QStringLiteral("line_Barter"));

        horizontalLayout_9->addWidget(line_Barter);


        horizontalLayout_37->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Time = new QLabel(widget1);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        horizontalLayout_4->addWidget(label_Time);

        line_Time = new QLineEdit(widget1);
        line_Time->setObjectName(QStringLiteral("line_Time"));
        sizePolicy.setHeightForWidth(line_Time->sizePolicy().hasHeightForWidth());
        line_Time->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(line_Time);


        horizontalLayout_10->addLayout(horizontalLayout_4);


        horizontalLayout_37->addLayout(horizontalLayout_10);


        verticalLayout_7->addLayout(horizontalLayout_37);

        tab_Offer->addTab(tab_Search, QString());
        tab_Post = new QWidget();
        tab_Post->setObjectName(QStringLiteral("tab_Post"));
        push_Send = new QPushButton(tab_Post);
        push_Send->setObjectName(QStringLiteral("push_Send"));
        push_Send->setGeometry(QRect(420, 360, 115, 32));
        widget2 = new QWidget(tab_Post);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(180, 60, 241, 50));
        verticalLayout_12 = new QVBoxLayout(widget2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_Discription2 = new QLabel(widget2);
        label_Discription2->setObjectName(QStringLiteral("label_Discription2"));

        verticalLayout_12->addWidget(label_Discription2);

        line_Discription2 = new QLineEdit(widget2);
        line_Discription2->setObjectName(QStringLiteral("line_Discription2"));

        verticalLayout_12->addWidget(line_Discription2);

        widget3 = new QWidget(tab_Post);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(180, 160, 194, 30));
        horizontalLayout_24 = new QHBoxLayout(widget3);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        check_Cash = new QCheckBox(widget3);
        check_Cash->setObjectName(QStringLiteral("check_Cash"));

        horizontalLayout_24->addWidget(check_Cash);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_Cash = new QLabel(widget3);
        label_Cash->setObjectName(QStringLiteral("label_Cash"));

        horizontalLayout_25->addWidget(label_Cash);

        line_Cash = new QLineEdit(widget3);
        line_Cash->setObjectName(QStringLiteral("line_Cash"));

        horizontalLayout_25->addWidget(line_Cash);


        horizontalLayout_24->addLayout(horizontalLayout_25);

        widget4 = new QWidget(tab_Post);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(180, 200, 203, 30));
        horizontalLayout_26 = new QHBoxLayout(widget4);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        check_Barter = new QCheckBox(widget4);
        check_Barter->setObjectName(QStringLiteral("check_Barter"));

        horizontalLayout_26->addWidget(check_Barter);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_Barter2 = new QLabel(widget4);
        label_Barter2->setObjectName(QStringLiteral("label_Barter2"));

        horizontalLayout_27->addWidget(label_Barter2);

        line_Barter2 = new QLineEdit(widget4);
        line_Barter2->setObjectName(QStringLiteral("line_Barter2"));

        horizontalLayout_27->addWidget(line_Barter2);


        horizontalLayout_26->addLayout(horizontalLayout_27);

        widget5 = new QWidget(tab_Post);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(183, 33, 171, 23));
        horizontalLayout_28 = new QHBoxLayout(widget5);
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_Item2 = new QLabel(widget5);
        label_Item2->setObjectName(QStringLiteral("label_Item2"));

        horizontalLayout_28->addWidget(label_Item2);

        line_Item2 = new QLineEdit(widget5);
        line_Item2->setObjectName(QStringLiteral("line_Item2"));

        horizontalLayout_28->addWidget(line_Item2);

        widget6 = new QWidget(tab_Post);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(180, 120, 184, 23));
        horizontalLayout_29 = new QHBoxLayout(widget6);
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        label_Poster2 = new QLabel(widget6);
        label_Poster2->setObjectName(QStringLiteral("label_Poster2"));

        horizontalLayout_29->addWidget(label_Poster2);

        line_Poster2 = new QLineEdit(widget6);
        line_Poster2->setObjectName(QStringLiteral("line_Poster2"));

        horizontalLayout_29->addWidget(line_Poster2);

        widget7 = new QWidget(tab_Post);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(180, 240, 252, 96));
        verticalLayout_13 = new QVBoxLayout(widget7);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_Path = new QLabel(widget7);
        label_Path->setObjectName(QStringLiteral("label_Path"));

        verticalLayout_11->addWidget(label_Path);

        line_Path = new QLineEdit(widget7);
        line_Path->setObjectName(QStringLiteral("line_Path"));

        verticalLayout_11->addWidget(line_Path);


        verticalLayout_13->addLayout(verticalLayout_11);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalSpacer_3 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_3);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        push_Upload = new QPushButton(widget7);
        push_Upload->setObjectName(QStringLiteral("push_Upload"));

        horizontalLayout_23->addWidget(push_Upload);

        push_Browser = new QPushButton(widget7);
        push_Browser->setObjectName(QStringLiteral("push_Browser"));

        horizontalLayout_23->addWidget(push_Browser);


        horizontalLayout_22->addLayout(horizontalLayout_23);


        verticalLayout_13->addLayout(horizontalLayout_22);

        tab_Offer->addTab(tab_Post, QString());
        tab_View = new QWidget();
        tab_View->setObjectName(QStringLiteral("tab_View"));
        layoutWidget_6 = new QWidget(tab_View);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(100, 460, 441, 36));
        horizontalLayout_33 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        push_Save = new QPushButton(layoutWidget_6);
        push_Save->setObjectName(QStringLiteral("push_Save"));

        horizontalLayout_33->addWidget(push_Save);

        push_Delete = new QPushButton(layoutWidget_6);
        push_Delete->setObjectName(QStringLiteral("push_Delete"));

        horizontalLayout_33->addWidget(push_Delete);

        widget8 = new QWidget(tab_View);
        widget8->setObjectName(QStringLiteral("widget8"));
        widget8->setGeometry(QRect(20, 230, 611, 221));
        verticalLayout_14 = new QVBoxLayout(widget8);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget8);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_14->addWidget(label_14);

        table_Selling = new QTableView(widget8);
        table_Selling->setObjectName(QStringLiteral("table_Selling"));

        verticalLayout_14->addWidget(table_Selling);

        widget9 = new QWidget(tab_View);
        widget9->setObjectName(QStringLiteral("widget9"));
        widget9->setGeometry(QRect(20, 0, 611, 221));
        verticalLayout_15 = new QVBoxLayout(widget9);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget9);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_15->addWidget(label_13);

        table_Buying = new QTableView(widget9);
        table_Buying->setObjectName(QStringLiteral("table_Buying"));

        verticalLayout_15->addWidget(table_Buying);

        tab_Offer->addTab(tab_View, QString());

        verticalLayout_2->addWidget(tab_Offer);

        stackedWidget->addWidget(page_offer);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 704, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tab_Offer->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_ID->setText(QApplication::translate("MainWindow", "User ID: ", 0));
        label_Password->setText(QApplication::translate("MainWindow", "Password: ", 0));
        pushButton_SignIn->setText(QApplication::translate("MainWindow", "Sign In", 0));
        pushButton_SignUp->setText(QApplication::translate("MainWindow", "Sign Up", 0));
        group_Bid->setTitle(QApplication::translate("MainWindow", "Place bid", 0));
        label_Bargin->setText(QApplication::translate("MainWindow", "Bargain:", 0));
        label_Message->setText(QApplication::translate("MainWindow", "Message: ", 0));
        push_Bid->setText(QApplication::translate("MainWindow", "Bid", 0));
        push_Buy->setText(QApplication::translate("MainWindow", "Buy it now!", 0));
        group_Find->setTitle(QApplication::translate("MainWindow", "Find offer", 0));
        push_Search->setText(QApplication::translate("MainWindow", "Search", 0));
        group_Info->setTitle(QApplication::translate("MainWindow", "Offer Information", 0));
        label_Discription->setText(QApplication::translate("MainWindow", "Description: ", 0));
        label_Price->setText(QApplication::translate("MainWindow", "Price: ", 0));
        label_Poster->setText(QApplication::translate("MainWindow", "Poster: ", 0));
        label_Barter->setText(QApplication::translate("MainWindow", "Barter: ", 0));
        label_Time->setText(QApplication::translate("MainWindow", "Time: ", 0));
        tab_Offer->setTabText(tab_Offer->indexOf(tab_Search), QApplication::translate("MainWindow", "Search", 0));
        push_Send->setText(QApplication::translate("MainWindow", "Send", 0));
        label_Discription2->setText(QApplication::translate("MainWindow", "Description: ", 0));
        check_Cash->setText(QString());
        label_Cash->setText(QApplication::translate("MainWindow", "Cash: ", 0));
        check_Barter->setText(QString());
        label_Barter2->setText(QApplication::translate("MainWindow", "Barter: ", 0));
        label_Item2->setText(QApplication::translate("MainWindow", "Item: ", 0));
        label_Poster2->setText(QApplication::translate("MainWindow", "Poster: ", 0));
        label_Path->setText(QApplication::translate("MainWindow", "Path: (Choose your preview picture)", 0));
        push_Upload->setText(QApplication::translate("MainWindow", "Upload", 0));
        push_Browser->setText(QApplication::translate("MainWindow", "Browser", 0));
        tab_Offer->setTabText(tab_Offer->indexOf(tab_Post), QApplication::translate("MainWindow", "Post", 0));
        push_Save->setText(QApplication::translate("MainWindow", "Save Changes", 0));
        push_Delete->setText(QApplication::translate("MainWindow", "Delete", 0));
        label_14->setText(QApplication::translate("MainWindow", "Selling:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Buying:", 0));
        tab_Offer->setTabText(tab_Offer->indexOf(tab_View), QApplication::translate("MainWindow", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
