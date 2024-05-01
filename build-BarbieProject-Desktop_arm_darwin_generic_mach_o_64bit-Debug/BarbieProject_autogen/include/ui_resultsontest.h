/********************************************************************************
** Form generated from reading UI file 'resultsontest.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSONTEST_H
#define UI_RESULTSONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultsontest
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *resultsontest)
    {
        if (resultsontest->objectName().isEmpty())
            resultsontest->setObjectName("resultsontest");
        resultsontest->resize(513, 354);
        label = new QLabel(resultsontest);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 421, 31));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(resultsontest);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 2, 2));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(resultsontest);

        QMetaObject::connectSlotsByName(resultsontest);
    } // setupUi

    void retranslateUi(QDialog *resultsontest)
    {
        resultsontest->setWindowTitle(QCoreApplication::translate("resultsontest", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("resultsontest", "Congratulations!!!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultsontest: public Ui_resultsontest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSONTEST_H
