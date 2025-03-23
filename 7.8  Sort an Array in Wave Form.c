#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortInWave(int arr[], int n) {
    // Sort the array first
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    // Swap adjacent elements to get the wave form
    for (int i = 1; i < n; i += 2) {
        if (i - 1 >= 0 && arr[i - 1] < arr[i]) {
            swap(&arr[i], &arr[i - 1]);
        }
        if (i + 1 < n && arr[i + 1] < arr[i]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
}

int main() {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortInWave(arr, n);

    printf("Array in wave form: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
