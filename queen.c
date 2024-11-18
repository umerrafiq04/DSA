#include <stdio.h>

#define N 4 // Change this value to solve for different sizes

void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int isSafe(int board[N][N], int row, int col) {
    // Check this column on upper side
    for (int i = 0; i < row; i++) {
        if (board[i][col]) return 0;
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return 0;
    }

    // Check upper diagonal on right side
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) return 0;
    }

    return 1;
}

int solveNQUtil(int board[N][N], int row) {
    if (row >= N) {
        printSolution(board);
        return 1; // Found a solution
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; // Place queen

            if (solveNQUtil(board, row + 1)) {
                return 1; // Return if solution found
            }

            board[row][col] = 0; // Backtrack
        }
    }

    return 0; // No solution found
}

void solveNQ() {
    int board[N][N] = {0}; // Initialize board with 0s

    if (!solveNQUtil(board, 0)) {
        printf("No solution exists\n");
    }
}

int main() {
    solveNQ();
    return 0;
}