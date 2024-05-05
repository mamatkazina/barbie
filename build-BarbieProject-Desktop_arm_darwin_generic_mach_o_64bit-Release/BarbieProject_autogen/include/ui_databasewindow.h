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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_databasewindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

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
        pushButton = new QPushButton(databasewindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(760, 120, 221, 32));
        pushButton->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
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
        pushButton_2 = new QPushButton(databasewindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(760, 160, 221, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
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
        pushButton_3->setGeometry(QRect(760, 200, 221, 32));
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

        retranslateUi(databasewindow);

        QMetaObject::connectSlotsByName(databasewindow);
    } // setupUi

    void retranslateUi(QDialog *databasewindow)
    {
        databasewindow->setWindowTitle(QCoreApplication::translate("databasewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("databasewindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#f35de2;\">Lets find out some key factors from our research</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("databasewindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("databasewindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("databasewindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databasewindow: public Ui_databasewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEWINDOW_H
