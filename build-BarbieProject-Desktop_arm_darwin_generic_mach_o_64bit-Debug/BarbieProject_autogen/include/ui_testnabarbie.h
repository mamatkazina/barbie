/********************************************************************************
** Form generated from reading UI file 'testnabarbie.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTNABARBIE_H
#define UI_TESTNABARBIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestNaBarbie
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *imgBarbie;

    void setupUi(QDialog *TestNaBarbie)
    {
        if (TestNaBarbie->objectName().isEmpty())
            TestNaBarbie->setObjectName("TestNaBarbie");
        TestNaBarbie->resize(1211, 812);
        TestNaBarbie->setAutoFillBackground(true);
        TestNaBarbie->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(TestNaBarbie);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 591, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(23);
        label->setFont(font);
        gridLayoutWidget = new QWidget(TestNaBarbie);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 2, 2));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(TestNaBarbie);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 120, 581, 621));
        QFont font1;
        font1.setPointSize(17);
        groupBox->setFont(font1);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 340, 181, 41));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(100, 250, 372, 20));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(140, 100, 363, 20));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(100, 274, 372, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 70, 361, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 40, 361, 21));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(100, 298, 363, 20));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(140, 120, 363, 20));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(4, 40, 109, 194));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        imgBarbie = new QLabel(TestNaBarbie);
        imgBarbie->setObjectName("imgBarbie");
        imgBarbie->setGeometry(QRect(750, 190, 351, 451));
        imgBarbie->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-04-27 \320\262 22.31.20.png")));

        retranslateUi(TestNaBarbie);

        QMetaObject::connectSlotsByName(TestNaBarbie);
    } // setupUi

    void retranslateUi(QDialog *TestNaBarbie)
    {
        TestNaBarbie->setWindowTitle(QCoreApplication::translate("TestNaBarbie", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TestNaBarbie", "Let's finally find out what kind of barbie you are...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TestNaBarbie", "please answer these really sophisticated questions", nullptr));
        pushButton->setText(QCoreApplication::translate("TestNaBarbie", "find out results", nullptr));
        checkBox_2->setText(QCoreApplication::translate("TestNaBarbie", "CheckBox", nullptr));
        radioButton->setText(QCoreApplication::translate("TestNaBarbie", "pink porsche", nullptr));
        checkBox_3->setText(QCoreApplication::translate("TestNaBarbie", "CheckBox", nullptr));
        radioButton_2->setText(QCoreApplication::translate("TestNaBarbie", "the hourse", nullptr));
        radioButton_3->setText(QCoreApplication::translate("TestNaBarbie", "castle", nullptr));
        label_4->setText(QCoreApplication::translate("TestNaBarbie", "name:", nullptr));
        label_5->setText(QCoreApplication::translate("TestNaBarbie", "age:", nullptr));
        label_2->setText(QCoreApplication::translate("TestNaBarbie", "favourite color:", nullptr));
        label_6->setText(QCoreApplication::translate("TestNaBarbie", "dream house:", nullptr));
        label_7->setText(QCoreApplication::translate("TestNaBarbie", "future job:", nullptr));
        label_8->setText(QCoreApplication::translate("TestNaBarbie", "hobby:", nullptr));
        label_3->setText(QCoreApplication::translate("TestNaBarbie", "dream car:", nullptr));
        imgBarbie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestNaBarbie: public Ui_TestNaBarbie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTNABARBIE_H
