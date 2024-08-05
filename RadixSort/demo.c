#include <stdio.h>

void show(int x[], int n, int div, int min) {
    int a[10] = {0};
    int i;
    int y[n];

    for (i = 0; i < n; i++) {
        a[(x[i] - min) / div % 10]++;
    }

    for (i = 1; i < 10; i++) {
        a[i] += a[i - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        y[--a[(x[i] - min) / div % 10]] = x[i];
    }

    for (i = 0; i < n; i++) {
        x[i] = y[i];
    }
}

void rSort(int x[], int n) {
    int i;
    int max = x[0];
    int min = x[0];

    for (i = 1; i < n; i++) {
        if (min > x[i])
            min = x[i];
    }

    for (i = 1; i < n; i++) {
        if (max < x[i])
            max = x[i];
    }

    for (i = 1; (max - min) / i > 0; i *= 10) {
        show(x, n, i, min);
    }
}

int main() {
    int x[] = {329, 457, -657, -839, 436, 720, 355};
    int i;
    int n = sizeof(x) / sizeof(x[0]);
    rSort(x, n);
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}
