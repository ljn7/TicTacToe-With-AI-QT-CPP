/********************************************************************************
** Form generated from reading UI file 'board.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Board
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *TopLayout;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *ScoreLayout;
    QPushButton *playerScore;
    QPushButton *AIsScore;
    QGridLayout *XOLayout;
    QPushButton *GButton5;
    QPushButton *GButton7;
    QPushButton *GButton2;
    QPushButton *GButton4;
    QPushButton *GButton6;
    QPushButton *GButton9;
    QPushButton *GButton1;
    QPushButton *GButton3;
    QPushButton *GButton8;
    QHBoxLayout *OptionsLayout;
    QPushButton *changeTeamButton;
    QPushButton *Menu;

    void setupUi(QMainWindow *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName("Board");
        Board->setEnabled(true);
        Board->resize(404, 523);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Board->sizePolicy().hasHeightForWidth());
        Board->setSizePolicy(sizePolicy);
        Board->setMinimumSize(QSize(375, 475));
        Board->setSizeIncrement(QSize(0, 0));
        Board->setBaseSize(QSize(0, 0));
        QFont font;
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        Board->setFont(font);
        Board->setWindowOpacity(1.000000000000000);
        Board->setAutoFillBackground(false);
        Board->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.447, y1:0, x2:0.436, y2:0.994318, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(77, 77, 77, 255));"));
        Board->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralwidget = new QWidget(Board);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(350, 475));
        centralwidget->setSizeIncrement(QSize(0, 0));
        centralwidget->setBaseSize(QSize(25, 25));
        QFont font1;
        font1.setKerning(false);
        centralwidget->setFont(font1);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        TopLayout = new QHBoxLayout();
        TopLayout->setSpacing(0);
        TopLayout->setObjectName("TopLayout");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(0, 0, 118);\n"
"  	\n"
"	border-radius: 12px;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        TopLayout->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(0, 0, 118);\n"
"	border-radius: 12px;\n"
"}"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        TopLayout->addWidget(label_6);


        verticalLayout_3->addLayout(TopLayout);

        ScoreLayout = new QHBoxLayout();
        ScoreLayout->setSpacing(0);
        ScoreLayout->setObjectName("ScoreLayout");
        playerScore = new QPushButton(centralwidget);
        playerScore->setObjectName("playerScore");
        playerScore->setEnabled(false);
        sizePolicy.setHeightForWidth(playerScore->sizePolicy().hasHeightForWidth());
        playerScore->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        playerScore->setFont(font3);
        playerScore->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 85, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	border-radius: 21px;\n"
"\n"
"}\n"
""));

        ScoreLayout->addWidget(playerScore);

        AIsScore = new QPushButton(centralwidget);
        AIsScore->setObjectName("AIsScore");
        AIsScore->setEnabled(false);
        sizePolicy.setHeightForWidth(AIsScore->sizePolicy().hasHeightForWidth());
        AIsScore->setSizePolicy(sizePolicy);
        AIsScore->setFont(font3);
        AIsScore->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(0, 85, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	border-radius: 21px;\n"
"\n"
"}\n"
""));

        ScoreLayout->addWidget(AIsScore);


        verticalLayout_3->addLayout(ScoreLayout);

        XOLayout = new QGridLayout();
        XOLayout->setSpacing(0);
        XOLayout->setObjectName("XOLayout");
        XOLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        XOLayout->setContentsMargins(0, -1, 0, -1);
        GButton5 = new QPushButton(centralwidget);
        GButton5->setObjectName("GButton5");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GButton5->sizePolicy().hasHeightForWidth());
        GButton5->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Meiryo UI")});
        font4.setPointSize(69);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferDefault);
        GButton5->setFont(font4);
        GButton5->setCursor(QCursor(Qt::PointingHandCursor));
        GButton5->setLayoutDirection(Qt::LeftToRight);
        GButton5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.505682, stop:0.329609 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton5->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton5, 1, 1, 1, 1);

        GButton7 = new QPushButton(centralwidget);
        GButton7->setObjectName("GButton7");
        sizePolicy2.setHeightForWidth(GButton7->sizePolicy().hasHeightForWidth());
        GButton7->setSizePolicy(sizePolicy2);
        GButton7->setFont(font4);
        GButton7->setCursor(QCursor(Qt::PointingHandCursor));
        GButton7->setLayoutDirection(Qt::LeftToRight);
        GButton7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.328145, y1:0.726, x2:0.960894, y2:0.239, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton7->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton7->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton7, 2, 0, 1, 1);

        GButton2 = new QPushButton(centralwidget);
        GButton2->setObjectName("GButton2");
        sizePolicy2.setHeightForWidth(GButton2->sizePolicy().hasHeightForWidth());
        GButton2->setSizePolicy(sizePolicy2);
        GButton2->setFont(font4);
        GButton2->setCursor(QCursor(Qt::PointingHandCursor));
        GButton2->setLayoutDirection(Qt::LeftToRight);
        GButton2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0.481, y1:0, x2:0.514, y2:0.960227, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton2->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton2, 0, 1, 1, 1);

        GButton4 = new QPushButton(centralwidget);
        GButton4->setObjectName("GButton4");
        sizePolicy2.setHeightForWidth(GButton4->sizePolicy().hasHeightForWidth());
        GButton4->setSizePolicy(sizePolicy2);
        GButton4->setFont(font4);
        GButton4->setCursor(QCursor(Qt::PointingHandCursor));
        GButton4->setLayoutDirection(Qt::LeftToRight);
        GButton4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.222, y1:0.493045, x2:1, y2:0.517682, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton4->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton4, 1, 0, 1, 1);

        GButton6 = new QPushButton(centralwidget);
        GButton6->setObjectName("GButton6");
        sizePolicy2.setHeightForWidth(GButton6->sizePolicy().hasHeightForWidth());
        GButton6->setSizePolicy(sizePolicy2);
        GButton6->setFont(font4);
        GButton6->setCursor(QCursor(Qt::PointingHandCursor));
        GButton6->setLayoutDirection(Qt::LeftToRight);
        GButton6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.791453, y1:0.516, x2:0.0391061, y2:0.511, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton6->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton6->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton6, 1, 2, 1, 1);

        GButton9 = new QPushButton(centralwidget);
        GButton9->setObjectName("GButton9");
        sizePolicy2.setHeightForWidth(GButton9->sizePolicy().hasHeightForWidth());
        GButton9->setSizePolicy(sizePolicy2);
        GButton9->setFont(font4);
        GButton9->setCursor(QCursor(Qt::PointingHandCursor));
        GButton9->setLayoutDirection(Qt::LeftToRight);
        GButton9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.73, y1:0.674909, x2:0, y2:0, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton9->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton9->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton9, 2, 2, 1, 1);

        GButton1 = new QPushButton(centralwidget);
        GButton1->setObjectName("GButton1");
        sizePolicy2.setHeightForWidth(GButton1->sizePolicy().hasHeightForWidth());
        GButton1->setSizePolicy(sizePolicy2);
        GButton1->setFont(font4);
        GButton1->setCursor(QCursor(Qt::PointingHandCursor));
        GButton1->setLayoutDirection(Qt::LeftToRight);
        GButton1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0.479243, y1:0.232, x2:0.916, y2:0.87, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	border: 2px solid;\n"
"	color: rgb(181, 45, 21);\n"
"\n"
"}"));
        GButton1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton1->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton1, 0, 0, 1, 1);

        GButton3 = new QPushButton(centralwidget);
        GButton3->setObjectName("GButton3");
        sizePolicy2.setHeightForWidth(GButton3->sizePolicy().hasHeightForWidth());
        GButton3->setSizePolicy(sizePolicy2);
        GButton3->setFont(font4);
        GButton3->setCursor(QCursor(Qt::PointingHandCursor));
        GButton3->setLayoutDirection(Qt::LeftToRight);
        GButton3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.724, y1:0.294591, x2:0, y2:1, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton3->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton3, 0, 2, 1, 1);

        GButton8 = new QPushButton(centralwidget);
        GButton8->setObjectName("GButton8");
        sizePolicy2.setHeightForWidth(GButton8->sizePolicy().hasHeightForWidth());
        GButton8->setSizePolicy(sizePolicy2);
        GButton8->setFont(font4);
        GButton8->setCursor(QCursor(Qt::PointingHandCursor));
        GButton8->setLayoutDirection(Qt::LeftToRight);
        GButton8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.507, y1:0.828273, x2:0.480615, y2:0, stop:0 rgba(0, 102, 31, 255), stop:1 rgba(82, 255, 99, 255));\n"
"	color: rgb(181, 45, 21);\n"
"	border: 2px solid;\n"
"}"));
        GButton8->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        GButton8->setText(QString::fromUtf8(""));

        XOLayout->addWidget(GButton8, 2, 1, 1, 1);

        XOLayout->setRowStretch(0, 1);
        XOLayout->setRowStretch(1, 1);
        XOLayout->setRowStretch(2, 1);
        XOLayout->setColumnStretch(0, 1);
        XOLayout->setColumnStretch(1, 1);
        XOLayout->setColumnStretch(2, 1);

        verticalLayout_3->addLayout(XOLayout);

        OptionsLayout = new QHBoxLayout();
        OptionsLayout->setSpacing(0);
        OptionsLayout->setObjectName("OptionsLayout");
        changeTeamButton = new QPushButton(centralwidget);
        changeTeamButton->setObjectName("changeTeamButton");
        sizePolicy.setHeightForWidth(changeTeamButton->sizePolicy().hasHeightForWidth());
        changeTeamButton->setSizePolicy(sizePolicy);
        changeTeamButton->setFont(font2);
        changeTeamButton->setAutoFillBackground(false);
        changeTeamButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        OptionsLayout->addWidget(changeTeamButton);

        Menu = new QPushButton(centralwidget);
        Menu->setObjectName("Menu");
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setMinimumSize(QSize(0, 0));
        Menu->setBaseSize(QSize(0, 0));
        Menu->setFont(font2);
        Menu->setCursor(QCursor(Qt::PointingHandCursor));
        Menu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 2px solid;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color: rgb(255, 110, 7);\n"
"	border-radius: 12px;\n"
"}"));

        OptionsLayout->addWidget(Menu);


        verticalLayout_3->addLayout(OptionsLayout);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 6);
        verticalLayout_3->setStretch(3, 1);

        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        Board->setCentralWidget(centralwidget);

        retranslateUi(Board);

        GButton5->setDefault(true);
        GButton7->setDefault(true);
        GButton2->setDefault(true);
        GButton4->setDefault(true);
        GButton6->setDefault(true);
        GButton9->setDefault(true);
        GButton1->setDefault(true);
        GButton3->setDefault(true);
        GButton8->setDefault(true);


        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QMainWindow *Board)
    {
        Board->setWindowTitle(QCoreApplication::translate("Board", "Tic Tac Toe", nullptr));
        label_5->setText(QCoreApplication::translate("Board", "Your score", nullptr));
        label_6->setText(QCoreApplication::translate("Board", "AI's score", nullptr));
        playerScore->setText(QString());
        AIsScore->setText(QString());
        changeTeamButton->setText(QCoreApplication::translate("Board", "Change Team and Reset", nullptr));
        Menu->setText(QCoreApplication::translate("Board", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
