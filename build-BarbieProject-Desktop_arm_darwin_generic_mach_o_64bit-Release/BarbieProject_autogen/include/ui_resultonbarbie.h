/********************************************************************************
** Form generated from reading UI file 'resultonbarbie.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTONBARBIE_H
#define UI_RESULTONBARBIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultOnBarbie
{
public:
    QLabel *label;

    void setupUi(QWidget *resultOnBarbie)
    {
        if (resultOnBarbie->objectName().isEmpty())
            resultOnBarbie->setObjectName("resultOnBarbie");
        resultOnBarbie->resize(400, 300);
        label = new QLabel(resultOnBarbie);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 160, 58, 16));

        retranslateUi(resultOnBarbie);

        QMetaObject::connectSlotsByName(resultOnBarbie);
    } // setupUi

    void retranslateUi(QWidget *resultOnBarbie)
    {
        resultOnBarbie->setWindowTitle(QCoreApplication::translate("resultOnBarbie", "Form", nullptr));
        label->setText(QCoreApplication::translate("resultOnBarbie", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultOnBarbie: public Ui_resultOnBarbie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTONBARBIE_H
