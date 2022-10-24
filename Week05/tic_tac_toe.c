// Nicole, Week 5 22T3
// Tutorial demo code for 2D arrays

#include <stdio.h>
#include <string.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board) == 1) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board) == 1) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
    
}

// 5 in a row wins
// returns 1 if player won
// returns 0 if player lost
// player = 'O' or 'X' ,    SIZE = 5
int did_player_win(char player, char board[SIZE][SIZE]) {

    // check horizontal + vertical
    int h_row = 0;
    int v_row = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == player) {
                h_row++;
            }
            if (board[i][j] == player) {
                v_row++;
            }
        }
        // check if the line you just looped has 5 in a row
        if (h_row == 5 || v_row == 5) {
            return TRUE;
        }
        // no win, so reset the counters to 0
        h_row = 0;
        v_row = 0;
    }

    // check diagonal left and right
    int dl_row = 0;
    int dr_row = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j && board[i][j] == player) {
                dl_row++;
            }
            if (i + j + 1 == SIZE && board[i][j] == player) {
                dr_row++;
            }
        }
    }
    // check if either diagonal has 5 in a row
    if (dl_row == 5 || dr_row == 5) {
        return TRUE;
    }

    return FALSE;
}