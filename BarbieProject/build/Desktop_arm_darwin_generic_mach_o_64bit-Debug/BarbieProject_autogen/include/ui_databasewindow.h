/********************************************************************************
** Form generated from reading UI file 'databasewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEWINDOW_H
#define UI_DATABASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_databasewindow
{
public:
    QLabel *label;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *pushButton_3;
    QTableWidget *barbieTableWidget;
    QLineEdit *siriesEdit;
    QSpinBox *yearSpinBox;
    QSpinBox *salesSpinBox;
    QPushButton *sortButton;
    QPushButton *seriesEdit;
    QLineEdit *modelEdit;
    QDoubleSpinBox *priceDoubleSpinBox;
    QLineEdit *accessoriesEdit;
    QComboBox *sortComboBox_2;

    void setupUi(QDialog *databasewindow)
    {
        if (databasewindow->objectName().isEmpty())
            databasewindow->setObjectName("databasewindow");
        databasewindow->resize(1200, 800);
        databasewindow->setMinimumSize(QSize(1200, 800));
        databasewindow->setStyleSheet(QString::fromUtf8("background: rgb(254, 215, 255);"));
        label = new QLabel(databasewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 891, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        addButton = new QPushButton(databasewindow);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(860, 320, 221, 32));
        addButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 19px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
"\n"
""));
        deleteButton = new QPushButton(databasewindow);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(860, 360, 221, 32));
        deleteButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 19px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_3 = new QPushButton(databasewindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(880, 620, 221, 32));
        pushButton_3->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 19px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
"\n"
""));
        barbieTableWidget = new QTableWidget(databasewindow);
        barbieTableWidget->setObjectName("barbieTableWidget");
        barbieTableWidget->setGeometry(QRect(40, 80, 801, 561));
        siriesEdit = new QLineEdit(databasewindow);
        siriesEdit->setObjectName("siriesEdit");
        siriesEdit->setGeometry(QRect(870, 90, 191, 41));
        yearSpinBox = new QSpinBox(databasewindow);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setGeometry(QRect(870, 200, 181, 41));
        salesSpinBox = new QSpinBox(databasewindow);
        salesSpinBox->setObjectName("salesSpinBox");
        salesSpinBox->setGeometry(QRect(870, 250, 191, 31));
        sortButton = new QPushButton(databasewindow);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(860, 450, 221, 32));
        sortButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 19px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
"\n"
""));
        seriesEdit = new QPushButton(databasewindow);
        seriesEdit->setObjectName("seriesEdit");
        seriesEdit->setGeometry(QRect(860, 400, 221, 32));
        seriesEdit->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 19px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
"\n"
""));
        modelEdit = new QLineEdit(databasewindow);
        modelEdit->setObjectName("modelEdit");
        modelEdit->setGeometry(QRect(870, 140, 191, 41));
        priceDoubleSpinBox = new QDoubleSpinBox(databasewindow);
        priceDoubleSpinBox->setObjectName("priceDoubleSpinBox");
        priceDoubleSpinBox->setGeometry(QRect(870, 490, 161, 71));
        accessoriesEdit = new QLineEdit(databasewindow);
        accessoriesEdit->setObjectName("accessoriesEdit");
        accessoriesEdit->setGeometry(QRect(870, 580, 113, 21));
        sortComboBox_2 = new QComboBox(databasewindow);
        sortComboBox_2->setObjectName("sortComboBox_2");
        sortComboBox_2->setGeometry(QRect(110, 100, 103, 32));

        retranslateUi(databasewindow);

        QMetaObject::connectSlotsByName(databasewindow);
    } // setupUi

    void retranslateUi(QDialog *databasewindow)
    {
        databasewindow->setWindowTitle(QCoreApplication::translate("databasewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#f35de2;\">Lets find out some key factors from our research</span></p></body></html>", nullptr));
        addButton->setText(QCoreApplication::translate("databasewindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("databasewindow", "Delete", nullptr));
        pushButton_3->setText(QCoreApplication::translate("databasewindow", "Sort by Series", nullptr));
        sortButton->setText(QCoreApplication::translate("databasewindow", "Sort by Model", nullptr));
        seriesEdit->setText(QCoreApplication::translate("databasewindow", "Sort by Series", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databasewindow: public Ui_databasewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEWINDOW_H
