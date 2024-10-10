#include<stdio.h>

void sort(int l, int h);
void merge(int l, int mid, int h);

int arr[100]; // Example array, you can replace it with dynamic input if needed.

void sort(int l, int h) {
    if(l < h) {
        int mid = (l + h) / 2;
        sort(l, mid);      // Sort the left half
        sort(mid + 1, h);  // Sort the right half
        merge(l, mid, h);  // Merge the sorted halves
    }
}

void merge(int l, int mid, int h) {
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = h - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0; // Initial index of the first subarray
    j = 0; // Initial index of the second subarray
    k = l; // Initial index of the merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(0, n-1); // Call the sort function

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
