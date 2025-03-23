#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void printSortedMatrix(int matrix[MAX][MAX], int n) {
    int result[MAX * MAX];
    int index = 0;

    // Copy all elements into the result array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[index++] = matrix[i][j];
        }
    }

    // Sort the result array
    qsort(result, n * n, sizeof(int), compare);

    // Print the sorted array
    for (int i = 0; i < n * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[MAX][MAX];

    // Input for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the sorted matrix elements
    printf("Sorted elements in the matrix are:\n");
    printSortedMatrix(matrix, n);

    return 0;
}
