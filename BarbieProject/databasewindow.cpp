#include "databasewindow.h"
#include "ui_databasewindow.h"
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QDebug>

databasewindow::databasewindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::databasewindow)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &databasewindow::addBarbie);
    connect(ui->deleteButton, &QPushButton::clicked, this, &databasewindow::deleteBarbie);
    connect(ui->sortButton, &QPushButton::clicked, this, &databasewindow::sortTable);

    // Load data from CSV
    loadDataFromCSV("file.csv");

    // Инициализация таблицы
    ui->barbieTableWidget->setColumnCount(6);
    QStringList headers = {"Series", "Model", "Year", "Sales", "Price", "Accessories"};
    ui->barbieTableWidget->setHorizontalHeaderLabels(headers);
    ui->barbieTableWidget->setColumnWidth(5, 400);
    databasewindow::loadDataFromCSV("file.csv");
}

databasewindow::~databasewindow()
{
    delete ui;
}



void databasewindow::loadDataFromCSV(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Could not open file");
        return;
    }

    QTextStream in(&file);
    ui->barbieTableWidget->setRowCount(0); // Clear existing data
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');

        int row = ui->barbieTableWidget->rowCount();
        ui->barbieTableWidget->insertRow(row);

        for (int i = 0; i < fields.size(); ++i) {
            ui->barbieTableWidget->setItem(row, i, new QTableWidgetItem(fields[i]));
        }
    }
    file.close();
}

void databasewindow::addBarbie() {
    QFile file1("file.csv");
    if (!file1.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Could not open file");
        return;
    }
    QTextStream in(&file1);
    QString text = in.read(1000000);
    file1.close();



    QFile file2("file.csv");
    if (!file2.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Error", "Could not open file");
        return;
    }
    QTextStream out(&file2);
    int row = ui->barbieTableWidget->rowCount();
    ui->barbieTableWidget->insertRow(row);

    ui->barbieTableWidget->setItem(row, 0, new QTableWidgetItem(ui->siriesEdit->text()));
    ui->barbieTableWidget->setItem(row, 1, new QTableWidgetItem(ui->modelEdit->text()));
    ui->barbieTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(ui->yearSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(ui->salesSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(ui->priceDoubleSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 5, new QTableWidgetItem(ui->accessoriesEdit->text()));

    QString newElement;
    newElement = newElement + ui->siriesEdit->text() + ", ";
    newElement = newElement + ui->modelEdit->text() + ", ";
    newElement = newElement + QString::number(ui->yearSpinBox->value()) + ", ";
    newElement = newElement + QString::number(ui->salesSpinBox->value()) + ", ";
    newElement = newElement + QString::number(ui->priceDoubleSpinBox->value()) + ", ";
    newElement = newElement + ui->accessoriesEdit->text();
    newElement = text+'\n'+newElement;
    QByteArray newElem1 = newElement.toUtf8();

    // out << newElement << Qt::endl;
    file2.write(newElem1);
    qDebug() << newElement;
    file2.close();

}

void databasewindow::deleteBarbie() {
    int currentRow = ui->barbieTableWidget->currentRow();
    if (currentRow >= 0) {
        ui->barbieTableWidget->removeRow(currentRow);
    }
}

void databasewindow::sortTable() {
    int columnIndex = ui->sortComboBox_2->currentIndex();
    ui->barbieTableWidget->sortItems(columnIndex);
}
