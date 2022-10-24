#ifndef OPTIONSDIALOGUE_H
#define OPTIONSDIALOGUE_H

#include <QDialog>
#include <QMainWindow>


namespace Ui {
class OptionsDialogue;
}

class OptionsDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsDialogue(QWidget *parent = nullptr);
    ~OptionsDialogue();

signals:
    void transmitToMainWindow();

private slots:

    void on_closeCurrentMenu_clicked();
    void on_restartGame_clicked();
    void on_exitGame_clicked();

private:
    Ui::OptionsDialogue *ui;
    QMainWindow* mw;
};

#endif // OPTIONSDIALOGUE_H
