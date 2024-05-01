#ifndef RESULTSONTEST_H
#define RESULTSONTEST_H

#include <QDialog>

namespace Ui {
class resultsontest;
}

class resultsontest : public QDialog
{
    Q_OBJECT

public:
    explicit resultsontest(QWidget *parent = nullptr);
    ~resultsontest();

private:
    Ui::resultsontest *ui;
};

#endif // RESULTSONTEST_H
