#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "carsql.h"
namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();


private slots:
    void on_pushButton_clicked();

private:
    Ui::admin *ui;
    carSql* m_ptrSql;
};

#endif // ADMIN_H
