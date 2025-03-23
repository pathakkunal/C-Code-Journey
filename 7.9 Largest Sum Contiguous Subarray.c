#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_ending_here = arr[0];
    int max_so_far = arr[0];

    for (int i = 1; i < n; i++) {
        max_ending_here = (arr[i] > max_ending_here + arr[i]) ? arr[i] : max_ending_here + arr[i];
        max_so_far = (max_ending_here > max_so_far) ? max_ending_here : max_so_far;
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArraySum(arr, n);
    printf("The largest sum of contiguous subarray is: %d\n", result);

    return 0;
}
