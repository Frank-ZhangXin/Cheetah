#ifndef EDITOFFER_H
#define EDITOFFER_H

#include <QDialog>

namespace Ui {
class EditOffer;
}

class EditOffer : public QDialog
{
    Q_OBJECT

public:
    explicit EditOffer(QWidget *parent = 0);
    ~EditOffer();

private:
    Ui::EditOffer *ui;
};

#endif // EDITOFFER_H
