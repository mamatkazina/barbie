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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestNaBarbie
{
public:
    QLabel *title;
    QLabel *imgBarbie;
    QPushButton *pushButton_results;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name;
    QLineEdit *line_name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *age;
    QLineEdit *line_age;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *color;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_silverbentley;
    QRadioButton *radioButton_redferrari;
    QRadioButton *radioButton_yellowlamborghini;
    QRadioButton *radioButton_pinkporsche;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *birth;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *female;
    QCheckBox *male;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_travelling;
    QRadioButton *radioButton_hiking;
    QRadioButton *radioButton_shopping;
    QRadioButton *radioButton_emboroidery;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *house;
    QCheckBox *checkBox_castle;
    QLabel *label;

    void setupUi(QDialog *TestNaBarbie)
    {
        if (TestNaBarbie->objectName().isEmpty())
            TestNaBarbie->setObjectName("TestNaBarbie");
        TestNaBarbie->resize(1191, 914);
        TestNaBarbie->setMaximumSize(QSize(16777215, 16777215));
        TestNaBarbie->setBaseSize(QSize(0, 0));
        TestNaBarbie->setAutoFillBackground(false);
        TestNaBarbie->setStyleSheet(QString::fromUtf8("background: rgb(254, 215, 255);"));
        title = new QLabel(TestNaBarbie);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 20, 741, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(23);
        title->setFont(font);
        imgBarbie = new QLabel(TestNaBarbie);
        imgBarbie->setObjectName("imgBarbie");
        imgBarbie->setGeometry(QRect(750, 250, 351, 471));
        imgBarbie->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-04-27 \320\262 22.31.20.png")));
        pushButton_results = new QPushButton(TestNaBarbie);
        pushButton_results->setObjectName("pushButton_results");
        pushButton_results->setGeometry(QRect(700, 820, 181, 41));
        pushButton_results->setStyleSheet(QString::fromUtf8("  align-items: center;\n"
"  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  box-sizing: border-box;\n"
"  color: #111;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  font-family: Inter,sans-serif;\n"
"  font-size: 16px;\n"
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
        groupBox = new QGroupBox(TestNaBarbie);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 100, 611, 531));
        QFont font1;
        font1.setPointSize(15);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  color: #111;"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 581, 481));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        name = new QLabel(widget);
        name->setObjectName("name");

        horizontalLayout_2->addWidget(name);

        line_name = new QLineEdit(widget);
        line_name->setObjectName("line_name");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_name->sizePolicy().hasHeightForWidth());
        line_name->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(line_name);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        age = new QLabel(widget);
        age->setObjectName("age");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(age->sizePolicy().hasHeightForWidth());
        age->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(age);

        line_age = new QLineEdit(widget);
        line_age->setObjectName("line_age");

        horizontalLayout_3->addWidget(line_age);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        color = new QLabel(widget);
        color->setObjectName("color");

        horizontalLayout_4->addWidget(color);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButton_silverbentley = new QRadioButton(widget);
        radioButton_silverbentley->setObjectName("radioButton_silverbentley");
        radioButton_silverbentley->setFont(font1);

        verticalLayout->addWidget(radioButton_silverbentley);

        radioButton_redferrari = new QRadioButton(widget);
        radioButton_redferrari->setObjectName("radioButton_redferrari");
        radioButton_redferrari->setFont(font1);

        verticalLayout->addWidget(radioButton_redferrari);

        radioButton_yellowlamborghini = new QRadioButton(widget);
        radioButton_yellowlamborghini->setObjectName("radioButton_yellowlamborghini");
        radioButton_yellowlamborghini->setFont(font1);

        verticalLayout->addWidget(radioButton_yellowlamborghini);

        radioButton_pinkporsche = new QRadioButton(widget);
        radioButton_pinkporsche->setObjectName("radioButton_pinkporsche");
        radioButton_pinkporsche->setFont(font1);

        verticalLayout->addWidget(radioButton_pinkporsche);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        birth = new QLabel(widget);
        birth->setObjectName("birth");

        horizontalLayout_7->addWidget(birth);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setFont(font1);
        dateEdit->setDateTime(QDateTime(QDate(2004, 11, 14), QTime(0, 0, 0)));

        horizontalLayout_7->addWidget(dateEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_8->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        female = new QCheckBox(widget);
        female->setObjectName("female");
        female->setFont(font1);

        horizontalLayout->addWidget(female);

        male = new QCheckBox(widget);
        male->setObjectName("male");
        male->setFont(font1);

        horizontalLayout->addWidget(male);


        horizontalLayout_8->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_8);

        groupBox_2 = new QGroupBox(TestNaBarbie);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 640, 611, 231));
        groupBox_2->setStyleSheet(QString::fromUtf8("  background-color: #FFCCE5;\n"
"  border: 2px solid #111;\n"
"  border-radius: 8px;\n"
"  color: #111;"));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 20, 571, 201));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_travelling = new QRadioButton(widget1);
        radioButton_travelling->setObjectName("radioButton_travelling");
        radioButton_travelling->setFont(font1);

        verticalLayout_2->addWidget(radioButton_travelling);

        radioButton_hiking = new QRadioButton(widget1);
        radioButton_hiking->setObjectName("radioButton_hiking");
        radioButton_hiking->setFont(font1);

        verticalLayout_2->addWidget(radioButton_hiking);

        radioButton_shopping = new QRadioButton(widget1);
        radioButton_shopping->setObjectName("radioButton_shopping");
        radioButton_shopping->setFont(font1);

        verticalLayout_2->addWidget(radioButton_shopping);

        radioButton_emboroidery = new QRadioButton(widget1);
        radioButton_emboroidery->setObjectName("radioButton_emboroidery");
        radioButton_emboroidery->setFont(font1);

        verticalLayout_2->addWidget(radioButton_emboroidery);


        horizontalLayout_9->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        house = new QLabel(widget1);
        house->setObjectName("house");

        horizontalLayout_6->addWidget(house);

        checkBox_castle = new QCheckBox(widget1);
        checkBox_castle->setObjectName("checkBox_castle");
        checkBox_castle->setFont(font1);

        horizontalLayout_6->addWidget(checkBox_castle);


        verticalLayout_4->addLayout(horizontalLayout_6);

        label = new QLabel(TestNaBarbie);
        label->setObjectName("label");
        label->setGeometry(QRect(680, 110, 501, 111));
        label->setFont(font1);

        retranslateUi(TestNaBarbie);

        QMetaObject::connectSlotsByName(TestNaBarbie);
    } // setupUi

    void retranslateUi(QDialog *TestNaBarbie)
    {
        TestNaBarbie->setWindowTitle(QCoreApplication::translate("TestNaBarbie", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Let's finally find out what kind of barbie you are...</span></p></body></html>", nullptr));
        imgBarbie->setText(QString());
        pushButton_results->setText(QCoreApplication::translate("TestNaBarbie", "find out results", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TestNaBarbie", "These answers are really important for us!", nullptr));
        name->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">name:</span></p></body></html>", nullptr));
        age->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">age:</span></p></body></html>", nullptr));
        color->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">favourite color:</span></p></body></html>", nullptr));
        radioButton_silverbentley->setText(QCoreApplication::translate("TestNaBarbie", "silver bentley", nullptr));
        radioButton_redferrari->setText(QCoreApplication::translate("TestNaBarbie", "red ferrari", nullptr));
        radioButton_yellowlamborghini->setText(QCoreApplication::translate("TestNaBarbie", "yellow lamborghini", nullptr));
        radioButton_pinkporsche->setText(QCoreApplication::translate("TestNaBarbie", "pink porsche", nullptr));
        birth->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">date of birth:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">sex:</span></p></body></html>", nullptr));
        female->setText(QCoreApplication::translate("TestNaBarbie", "female", nullptr));
        male->setText(QCoreApplication::translate("TestNaBarbie", "male", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">favourite </span></p><p><span style=\" font-size:18pt;\">leisure activities:</span></p></body></html>", nullptr));
        radioButton_travelling->setText(QCoreApplication::translate("TestNaBarbie", "travelling", nullptr));
        radioButton_hiking->setText(QCoreApplication::translate("TestNaBarbie", "hiking", nullptr));
        radioButton_shopping->setText(QCoreApplication::translate("TestNaBarbie", "shopping", nullptr));
        radioButton_emboroidery->setText(QCoreApplication::translate("TestNaBarbie", "emboroidery", nullptr));
        house->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p><span style=\" font-size:18pt;\">dream house:</span></p></body></html>", nullptr));
        checkBox_castle->setText(QCoreApplication::translate("TestNaBarbie", "castle", nullptr));
        label->setText(QCoreApplication::translate("TestNaBarbie", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">This test based on astrological calculations, matrix of fate and couple of facts.</span></p><p align=\"center\"><span style=\" font-size:14pt;\">It will will describe in detail who you are in the barbie world!</span></p><p align=\"center\"><span style=\" font-size:14pt;\">Just trust me!!!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestNaBarbie: public Ui_TestNaBarbie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTNABARBIE_H
