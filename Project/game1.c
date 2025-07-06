#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void initializeBoard(char board[3][3]);
void displayBoard(char board[3][3]);
int checkWinner(char board[3][3]);
int isBoardFull(char board[3][3]);
void playTicTacToe();

int main() {
    char playAgain;

    printf("====================================\n");
    printf("       Welcome to Tic-Tac-Toe!       \n");
    printf("====================================\n");

    do {
        playTicTacToe();
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThank you for playing! Goodbye!\n");
    return 0;
}

// Function to initialize the board
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the board
void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check for a winner
int checkWinner(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        // Check rows and columns
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

// Function to check if the board is full
int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

// Function to play the Tic-Tac-Toe game
void playTicTacToe() {
    char board[3][3];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    while (1) {
        displayBoard(board);
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

        if (checkWinner(board)) {
            displayBoard(board);
            printf("Congratulations! Player %c wins!\n", currentPlayer);
            return;
        }

        if (isBoardFull(board)) {
            displayBoard(board);
            printf("It's a draw!\n");
            return;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}
