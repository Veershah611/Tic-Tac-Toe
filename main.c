#include <stdio.h>

void player(char board[3][3], char *name, char symbol);
int check(char board[3][3]);

int main() {
    char board[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };

    char p1[20], p2[20];
    int turn = 1;
    int moves = 0;
    int winner = 0;

    printf("Enter name for Player 1: ");
    scanf("%s", p1);

    printf("Enter name for Player 2: ");
    scanf("%s", p2);

    printf("Enter character present on the board to place your symbol there.\n");

    while (moves < 9 && winner == 0) {
        printf("\Board:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c ", board[i][j]);
            }
            printf("\n\n");
            }
            printf("\n");


        if (turn == 1) {
            player(board, p1, 'X');
        }
        else {
            player(board, p2, 'O');
        }

        winner = check(board);
        if (winner == 0) {
            turn = (turn == 1) ? 2 : 1;
            moves++;
        }
    }

    printf("\nFinal Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
        }
        printf("\n\n");
    }

    if (winner == 1) {
        printf("%s wins\n", p1);
    }
    else if (winner == 2) {
        printf("%s wins\n", p2);
    }
    else {
        printf("It's a draw!\n");
    }

    return 0;
}

void player(char board[3][3], char *name, char symbol) {
    char A;
    int valid = 0;

    while (!valid) {
        printf("%s's turn (%c): ", name, symbol);
        scanf(" %c", &A);

        switch (A) {
            case 'a':
                if (board[0][0] != 'X' && board[0][0] != 'O') {
                    board[0][0] = symbol;
                    valid = 1;
                }
                break;
            case 'b':
                if (board[0][1] != 'X' && board[0][1] != 'O') {
                    board[0][1] = symbol;
                    valid = 1;
                }
                break;
            case 'c':
                if (board[0][2] != 'X' && board[0][2] != 'O') {
                    board[0][2] = symbol;
                    valid = 1;
                }
                break;
            case 'd':
                if (board[1][0] != 'X' && board[1][0] != 'O') {
                    board[1][0] = symbol;
                    valid = 1;
                }
                break;
            case 'e':
                if (board[1][1] != 'X' && board[1][1] != 'O') {
                    board[1][1] = symbol;
                    valid = 1;
                }
                break;
            case 'f':
                if (board[1][2] != 'X' && board[1][2] != 'O') {
                    board[1][2] = symbol;
                    valid = 1;
                }
                break;
            case 'g':
                if (board[2][0] != 'X' && board[2][0] != 'O') {
                    board[2][0] = symbol;
                    valid = 1;
                }
                break;
            case 'h':
                if (board[2][1] != 'X' && board[2][1] != 'O') {
                    board[2][1] = symbol;
                    valid = 1;
                }
                break;
            case 'i':
                if (board[2][2] != 'X' && board[2][2] != 'O') {
                    board[2][2] = symbol;
                    valid = 1;
                }
                break;
            default:
                printf("Invalid input! ");
        }

        if (!valid) {
            printf("That spot is already taken.\n");
        }
    }
}

int check(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return (board[i][0] == 'X') ? 1 : 2;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return (board[0][i] == 'X') ? 1 : 2;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return (board[0][0] == 'X') ? 1 : 2;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return (board[0][2] == 'X') ? 1 : 2;
    }

    return 0;
}
