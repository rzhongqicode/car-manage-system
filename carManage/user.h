#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include "carsql.h"

namespace Ui {
class user;
}

class user : public QMainWindow
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();
    void updateTable();

private slots:
    void on_btn_exit_clicked();

    void on_btn_search_clicked();

private:
    Ui::user *ui;
    carSql * m_ptrSql;//数据库指针

};
#endif // USER_H
