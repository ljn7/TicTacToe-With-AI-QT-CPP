/********************************************************************************
** Form generated from reading UI file 'teampick.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMPICK_H
#define UI_TEAMPICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeamPick
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *ButtonO;
    QLabel *label;
    QPushButton *ButtonX;

    void setupUi(QDialog *TeamPick)
    {
        if (TeamPick->objectName().isEmpty())
            TeamPick->setObjectName("TeamPick");
        TeamPick->resize(380, 150);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TeamPick->sizePolicy().hasHeightForWidth());
        TeamPick->setSizePolicy(sizePolicy);
        TeamPick->setMinimumSize(QSize(300, 150));
        TeamPick->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.447, y1:0, x2:0.436, y2:0.994318, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(77, 77, 77, 255));"));
        gridLayout_2 = new QGridLayout(TeamPick);
        gridLayout_2->setObjectName("gridLayout_2");
        ButtonO = new QPushButton(TeamPick);
        ButtonO->setObjectName("ButtonO");
        sizePolicy.setHeightForWidth(ButtonO->sizePolicy().hasHeightForWidth());
        ButtonO->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        ButtonO->setFont(font);
        ButtonO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        gridLayout_2->addWidget(ButtonO, 1, 1, 1, 1);

        label = new QLabel(TeamPick);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        ButtonX = new QPushButton(TeamPick);
        ButtonX->setObjectName("ButtonX");
        sizePolicy.setHeightForWidth(ButtonX->sizePolicy().hasHeightForWidth());
        ButtonX->setSizePolicy(sizePolicy);
        ButtonX->setFont(font);
        ButtonX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        gridLayout_2->addWidget(ButtonX, 1, 0, 1, 1);


        retranslateUi(TeamPick);

        QMetaObject::connectSlotsByName(TeamPick);
    } // setupUi

    void retranslateUi(QDialog *TeamPick)
    {
        TeamPick->setWindowTitle(QCoreApplication::translate("TeamPick", "Dialog", nullptr));
        ButtonO->setText(QCoreApplication::translate("TeamPick", "O", nullptr));
        label->setText(QCoreApplication::translate("TeamPick", "Choose your team! (changing team in mid game will reset the game).", nullptr));
        ButtonX->setText(QCoreApplication::translate("TeamPick", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamPick: public Ui_TeamPick {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMPICK_H
