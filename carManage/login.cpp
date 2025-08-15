#include "login.h"
#include "ui_login.h"

#include <qevent.h>

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    // state = 0;
}

login::~login()
{
    delete ui;
}

// void login::keyPressEvent(QKeyEvent *event)
// {
//     switch(state){
//     case 0:break;
//     case 1:admin_page->hide();this->show();state = 0;break;
//     case 2:user_page->hide();this->hide();state = 0;break;
//     }
// }

//按下登录用户按键的槽函数
void login::on_button_user_clicked()
{
    this->hide();
    user_page = new user;
    user_page->show();
    // state = 2;
}

//按下管理员按键的槽函数
void login::on_button_admin_clicked()
{
    this->hide();
    admin_page = new admin;
    admin_page->show();
    // state = 1;
}

