#include "board.h"
#include "./ui_board.h"


Board::Board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Board)
{
    ui->setupUi(this);

    opDialogue.setModal(true);
    popupDialogue.setModal(true);
    teamPickDialogue.setModal(true);

    playerOne.score = 0;
    playerTwo.score = 0;
    playerOne.turn = false;
    this->ui->playerScore->setText(QString::number(playerOne.score));
    this->ui->AIsScore->setText(QString::number(playerTwo.score));
    resetTheValues();

    connect(&popupDialogue, SIGNAL(transmitToMainWindow()), this, SLOT(resetTheValues()));
    connect(&opDialogue, SIGNAL(transmitToMainWindow()), this, SLOT(resetTheValues()));
    connect(this, SIGNAL(transmitPlayerOneWin()), &popupDialogue, SLOT(updateTextPlayerOneWin()));
    connect(this, SIGNAL(transmitPlayerTwoWin()), &popupDialogue, SLOT(updateTextPlayerTwoWin()));
    connect(this, SIGNAL(transmitGameTied()), &popupDialogue, SLOT(updateTextGameTied()));
    connect(&teamPickDialogue, SIGNAL(transmitToBoard(char)), this, SLOT(playerPriority(char)));

    teamPickDialogue.show();

}

Board::~Board()
{
    delete ui;
}

void Board::game() {

}


void Board::on_GButton1_clicked()
{
    util_for_buttonClick (0, 0);
}
void Board::on_GButton2_clicked()
{
    util_for_buttonClick (0, 1);
}
void Board::on_GButton3_clicked()
{
    util_for_buttonClick (0, 2);
}
void Board::on_GButton4_clicked()
{
    util_for_buttonClick (1, 0);
}
void Board::on_GButton5_clicked()
{
    util_for_buttonClick (1, 1);
}
void Board::on_GButton6_clicked()
{
    util_for_buttonClick (1, 2);
}
void Board::on_GButton7_clicked()
{
    util_for_buttonClick (2, 0);
}
void Board::on_GButton8_clicked()
{
    util_for_buttonClick (2, 1);
}
void Board::on_GButton9_clicked()
{
    util_for_buttonClick (2, 2);
}

void Board::on_Menu_clicked()
{
    opDialogue.show();
}


void Board::resetTheValues() {

    round = 0;
    firstOrSecondRound = true;
    playerOneHash.clear();
    playerTwoHash.clear();
    boardHash.clear();

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; j++) {
            vector<bool> temp = {false, false, false};
            playerOneHash.push_back(temp);
            playerTwoHash.push_back(temp);
            boardHash.push_back(temp);
        }
    }

    ui->GButton1->setText(QString(""));
    ui->GButton2->setText(QString(""));
    ui->GButton3->setText(QString(""));
    ui->GButton4->setText(QString(""));
    ui->GButton5->setText(QString(""));
    ui->GButton6->setText(QString(""));
    ui->GButton7->setText(QString(""));
    ui->GButton8->setText(QString(""));
    ui->GButton9->setText(QString(""));

}

void Board::updatePlayerOneScore() {
    ++playerOne.score;
    ui->playerScore->setText(QString::number(playerOne.score));
}

void Board::updateAIScore() {
    ++playerTwo.score;
    ui->AIsScore->setText(QString::number(playerTwo.score));
}

void Board::playerPriority(char team) {

    playerOne.team = team;

    if (team == 'X') {
        playerTwo.team = 'O';
        playerOne.turn = true;
        return;
    }

    playerTwo.team = 'X';

    computerAI(playerTwo, playerOneHash, playerTwoHash, boardHash, firstOrSecondRound);
    round++;
    playerOne.turn = true;

}



void Board::on_changeTeamButton_clicked()
{
    resetTheValues();
    teamPickDialogue.show();
}

