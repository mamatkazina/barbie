#include "testnabarbie.h"
#include "ui_testnabarbie.h"
#include "mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

TestNaBarbie::TestNaBarbie(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestNaBarbie)
{
    ui->setupUi(this);
    QPixmap barbie(":/resources/img/testbarbie.png");
    int w = ui->imgBarbie->width();
    int h = ui->imgBarbie->height();
    ui->imgBarbie->setPixmap(barbie.scaled(w, h, Qt::KeepAspectRatio));
}

TestNaBarbie::~TestNaBarbie()
{
    delete ui;
}

void TestNaBarbie::on_pushButton_clicked()
{


    QString name = ui->line_name->text();
    QString age = ui->line_age->text();

    if (name.isEmpty() && age.isEmpty()){
        QMessageBox::warning(this, "Authorization", "Sorry, you have made a mistake in authorization" );
    }
    else{

    }


}



void TestNaBarbie::on_pushButton_results_clicked()
{
    int code = 0;
    int code_2 = 0;
    int magic = 0;
    QString name = ui->line_name->text();
    if (name.size() >= 5){
        code = 7;
    }
    else{
        code = 2;
    }

    QString age = ui->line_age->text();
    if (age.size() == 2){
        code_2 = 8;
    }
    else{
        code_2 = 3;
    }
    int counterHobby = -1;
    int counterColors = -1;

    if (name.isEmpty() && age.isEmpty()){
        QMessageBox::warning(this, "Authorization", "Sorry, you have made a mistake in authorization" );
    }
    else if (!(ui->checkBox_castle->isChecked())){
        QMessageBox::warning(this, "Authorization", "Sorry, you have foggoten to choose castle" );
    }
    else if (!(ui->male->isChecked()) && !(ui->female->isChecked())){
        QMessageBox::warning(this, "Authorization", "Sorry, you have foggoten to put check into checkbox" );
    }
    else{

        if (ui->radioButton_emboroidery->isChecked()){
            counterHobby = 3;
        }
        else if (ui->radioButton_hiking->isChecked()){
            counterHobby = 1;
        }
        else if (ui->radioButton_shopping->isChecked()){
            counterHobby = 2;
        }
        else if (ui->radioButton_travelling->isChecked()){
            counterHobby = 4;
        }

        if (ui->radioButton_pinkporsche->isChecked()){
            counterColors = 4;
        }
        else if (ui->radioButton_redferrari->isChecked()){
            counterColors = 2;
        }
        else if (ui->radioButton_yellowlamborghini->isChecked()){
            counterColors = 3;
        }
        else if (ui->radioButton_silverbentley->isChecked()){
            counterColors = 1;
        }

        if(ui->male->isChecked()){
            QMessageBox::information(this, "barbie", "YOU ARE DEFINITELY THE KEN");
        }
        else{
            magic = (code + code_2 + counterColors + counterHobby)%10;
            if (magic == 1 || magic == 2 || magic == 3){
                QMessageBox::information(this, "barbie", "YOU ARE A COUNTRYSIDE BARBIE");
            }
            else if (magic == 4 || magic == 5 || magic == 6){
                QMessageBox::information(this, "barbie", "YOU ARE A PORSCHE BARBIE");
            }
            else{
                QMessageBox::information(this, "barbie", "YOU ARE A CLASSIC PINK BARBIE");
            }
        }

    }
}

