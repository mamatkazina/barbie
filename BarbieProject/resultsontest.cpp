#include "resultsontest.h"
#include "ui_resultsontest.h"

resultsontest::resultsontest(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::resultsontest)
{
    ui->setupUi(this);
}

resultsontest::~resultsontest()
{
    delete ui;
}
