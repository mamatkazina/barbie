/********************************************************************************
** Form generated from reading UI file 'databasewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEWINDOW_H
#define UI_DATABASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_databasewindow
{
public:
    QLabel *label;

    void setupUi(QDialog *databasewindow)
    {
        if (databasewindow->objectName().isEmpty())
            databasewindow->setObjectName("databasewindow");
        databasewindow->resize(792, 571);
        databasewindow->setStyleSheet(QString::fromUtf8("background: rgb(254, 215, 255);"));
        label = new QLabel(databasewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 521, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        retranslateUi(databasewindow);

        QMetaObject::connectSlotsByName(databasewindow);
    } // setupUi

    void retranslateUi(QDialog *databasewindow)
    {
        databasewindow->setWindowTitle(QCoreApplication::translate("databasewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("databasewindow", "Lets find out some key factors from our research", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databasewindow: public Ui_databasewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEWINDOW_H
