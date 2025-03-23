#include <stdio.h>
#include <stdlib.h>

int chocolateDistribution(int A[], int N, int M) {
    // If there are no packets or less than M packets
    if (M == 0 || N == 0) {
        return 0;
    }

    // If number of packets is less than the number of students
    if (N < M) {
        return -1;  // Not enough packets
    }

    // Sort the array of chocolates
    qsort(A, N, sizeof(int), compare);

    // Initialize result to a large number
    int minDiff = A[M - 1] - A[0];

    // Traverse through the array and find the subarray of size M
    for (int i = 1; i <= N - M; i++) {
        int diff = A[i + M - 1] - A[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

// Compare function for qsort to sort the array
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int A[] = {12, 4, 7, 9, 2, 23, 25, 41, 40, 40, 28, 42, 30, 40, 40};
    int N = sizeof(A) / sizeof(A[0]);
    int M = 7;

    int result = chocolateDistribution(A, N, M);
    printf("Minimum difference is %d\n", result);

    return 0;
}





// Explanation:
// Sorting: We use the qsort() function to sort the chocolate packets array. Sorting helps in ensuring that the packets with the smallest differences are adjacent to each other.
// Sliding Window: We loop over the array with a sliding window of size M and calculate the difference between the largest and smallest elements in that window.
// Minimizing the Difference: The smallest difference across all sliding windows is stored in minDiff.
// Edge Cases: We handle cases where:
// There are fewer packets than students (N < M).
// No packets are available or zero students (M == 0 or N == 0).