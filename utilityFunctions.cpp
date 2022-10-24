#include "board.h"
#include "./ui_board.h"

using std::vector;

int Board::util_update_game(vector<vector<bool>>& p_player_hash,
                vector<vector<bool>>& p_board_hash,
                const Player& p_player,
                uint16_t row,
                uint16_t column)
{

    switch (column + (row * 3)) {
        case 0:
            ui->GButton1->setText(QString(p_player.team));
            break;
        case 1:
            ui->GButton2->setText(QString(p_player.team));
            break;
        case 2:
            ui->GButton3->setText(QString(p_player.team));
            break;
        case 3:
            ui->GButton4->setText(QString(p_player.team));
            break;
        case 4:
            ui->GButton5->setText(QString(p_player.team));
            break;
        case 5:
            ui->GButton6->setText(QString(p_player.team));
            break;
        case 6:
            ui->GButton7->setText(QString(p_player.team));
            break;
        case 7:
            ui->GButton8->setText(QString(p_player.team));
            break;
        case 8:
            ui->GButton9->setText(QString(p_player.team));
            break;
    }

    p_board_hash[row][column] = true;
    p_player_hash[row][column] = true;
    return 0;
}


void Board::util_for_buttonClick (int row, int column) {

    if (!(boardHash[row][column]) && playerOne.turn) {
        util_update_game(playerOneHash, boardHash, playerOne, row, column);
        playerOne.turn = false;
        round++;

        if (!gameLogic(playerOneHash)) {
            emit transmitPlayerOneWin();
            updatePlayerOneScore();
            popupDialogue.show();
        }

        else  {
            if (round >= 9) {
                emit transmitGameTied();
                popupDialogue.show();
            }

            computerAI(playerTwo, playerOneHash, playerTwoHash, boardHash, firstOrSecondRound);
            round++;

            if (!gameLogic(playerTwoHash)) {
                updateAIScore();
                emit transmitPlayerTwoWin();
                popupDialogue.show();
            }
        }
        if (round >= 9) {
            emit transmitGameTied();
            popupDialogue.show();
        }
        playerOne.turn = true;
    }
}


int Board::util_random (uint16_t low, uint16_t high) {

    if (low > high)
        return high;

    return static_cast<int>(low + (std::rand() % (high - low + 1)));
}
