#ifndef DATABASEWINDOW_H
#define DATABASEWINDOW_H

#include <QDialog>

namespace Ui {
class databasewindow;
}

class databasewindow : public QDialog
{
    Q_OBJECT

public:
    explicit databasewindow(QWidget *parent = nullptr);
    ~databasewindow();

private:
    Ui::databasewindow *ui;
};

#endif // DATABASEWINDOW_H
