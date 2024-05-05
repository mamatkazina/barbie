#include "aboutbarbie.h"
#include "ui_aboutbarbie.h"

aboutBarbie::aboutBarbie(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::aboutBarbie)
{
    ui->setupUi(this);
}

aboutBarbie::~aboutBarbie()
{
    delete ui;
}
