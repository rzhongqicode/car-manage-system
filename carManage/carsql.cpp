#include "carsql.h"
#include <QMessageBox>
// #include <QtDebug>
#include <QCoreApplication>
#include <QSqlQuery>

carSql::carSql(QObject *parent)
    : QObject{parent}
{
    init();

    QSqlQuery q("", my_database);
    q.exec("INSERT INTO car VALUES ('1234', '222', 2020, '333')");

}

void carSql::init()
{
    if(QSqlDatabase::drivers().isEmpty())
    {
        QMessageBox::information(nullptr,tr("No driver found"),tr("Try again"));
        // qDebug()<<"No driver found";
    }

    //创建数据库链接
    my_database = QSqlDatabase::addDatabase("QSQLITE");
    //获取应用程序文件夹目录
    auto str =QCoreApplication::applicationDirPath();
    qDebug()<<str;

    my_database.setDatabaseName("E:\\carData.db");
    if(!my_database.open()){
        QMessageBox::warning(nullptr, tr("Unable to open database"),tr("Try again"));
    }
}

// uint32_t carSql::getCarCnt()
// {

// }
