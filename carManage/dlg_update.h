#ifndef DLG_UPDATE_H
#define DLG_UPDATE_H

#include <QDialog>
#include <QMessageBox>
#include "carsql.h"

namespace Ui {
class dlg_update;
}

class dlg_update : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_update(QWidget *parent = nullptr);
    ~dlg_update();
    void setState(carInfo original_info);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::dlg_update *ui;
};

#endif // DLG_UPDATE_H
