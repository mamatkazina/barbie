#include "databasewindow.h"
#include "ui_databasewindow.h"

databasewindow::databasewindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::databasewindow)
{
    ui->setupUi(this);
}

databasewindow::~databasewindow()
{
    delete ui;
}

void databasewindow::on_pushButton_3_clicked()
{

}

