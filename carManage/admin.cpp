#include "admin.h"
#include "ui_admin.h"

#include <QKeyEvent>

admin::admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);

}

admin::~admin()
{
    delete ui;
}



void admin::on_pushButton_clicked()
{
    exit(0);
}

