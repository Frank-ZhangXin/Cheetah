/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *line_ID;
    QLineEdit *line_password;
    QLineEdit *line_re_password;
    QLineEdit *line_Email;
    QLabel *label_ID;
    QLabel *label_password;
    QLabel *label_re_password;
    QLabel *label_Email;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(400, 300);
        buttonBox = new QDialogButtonBox(SignUp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        line_ID = new QLineEdit(SignUp);
        line_ID->setObjectName(QStringLiteral("line_ID"));
        line_ID->setGeometry(QRect(190, 60, 113, 21));
        line_password = new QLineEdit(SignUp);
        line_password->setObjectName(QStringLiteral("line_password"));
        line_password->setGeometry(QRect(190, 90, 113, 21));
        line_re_password = new QLineEdit(SignUp);
        line_re_password->setObjectName(QStringLiteral("line_re_password"));
        line_re_password->setGeometry(QRect(190, 130, 113, 21));
        line_Email = new QLineEdit(SignUp);
        line_Email->setObjectName(QStringLiteral("line_Email"));
        line_Email->setGeometry(QRect(190, 170, 113, 21));
        label_ID = new QLabel(SignUp);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        label_ID->setGeometry(QRect(100, 60, 62, 19));
        label_password = new QLabel(SignUp);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(100, 90, 71, 19));
        label_re_password = new QLabel(SignUp);
        label_re_password->setObjectName(QStringLiteral("label_re_password"));
        label_re_password->setGeometry(QRect(100, 130, 71, 19));
        label_Email = new QLabel(SignUp);
        label_Email->setObjectName(QStringLiteral("label_Email"));
        label_Email->setGeometry(QRect(100, 170, 62, 19));

        retranslateUi(SignUp);
        QObject::connect(buttonBox, SIGNAL(accepted()), SignUp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SignUp, SLOT(reject()));

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Dialog", 0));
        label_ID->setText(QApplication::translate("SignUp", "User ID:", 0));
        label_password->setText(QApplication::translate("SignUp", "Password: ", 0));
        label_re_password->setText(QApplication::translate("SignUp", "Re-type it: ", 0));
        label_Email->setText(QApplication::translate("SignUp", "Email: ", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
