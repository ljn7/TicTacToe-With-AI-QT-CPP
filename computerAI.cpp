#include "board.h"
using std::vector;

void Board::computerAI(const Player& p_player_struct,
                 vector<vector<bool>>& p_p1_hash,
                 vector<vector<bool>>& p_p2_hash,
                 vector<vector<bool>>& p_board_hash,
                 bool& firstOrSecondRound)
{
    short int row;
    short int column;

    if (firstOrSecondRound) {
        std::srand (std::time (0));

        if (!p_board_hash[1][1])
            row = column = 1;

        else {
            do {
            column = util_random(0, 2);
                row = util_random(0, 2);
            } while (p_board_hash[row][column]);
        }

        util_update_game(p_p2_hash, p_board_hash, p_player_struct, row, column);
        firstOrSecondRound = false;
        return;
    }

    if (!computer_ai_util_func(p_p2_hash, p_p2_hash, p_board_hash, p_player_struct))
        return;

    if (!computer_ai_util_func(p_p1_hash, p_p2_hash, p_board_hash, p_player_struct))
        return;

    if (!computer_ai_util_func2(p_p2_hash, p_board_hash, p_player_struct))
        return;

    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            if (!p_board_hash[i][j]) {
                util_update_game(p_p2_hash, p_board_hash, p_player_struct, i, j);
                return;
            }

        }


}

//first utility function for computer_ai()
int Board::computer_ai_util_func(vector<vector<bool>>& p_player1_hash,
                          vector<vector<bool>>& p_player2_hash,
                          vector<vector<bool>>& p_board_hash,
                          const Player& p_player)
{

    if (p_player1_hash[0][0]) {
        if (p_player1_hash[0][1] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[1][0] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[1][1] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[0][2] && !p_board_hash[0][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 1);
        else if (p_player1_hash[2][2] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
        else if (p_player1_hash[2][0] && !p_board_hash[1][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 0);
    }
    //counterpick for board[0][1]
    if (p_player1_hash[0][1]) {
        if (p_player1_hash[0][0] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[0][2] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[1][1] && !p_board_hash[2][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 1);
        else if (p_player1_hash[2][1] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
    }
    //counterpick for board[0][2]
    if (p_player1_hash[0][2]) {
        if (p_player1_hash[0][1] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[0][0] && !p_board_hash[0][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 1);
        else if (p_player1_hash[1][1] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[1][2] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[2][2] && !p_board_hash[1][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 2);
        else if (p_player1_hash[2][0] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
    }
    //counterpick for board[1][0]
    if (p_player1_hash[1][0]) {
        if (p_player1_hash[0][0] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[2][0] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[1][1] && !p_board_hash[1][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 2);
        else if (p_player1_hash[1][2] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
    }
    //counter pick for board[1][1]
    if (p_player1_hash[1][1]) {
        if (p_player1_hash[0][0] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[2][2] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[0][1] && !p_board_hash[2][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 1);
        else if (p_player1_hash[2][1] && !p_board_hash[0][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 1);
        else if (p_player1_hash[0][2] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[2][0] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[1][0] && !p_board_hash[1][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 2);
        else if (p_player1_hash[1][2] && !p_board_hash[1][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 0);
    }
    //counterpick for board[1][2]
    if (p_player1_hash[1][2]) {
        if (p_player1_hash[0][2] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[2][2] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[1][0] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
        else if (p_player1_hash[1][1] && !p_board_hash[1][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 0);
    }
    //counterpick for board[2][0]
    if (p_player1_hash[2][0]) {
        if (p_player1_hash[1][0] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[0][0] && !p_board_hash[1][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 0);
        else if (p_player1_hash[1][1] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[0][2] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
        else if (p_player1_hash[2][1] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[2][2] && !p_board_hash[2][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 1);
    }
    //counterpick for board[2][1]
    if (p_player1_hash[2][1]) {
        if (p_player1_hash[2][0] && !p_board_hash[2][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 2);
        else if (p_player1_hash[2][2] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[1][1] && !p_board_hash[0][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 1);
        else if (p_player1_hash[0][1] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
    }
    //counterpick for board[2][2]
    if (p_player1_hash[2][2]) {
        if (p_player1_hash[2][1] && !p_board_hash[2][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 0);
        else if (p_player1_hash[2][0] && !p_board_hash[2][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 2, 1);
        else if (p_player1_hash[1][1] && !p_board_hash[0][0])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 0);
        else if (p_player1_hash[0][0] && !p_board_hash[1][1])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 1);
        else if (p_player1_hash[1][2] && !p_board_hash[0][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 0, 2);
        else if (p_player1_hash[0][2] && !p_board_hash[1][2])
            return util_update_game(p_player2_hash, p_board_hash, p_player, 1, 2);
    }
    return 1;
}

int Board::computer_ai_util_func2(vector<vector<bool>>& p_player_hash,
                           vector<vector<bool>>& p_board_hash,
                           const Player& p_player) {

    if (p_player_hash[0][0]) {

        if (!p_board_hash[0][1] && !p_board_hash[0][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 1);
        if (!p_board_hash[1][0] && !p_board_hash[2][0])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 0);
        if (!p_board_hash[1][1] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 1);
        if (!p_board_hash[1][1] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 1);
    }

    if (p_player_hash[0][1]) {

        if (!p_board_hash[0][0] && !p_board_hash[0][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[1][1] && !p_board_hash[2][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 1);
    }

    if (p_player_hash[0][2]) {

        if (!p_board_hash[0][0] && !p_board_hash[0][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[1][1] && !p_board_hash[2][0])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 1);
        if (!p_board_hash[1][2] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 2);
    }

    if (p_player_hash[1][0]) {

        if (!p_board_hash[0][0] && !p_board_hash[2][0])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[1][1] && !p_board_hash[1][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 1);
    }

    if (p_player_hash[1][1]) {

        if (!p_board_hash[0][0] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[0][1] && !p_board_hash[2][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 1);
        if (!p_board_hash[0][2] && !p_board_hash[2][0])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 2);
        if (!p_board_hash[1][0] && !p_board_hash[1][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 0);
    }

    if (p_player_hash[1][2]) {

        if (!p_board_hash[0][2] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 2);
        if (!p_board_hash[1][0] && !p_board_hash[1][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 0);

    }

    if (p_player_hash[2][0]) {

        if (!p_board_hash[0][0] && !p_board_hash[1][0])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[0][2] && !p_board_hash[1][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 2);
        if (!p_board_hash[2][1] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 2, 1);

    }

    if (p_player_hash[2][1]) {

        if (!p_board_hash[0][1] && !p_board_hash[1][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 1);
        if (!p_board_hash[2][0] && !p_board_hash[2][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 2, 0);

    }

    if (p_player_hash[2][2]) {

        if (!p_board_hash[0][0] && !p_board_hash[1][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 0, 0);
        if (!p_board_hash[0][2] && !p_board_hash[1][2])
            return util_update_game(p_player_hash, p_board_hash, p_player, 1, 2);
        if (!p_board_hash[2][0] && !p_board_hash[2][1])
            return util_update_game(p_player_hash, p_board_hash, p_player, 2, 1);

    }

    return 1;
}

