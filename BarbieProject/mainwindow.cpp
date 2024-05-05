#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "testnabarbie.h"
#include "aboutbarbie.h"
#include "databasewindow.h"
#include <QPixmap>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // QPixmap barbie1(":/resources/img/pic1.jpg");
    // int w1 = ui->pic1->width();
    // int h1 = ui->pic1->height();
    // ui->pic1->setPixmap(barbie1.scaled(w1, h1, Qt::KeepAspectRatio));

    // QPixmap barbie2(":/resources/img/pic2.jpg");
    // int w2 = ui->pic2->width();
    // int h2 = ui->pic2->height();
    // ui->pic2->setPixmap(barbie2.scaled(w2, h2, Qt::KeepAspectRatio));

    // QPixmap barbie3(":/resources/img/pic3.jpg");
    // int w3 = ui->pic3->width();
    // int h3 = ui->pic3->height();
    // ui->pic3->setPixmap(barbie3.scaled(w3, h3, Qt::KeepAspectRatio));

    QPixmap barbie4(":/resources/img/pic4.jpeg");
    int w4 = ui->pic4->width();
    int h4 = ui->pic4->height();
    ui->pic4->setPixmap(barbie4.scaled(w4, h4, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    TestNaBarbie test;
    test.setModal(true);
    test.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    databasewindow database;
    database.setModal(true);
    database.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    aboutBarbie about;
    about.setModal(true);
    about.exec();
}

