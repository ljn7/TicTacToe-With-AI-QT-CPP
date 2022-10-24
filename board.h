#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <QThread>
#include "optionsdialogue.h"
#include "player.h"
#include "popup.h"
#include "teampick.h"

using std::vector;

QT_BEGIN_NAMESPACE
namespace Ui { class Board; }
QT_END_NAMESPACE

class Board : public QMainWindow
{
    Q_OBJECT

public:
    Board(QWidget *parent = nullptr);
    ~Board();
    void game();
    void closeGame();
    int util_update_game (vector<vector<bool>>& p_player_hash,
                    vector<vector<bool>>& p_board_hash,
                    const Player& p_player,
                    uint16_t row,
                    uint16_t column);
    int computer_ai_util_func(vector<vector<bool>>& p_player1_hash,
                              vector<vector<bool>>& p_player2_hash,
                              vector<vector<bool>>& p_board_hash,
                              const Player& p_player);

    int computer_ai_util_func2(vector<vector<bool>>& p_player_hash,
                               vector<vector<bool>>& p_board_hash,
                               const Player& p_player);

signals:
    void transmitPlayerOneWin();
    void transmitPlayerTwoWin();
    void transmitGameTied();

private slots:
    void on_GButton1_clicked();
    void on_GButton2_clicked();
    void on_GButton3_clicked();
    void on_GButton4_clicked();
    void on_GButton5_clicked();
    void on_GButton6_clicked();
    void on_GButton7_clicked();
    void on_GButton8_clicked();
    void on_GButton9_clicked();
    void on_Menu_clicked();
    void resetTheValues();
    void playerPriority(char team);
    void on_changeTeamButton_clicked();

private:
    Ui::Board *ui;
    vector<vector<bool>> playerOneHash;
    vector<vector<bool>> playerTwoHash;
    vector<vector<bool>> boardHash;
    Player playerOne;
    Player playerTwo;
    OptionsDialogue opDialogue;
    Popup popupDialogue;
    TeamPick teamPickDialogue;
    bool AIRoundFlag;
    bool firstOrSecondRound;
    uint16_t round;

    bool isPlaceEmpty (uint16_t, uint16_t);
    void scoreUpdate ();
    bool gameLogic (std::vector<std::vector<bool>>& p_player_hash);
    void computerAI (const Player& p_player_struct,
                    vector<vector<bool>>& p_p1_hash,
                    vector<vector<bool>>& p_p2_hash,
                    vector<vector<bool>>& p_board_hash,
                    bool& firstOrSecondRound);
    int util_random (uint16_t low, uint16_t high);
    void updatePlayerOneScore();
    void updateAIScore();
    void util_for_buttonClick (int row, int column);


};
#endif // BOARD_H
