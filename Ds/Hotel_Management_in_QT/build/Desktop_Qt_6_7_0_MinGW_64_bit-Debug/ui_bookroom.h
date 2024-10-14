/********************************************************************************
** Form generated from reading UI file 'bookroom.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKROOM_H
#define UI_BOOKROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->setWindowModality(Qt::WindowModal);
        Book->resize(320, 240);
        horizontalLayoutWidget = new QWidget(Book);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(9, 199, 301, 33));
        QFont font;
        font.setPointSize(12);
        horizontalLayoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(Book);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(19, 60, 281, 80));
        horizontalLayoutWidget_2->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font);

        horizontalLayout_2->addWidget(comboBox);


        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QDialog *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "Book a Room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Book", "CheckOut", nullptr));
        pushButton->setText(QCoreApplication::translate("Book", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Book", "Select Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKROOM_H
