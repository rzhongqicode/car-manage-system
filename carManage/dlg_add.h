#ifndef DLG_ADD_H
#define DLG_ADD_H

#include <QDialog>

namespace Ui {
class Dlg_Add;
}

class Dlg_Add : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_Add(QWidget *parent = nullptr);
    ~Dlg_Add();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_save_clicked();

private:
    Ui::Dlg_Add *ui;
};

#endif // DLG_ADD_H
