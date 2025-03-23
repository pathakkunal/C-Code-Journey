#include <stdio.h>

void segregate0sAnd1s(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        if (arr[low] == 0) {
            low++;
        } else if (arr[high] == 1) {
            high--;
        } else {
            // Swap arr[low] and arr[high]
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0sAnd1s(arr, n);

    printf("Array after segregation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
