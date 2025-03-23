#include <stdio.h>
#include <stdlib.h>

void printSlidingWindowMax(int arr[], int n, int k) {
    if (n == 0 || k == 0) return;
    
    // Create a deque to store indices
    int* deque = (int*)malloc(k * sizeof(int));
    int front = 0, back = 0;

    for (int i = 0; i < n; i++) {
        // Remove elements outside the current window
        while (front < back && deque[front] <= i - k) {
            front++;
        }

        // Remove elements smaller than the current element
        while (front < back && arr[deque[back - 1]] <= arr[i]) {
            back--;
        }

        // Add current element index to deque
        deque[back++] = i;

        // Print the maximum element of the current window
        if (i >= k - 1) {
            printf("%d ", arr[deque[front]]);
        }
    }

    printf("\n");

    // Free the allocated memory
    free(deque);
}

int main() {
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    printf("Max sliding window for arr1: ");
    printSlidingWindowMax(arr1, n1, k1);

    int arr2[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("Max sliding window for arr2: ");
    printSlidingWindowMax(arr2, n2, k2);

    return 0;
}
