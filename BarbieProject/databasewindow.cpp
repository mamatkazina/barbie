#include "databasewindow.h"
#include "ui_databasewindow.h"
#include <QFile>
#include <QTextStream>
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
    loadDataFromCSV(":/resources/file.csv");

    // Инициализация таблицы
    ui->barbieTableWidget->setColumnCount(6);
    QStringList headers = {"Series", "Model", "Year", "Sales", "Price", "Accessories"};
    ui->barbieTableWidget->setHorizontalHeaderLabels(headers);
    databasewindow::loadDataFromCSV(":/resources/file.csv");
}




databasewindow::~databasewindow()
{
    delete ui;
}

// void databasewindow::on_pushButton_3_clicked()
// {

// }


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
    int row = ui->barbieTableWidget->rowCount();
    ui->barbieTableWidget->insertRow(row);

    ui->barbieTableWidget->setItem(row, 0, new QTableWidgetItem(ui->seriesEdit->text()));
    ui->barbieTableWidget->setItem(row, 1, new QTableWidgetItem(ui->modelEdit->text()));
    ui->barbieTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(ui->yearSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(ui->salesSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(ui->priceDoubleSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 5, new QTableWidgetItem(ui->accessoriesEdit->text()));
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
