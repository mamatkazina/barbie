#ifndef TESTNABARBIE_H
#define TESTNABARBIE_H

#include <QDialog>

namespace Ui {
class TestNaBarbie;
}

class TestNaBarbie : public QDialog
{
    Q_OBJECT

public:
    explicit TestNaBarbie(QWidget *parent = nullptr);
    ~TestNaBarbie();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_results_clicked();

private:
    Ui::TestNaBarbie *ui;
};

#endif // TESTNABARBIE_H
