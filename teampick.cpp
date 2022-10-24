#include "teampick.h"
#include "ui_teampick.h"

TeamPick::TeamPick(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamPick)
{
    ui->setupUi(this);

    #if !defined(Q_OS_ANDROID)
        this->setWindowFlags(Qt::SubWindow);
    #endif
}

TeamPick::~TeamPick()
{
    delete ui;
}

void TeamPick::on_ButtonX_clicked()
{
    emit transmitToBoard('X');
    this->hide();
}


void TeamPick::on_ButtonO_clicked()
{
    emit transmitToBoard('O');
    this->hide();
}

