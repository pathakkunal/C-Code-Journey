#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    int newSize = 0;
    for (int i = 0; i < *n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *n = newSize;
}

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 1, 7, 8};

    removeDuplicates(arr, &n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
