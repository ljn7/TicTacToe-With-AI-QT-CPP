#ifndef TEAMPICK_H
#define TEAMPICK_H

#include <QDialog>

namespace Ui {
class TeamPick;
}

class TeamPick : public QDialog
{
    Q_OBJECT

public:
    explicit TeamPick(QWidget *parent = nullptr);
    ~TeamPick();

signals:
    void transmitToBoard(char value);

private slots:
    void on_ButtonX_clicked();

    void on_ButtonO_clicked();

private:
    Ui::TeamPick *ui;
};

#endif // TEAMPICK_H
