/********************************************************************************
** Form generated from reading UI file 'optionsdialogue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOGUE_H
#define UI_OPTIONSDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialogue
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *restartGame;
    QPushButton *closeCurrentMenu;
    QPushButton *exitGame;

    void setupUi(QDialog *OptionsDialogue)
    {
        if (OptionsDialogue->objectName().isEmpty())
            OptionsDialogue->setObjectName("OptionsDialogue");
        OptionsDialogue->resize(400, 300);
        OptionsDialogue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.447, y1:0, x2:0.436, y2:0.994318, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(77, 77, 77, 255));"));
        gridLayout_2 = new QGridLayout(OptionsDialogue);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(69, 69, 69, 69);
        restartGame = new QPushButton(OptionsDialogue);
        restartGame->setObjectName("restartGame");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(restartGame->sizePolicy().hasHeightForWidth());
        restartGame->setSizePolicy(sizePolicy);
        restartGame->setCursor(QCursor(Qt::PointingHandCursor));
        restartGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        verticalLayout->addWidget(restartGame);

        closeCurrentMenu = new QPushButton(OptionsDialogue);
        closeCurrentMenu->setObjectName("closeCurrentMenu");
        sizePolicy.setHeightForWidth(closeCurrentMenu->sizePolicy().hasHeightForWidth());
        closeCurrentMenu->setSizePolicy(sizePolicy);
        closeCurrentMenu->setCursor(QCursor(Qt::PointingHandCursor));
        closeCurrentMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        verticalLayout->addWidget(closeCurrentMenu);

        exitGame = new QPushButton(OptionsDialogue);
        exitGame->setObjectName("exitGame");
        sizePolicy.setHeightForWidth(exitGame->sizePolicy().hasHeightForWidth());
        exitGame->setSizePolicy(sizePolicy);
        exitGame->setCursor(QCursor(Qt::PointingHandCursor));
        exitGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        verticalLayout->addWidget(exitGame);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(OptionsDialogue);

        QMetaObject::connectSlotsByName(OptionsDialogue);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialogue)
    {
        OptionsDialogue->setWindowTitle(QCoreApplication::translate("OptionsDialogue", "Dialog", nullptr));
        restartGame->setText(QCoreApplication::translate("OptionsDialogue", "Restart the game", nullptr));
        closeCurrentMenu->setText(QCoreApplication::translate("OptionsDialogue", "Close current menu", nullptr));
        exitGame->setText(QCoreApplication::translate("OptionsDialogue", "Exit the game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialogue: public Ui_OptionsDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOGUE_H
