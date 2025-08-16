#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "carsql.h"
#include "dlg_add.h"
namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private:
    void updateTable();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::admin *ui;
    carSql* m_ptrSql;
    Dlg_Add m_dlgAdd;
};

#endif // ADMIN_H
