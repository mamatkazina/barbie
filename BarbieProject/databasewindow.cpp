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
    loadDataFromCSV("/Users/arinamamatkazina/PycharmProjects/BarbieProject/file.csv");

    // Инициализация таблицы
    ui->barbieTableWidget->setColumnCount(6);
    QStringList headers = {"Series", "Model", "Year", "Sales", "Price", "Accessories"};
    ui->barbieTableWidget->setHorizontalHeaderLabels(headers);
    ui->barbieTableWidget->setColumnWidth(5, 400);

    databasewindow::loadDataFromCSV("/Users/arinamamatkazina/PycharmProjects/BarbieProject/file.csv");


    // Добавление элементов выбора
    ui->sortComboBox_2->addItem("        ");
    ui->sortComboBox_2->addItem("year");
    ui->sortComboBox_2->addItem("sales");
    ui->sortComboBox_2->addItem("price");

    // Подключение сигнала к слоту
    connect(ui->sortComboBox_2, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index) {
                qDebug() << "Selected index: " << index;
                qDebug() << "Selected value: " << ui->sortComboBox_2->currentText();
            });

    databasewindow::loadDataFromCSV("/Users/arinamamatkazina/PycharmProjects/BarbieProject/file.csv");

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



    int row = ui->barbieTableWidget->rowCount();
    ui->barbieTableWidget->insertRow(row);
    QStringList rowData;
    rowData << ui->siriesEdit->text()
            << ui->modelEdit->text()
            << QString::number(ui->yearSpinBox->value())
            << QString::number(ui->salesSpinBox->value())
            << QString::number(ui->priceDoubleSpinBox->value())
            << ui->accessoriesEdit->text();


    ui->barbieTableWidget->setItem(row, 0, new QTableWidgetItem(ui->siriesEdit->text()));
    ui->barbieTableWidget->setItem(row, 1, new QTableWidgetItem(ui->modelEdit->text()));
    ui->barbieTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(ui->yearSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(ui->salesSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(ui->priceDoubleSpinBox->value())));
    ui->barbieTableWidget->setItem(row, 5, new QTableWidgetItem(ui->accessoriesEdit->text()));
    QFile file("/Users/arinamamatkazina/PycharmProjects/BarbieProject/file.csv");

    qDebug() << rowData.join(",") << Qt::endl;
    if (file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << rowData.join(",") << Qt::endl;
        file.close();
    }


    // QFile file1(":/resources/file.csv");
    // if (!file1.open(QIODevice::ReadOnly)) {
    //     QMessageBox::warning(this, "Error", "Could not open file");
    //     return;
    // }
    // QTextStream in(&file1);
    // QString text = in.read(1000000);
    // file1.close();



    // QFile file2(":/resources/file.csv");
    // if (!file2.open(QIODevice::WriteOnly)) {
    //     QMessageBox::warning(this, "Error", "Could not open file");
    //     return;
    // }
    // QTextStream out(&file2);


    // QString newElement;
    // newElement = newElement + ui->siriesEdit->text() + ", ";
    // newElement = newElement + ui->modelEdit->text() + ", ";
    // newElement = newElement + QString::number(ui->yearSpinBox->value()) + ", ";
    // newElement = newElement + QString::number(ui->salesSpinBox->value()) + ", ";
    // newElement = newElement + QString::number(ui->priceDoubleSpinBox->value()) + ", ";
    // newElement = newElement + ui->accessoriesEdit->text();
    // newElement = text+'\n'+newElement;
    // QByteArray newElem1 = newElement.toUtf8();

    // out << newElement << Qt::endl;
    // file2.write(newElem1);
    // qDebug() << newElement;
    // file2.close();

}

void databasewindow::deleteBarbie() {
    int currentRow = ui->barbieTableWidget->currentRow();
    if (currentRow >= 0) {
        ui->barbieTableWidget->removeRow(currentRow);
    }
}

void databasewindow::sortTable() {
    int columnIndex = ui->sortComboBox_2->currentIndex();
    if (columnIndex == 1){
        ui->barbieTableWidget->sortItems(2, Qt::AscendingOrder);
    }
    if (columnIndex == 2){
        ui->barbieTableWidget->sortItems(3, Qt::AscendingOrder);
    }
    if (columnIndex == 3){
        ui->barbieTableWidget->sortItems(4, Qt::AscendingOrder);
    }
}

