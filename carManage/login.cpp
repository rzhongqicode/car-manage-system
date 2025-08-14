#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

//按下登录用户按键的槽函数
void login::on_button_user_clicked()
{
    this->hide();
    user_page = new user;
    user_page->show();
}

//按下管理员按键的槽函数
void login::on_button_admin_clicked()
{
    this->hide();
    admin_page = new admin;
    admin_page->show();
}

