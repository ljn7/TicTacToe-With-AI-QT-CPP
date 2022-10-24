#ifndef POPUP_H
#define POPUP_H

#include <QDialog>

namespace Ui {
class Popup;
}

class Popup : public QDialog
{
    Q_OBJECT

public:
    explicit Popup(QWidget *parent = nullptr);
    ~Popup();

signals:
    void transmitToMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_quitGame_clicked();

    void on_restartButton_clicked();

    void updateTextPlayerOneWin();

    void updateTextPlayerTwoWin();

    void updateTextGameTied();

private:
    Ui::Popup *ui;
};

#endif // POPUP_H
