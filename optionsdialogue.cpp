#include "optionsdialogue.h"

#include "ui_optionsdialogue.h"

OptionsDialogue::OptionsDialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsDialogue)
{
    ui->setupUi(this);
}

OptionsDialogue::~OptionsDialogue()
{
    delete ui;
}

void OptionsDialogue::on_closeCurrentMenu_clicked()
{
    this->hide();
}

void OptionsDialogue::on_exitGame_clicked()
{
    QApplication::instance()->quit();
}


void OptionsDialogue::on_restartGame_clicked()
{
    emit transmitToMainWindow();
    this->hide();
}

