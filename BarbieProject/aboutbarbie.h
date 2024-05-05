#ifndef ABOUTBARBIE_H
#define ABOUTBARBIE_H

#include <QDialog>

namespace Ui {
class aboutBarbie;
}

class aboutBarbie : public QDialog
{
    Q_OBJECT

public:
    explicit aboutBarbie(QWidget *parent = nullptr);
    ~aboutBarbie();

private:
    Ui::aboutBarbie *ui;
};

#endif // ABOUTBARBIE_H
