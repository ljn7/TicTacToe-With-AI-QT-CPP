#include "popup.h"
#include "ui_popup.h"

Popup::Popup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Popup)
{
    ui->setupUi(this);
}

Popup::~Popup()
{
    delete ui;
}

void Popup::on_pushButton_clicked()
{
    emit transmitToMainWindow();
    this->hide();
}


void Popup::on_quitGame_clicked()
{
    QApplication::quit();
}


void Popup::on_restartButton_clicked()
{
    emit transmitToMainWindow();
    this->hide();
}

void Popup::updateTextPlayerOneWin() {
    ui->gameStatusLabel->setText("You won the game!");
}

void Popup::updateTextPlayerTwoWin() {
    ui->gameStatusLabel->setText("AI won the game!");
}

void Popup::updateTextGameTied() {
    ui->gameStatusLabel->setText("Game Tied!");
}
