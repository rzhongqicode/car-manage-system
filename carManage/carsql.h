#ifndef CARSQL_H
#define CARSQL_H

#include <QObject>
#include <QSqlDatabase>


//定义车辆类
class carInfo{
public:
    QString license;
    QString model;
    uint16_t year;
    QString color;

};

class carSql : public QObject
{
    Q_OBJECT
public:
    explicit carSql(QObject *parent = nullptr);

    //初始化方法
    void init();

    //查询车辆数量
    uint32_t getCarCnt();

    //查询第几页的车辆信息
    QList<carInfo> GetPageCar(uint32_t page, uint32_t page_cnt);

    //增加车辆
    bool addCar(carInfo this_car);

    //删除车辆(通过车牌号删除)
    bool delCar(QString carlicense);

    //清空车辆信息
    bool clearAllCar();

    //修改车辆信息
    bool updateCar(carInfo this_car);

signals:

private:
    QSqlDatabase my_database;
    // QSqlQuery q;
};

#endif // CARSQL_H
