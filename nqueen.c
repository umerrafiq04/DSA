#include <stdio.h>

int place(int k, int i);
int x[4]; // This should be x[10] or some larger number to accommodate larger N
void nqueen(int k, int n);

void nqueen(int k, int n) {
    // Loop from 1 to n (inclusive) to place queens
    for (int i = 1; i <= n; i++) { // Changed from i < n to i <= n
        if (place(k, i)) {
            x[k] = i; // Place queen at row k, column i
            if (k == n) {
                printf("The solution vector is: ");
                for (int j = 1; j <= n; j++) {
                    printf("%d ", x[j]); // Print the solution vector
                }
                printf("\n");
            } else {
                nqueen(k + 1, n); // Recur to place the next queen
            }
        }
    }
}

int place(int k, int i) {
    for (int j = 1; j < k; j++) { // Changed from j < k-1 to j < k
        // Check for column and diagonal conflicts
        if (x[j] == i || x[j] - i == j - k || x[j] - i == k - j) {
            return 0; // Not safe to place queen
        }
    }
    return 1; // Safe to place queen
}

int main() {
    int n = 4; // You can change this to solve for different sizes
    nqueen(1, n); // Start placing queens from row 1
    return 0;
}