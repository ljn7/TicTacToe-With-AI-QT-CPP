/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Popup
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *restartButton;
    QLabel *gameStatusLabel;
    QPushButton *quitGame;

    void setupUi(QDialog *Popup)
    {
        if (Popup->objectName().isEmpty())
            Popup->setObjectName("Popup");
        Popup->resize(446, 159);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Popup->sizePolicy().hasHeightForWidth());
        Popup->setSizePolicy(sizePolicy);
        Popup->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.447, y1:0, x2:0.436, y2:0.994318, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(77, 77, 77, 255));"));
        gridLayout = new QGridLayout(Popup);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        restartButton = new QPushButton(Popup);
        restartButton->setObjectName("restartButton");
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setCursor(QCursor(Qt::PointingHandCursor));
        restartButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        gridLayout_2->addWidget(restartButton, 2, 0, 1, 1);

        gameStatusLabel = new QLabel(Popup);
        gameStatusLabel->setObjectName("gameStatusLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(gameStatusLabel->sizePolicy().hasHeightForWidth());
        gameStatusLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        gameStatusLabel->setFont(font);
        gameStatusLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        gameStatusLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(gameStatusLabel, 1, 0, 1, 2);

        quitGame = new QPushButton(Popup);
        quitGame->setObjectName("quitGame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quitGame->sizePolicy().hasHeightForWidth());
        quitGame->setSizePolicy(sizePolicy2);
        quitGame->setCursor(QCursor(Qt::PointingHandCursor));
        quitGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        gridLayout_2->addWidget(quitGame, 2, 1, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 1);
        gridLayout_2->setRowMinimumHeight(0, 1);
        gridLayout_2->setRowMinimumHeight(1, 1);
        gridLayout_2->setRowMinimumHeight(2, 1);

        gridLayout->addLayout(gridLayout_2, 1, 0, 2, 1);


        retranslateUi(Popup);

        QMetaObject::connectSlotsByName(Popup);
    } // setupUi

    void retranslateUi(QDialog *Popup)
    {
        Popup->setWindowTitle(QCoreApplication::translate("Popup", "Dialog", nullptr));
        restartButton->setText(QCoreApplication::translate("Popup", "Restart", nullptr));
        gameStatusLabel->setText(QString());
        quitGame->setText(QCoreApplication::translate("Popup", "Quit the game.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Popup: public Ui_Popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
