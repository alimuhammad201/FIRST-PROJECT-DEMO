#include <stdio.h>
int main(void)
{
    char board[3][3], mark = '-';
    int i, j, winner = 0;
    printf("Enter board characters (X, O, or -):\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) scanf(" %c", &board[i][j]);
    for (i = 0; i < 3; i++) {
        if (board[i][0] != '-' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            mark = board[i][0]; winner = 1;
        }
        if (board[0][i] != '-' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            mark = board[0][i]; winner = 1;
        }
    }
    if (board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        mark = board[0][0]; winner = 1;
    }
    if (board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        mark = board[0][2]; winner = 1;
    }
    printf("\nBoard:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%c ", board[i][j]);
        printf("\n");
    }
    if (winner) printf("Winner: %c\n", mark);
    else printf("Draw: no winner.\n");
    return 0;
}
