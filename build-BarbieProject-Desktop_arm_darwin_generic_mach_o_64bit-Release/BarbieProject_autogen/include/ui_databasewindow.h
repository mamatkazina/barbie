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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_databasewindow
{
public:
    QLabel *label;
    QTableWidget *barbieTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *sortComboBox_2;
    QPushButton *sortButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *name;
    QLineEdit *siriesEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *name_2;
    QLineEdit *modelEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *name_3;
    QSpinBox *yearSpinBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *name_4;
    QSpinBox *salesSpinBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *name_5;
    QDoubleSpinBox *priceDoubleSpinBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *name_6;
    QLineEdit *accessoriesEdit;
    QVBoxLayout *verticalLayout_9;
    QPushButton *addButton;
    QPushButton *deleteButton;

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
        barbieTableWidget = new QTableWidget(databasewindow);
        barbieTableWidget->setObjectName("barbieTableWidget");
        barbieTableWidget->setGeometry(QRect(40, 80, 811, 621));
        barbieTableWidget->setLineWidth(1);
        barbieTableWidget->setAutoScrollMargin(32);
        layoutWidget = new QWidget(databasewindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(870, 570, 211, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sortComboBox_2 = new QComboBox(layoutWidget);
        sortComboBox_2->setObjectName("sortComboBox_2");

        verticalLayout->addWidget(sortComboBox_2);


        verticalLayout_2->addLayout(verticalLayout);

        sortButton = new QPushButton(layoutWidget);
        sortButton->setObjectName("sortButton");
        sortButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 5px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 18px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_2->addWidget(sortButton);

        layoutWidget1 = new QWidget(databasewindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(870, 80, 211, 445));
        verticalLayout_10 = new QVBoxLayout(layoutWidget1);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        name = new QLabel(layoutWidget1);
        name->setObjectName("name");

        verticalLayout_3->addWidget(name);

        siriesEdit = new QLineEdit(layoutWidget1);
        siriesEdit->setObjectName("siriesEdit");

        verticalLayout_3->addWidget(siriesEdit);


        verticalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        name_2 = new QLabel(layoutWidget1);
        name_2->setObjectName("name_2");

        verticalLayout_4->addWidget(name_2);

        modelEdit = new QLineEdit(layoutWidget1);
        modelEdit->setObjectName("modelEdit");

        verticalLayout_4->addWidget(modelEdit);


        verticalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        name_3 = new QLabel(layoutWidget1);
        name_3->setObjectName("name_3");

        verticalLayout_5->addWidget(name_3);

        yearSpinBox = new QSpinBox(layoutWidget1);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setMaximum(1000);

        verticalLayout_5->addWidget(yearSpinBox);


        verticalLayout_10->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        name_4 = new QLabel(layoutWidget1);
        name_4->setObjectName("name_4");

        verticalLayout_6->addWidget(name_4);

        salesSpinBox = new QSpinBox(layoutWidget1);
        salesSpinBox->setObjectName("salesSpinBox");
        salesSpinBox->setMaximum(10000);

        verticalLayout_6->addWidget(salesSpinBox);


        verticalLayout_10->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        name_5 = new QLabel(layoutWidget1);
        name_5->setObjectName("name_5");

        verticalLayout_7->addWidget(name_5);

        priceDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        priceDoubleSpinBox->setObjectName("priceDoubleSpinBox");

        verticalLayout_7->addWidget(priceDoubleSpinBox);


        verticalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        name_6 = new QLabel(layoutWidget1);
        name_6->setObjectName("name_6");

        verticalLayout_8->addWidget(name_6);

        accessoriesEdit = new QLineEdit(layoutWidget1);
        accessoriesEdit->setObjectName("accessoriesEdit");

        verticalLayout_8->addWidget(accessoriesEdit);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        addButton = new QPushButton(layoutWidget1);
        addButton->setObjectName("addButton");
        addButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 5px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 18px;\n"
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

        verticalLayout_9->addWidget(addButton);

        deleteButton = new QPushButton(layoutWidget1);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 5px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 18px;\n"
"  justify-content: center;\n"
"  line-height: 24px;\n"
"  padding: 0 25px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_9->addWidget(deleteButton);


        verticalLayout_10->addLayout(verticalLayout_9);


        retranslateUi(databasewindow);

        QMetaObject::connectSlotsByName(databasewindow);
    } // setupUi

    void retranslateUi(QDialog *databasewindow)
    {
        databasewindow->setWindowTitle(QCoreApplication::translate("databasewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#f35de2;\">Lets find out some key factors from our research</span></p></body></html>", nullptr));
        sortButton->setText(QCoreApplication::translate("databasewindow", "Sort", nullptr));
        name->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write name</span></p></body></html>", nullptr));
        name_2->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write model</span></p></body></html>", nullptr));
        name_3->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write year</span></p></body></html>", nullptr));
        name_4->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write sales</span></p></body></html>", nullptr));
        name_5->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write price</span></p></body></html>", nullptr));
        name_6->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Write accessories</span></p></body></html>", nullptr));
        addButton->setText(QCoreApplication::translate("databasewindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("databasewindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databasewindow: public Ui_databasewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEWINDOW_H
