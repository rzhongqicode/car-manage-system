#include "login.h"
#include "admin.h"
#include <QApplication>
#include "carsql.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    carSql sql;
    w.show();
    return a.exec();
}
