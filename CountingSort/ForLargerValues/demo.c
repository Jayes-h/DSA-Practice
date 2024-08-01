#include <stdio.h>

void show(int x[], int n) {
    int i;
    int y[n];
    int max = x[0];

    // Find the maximum element in the array
    for(i = 1; i < n; i++) {
        if(max < x[i])
            max = x[i];
    }
    max++;  // Increment max to handle zero-based indexing

    // Initialize count array
    int a[max];
    for(i = 0; i < max; i++) {
        a[i] = 0;
    }

    // Store the count of each element
    for(i = 0; i < n; i++) {
        a[x[i]]++;
    }

    // Change count[i] so that it now contains actual
    // position of this element in output array
    for(i = 1; i < max; i++) {
        a[i] += a[i - 1];
    }

    // Build the output array
    for(i = n - 1; i >= 0; i--) {
        y[a[x[i]] - 1] = x[i];
        a[x[i]]--;
    }

    // Copy the output array to x[], so that x[] now
    // contains sorted elements
    for(i = 0; i < n; i++) {
        x[i] = y[i];
    }
}

int main() {
    int x[] = {2, 7, 7, 15, 30, 60, 400, 9};
    int n = sizeof(x) / sizeof(x[0]);
    show(x, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}
