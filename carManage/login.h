#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "admin.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
    // virtual void keyPressEvent(QKeyEvent *event);

private slots:
    void on_button_user_clicked();

    void on_button_admin_clicked();

private:
    Ui::login *ui;
    admin *admin_page;
    user *user_page;
    // uint8_t state; //0:登陆界面，1：管理员界面，2：用户界面
};
#endif // LOGIN_H
