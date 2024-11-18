#include <stdio.h>

int arr[6] = {7, 2, 3, 1, 9, 4};

void quick(int l, int h);
int part(int l, int h);

void quick(int l, int h) {
    if (l < h) {
        int j = part(l, h);
        quick(l, j - 1);  // Corrected to j - 1
        quick(j + 1, h);
    }
}

int part(int l, int h) {
    int i = l + 1;  // Start i from the next element after pivot
    int j = h;
    int pivot = arr[l];

    while (i <= j) {  // Changed condition to i <= j
        while (i <= h && arr[i] <= pivot) {
            i++;
        }
        while (j >= l && arr[j] > pivot) {
            j--;
        }
        if (i < j) {  // Swap only if i < j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with arr[j] (the correct position for pivot)
    int temp2 = arr[j];
    arr[j] = arr[l];
    arr[l] = temp2;

    return j;  // Return the pivot index
}

int main() {
    quick(0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}