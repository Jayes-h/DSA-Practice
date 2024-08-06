#include <stdio.h>
#include <stdbool.h>

void display(int x[4][4], int n);
bool isValid(int x[4][4], int r, int c);
bool show(int x[4][4], int r);

bool isValid(int x[4][4], int r, int c) {
    int i, j;

    // Check column
    for (i = r; i >= 0; i--) {
        if (x[i][c]) return false;
    }

    // Check upper left diagonal
    for (i = r, j = c; i >= 0 && j >= 0; i--, j--) {
        if (x[i][j]) return false;
    }

    // Check upper right diagonal
    for (i = r, j = c; i >= 0 && j < 4; i--, j++) {
        if (x[i][j]) return false;
    }

    return true;
}

bool show(int x[4][4], int r) {
    if (r >= 4) return true;

    int i;
    for (i = 0; i < 4; i++) {
        if (isValid(x, r, i)) {
            x[r][i] = 1;
            display(x, 4);

            if (show(x, r + 1)) return true;

            x[r][i] = 0;  // Backtrack
            display(x, 4);
        }
    }

    return false;
}

void display(int x[4][4], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void main() {
    int x[4][4] = {0};
    int n = 4;
    show(x, 0);
    display(x, n);
}
