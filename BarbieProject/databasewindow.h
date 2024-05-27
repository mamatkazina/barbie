#ifndef DATABASEWINDOW_H
#define DATABASEWINDOW_H

#include <QDialog>
#include <QtCore>
#include <QMainWindow>
// #include "barbiedatabase.h"



namespace Ui {
class databasewindow;
}

struct Barbie {
    QString series;
    QString model;
    int year;
    int sales;
    double price;
    QString accessories;
};

class databasewindow : public QDialog
{
    Q_OBJECT

public:
    explicit databasewindow(QWidget *parent = nullptr);
    ~databasewindow();

private slots:
    void loadDataFromCSV(const QString &filePath);
    void addBarbie();
    void deleteBarbie();
    void sortTable();


private:
    Ui::databasewindow *ui;
};

#endif // DATABASEWINDOW_H


