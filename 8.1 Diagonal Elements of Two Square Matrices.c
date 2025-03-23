#include <stdio.h>

#define MAX 10

void addDiagonals(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int n) {
    int diagonalSum = 0;
    
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix1[i][i] + matrix2[i][i];
    }
    
    printf("Sum of diagonal elements from both matrices: %d\n", diagonalSum);
}

int main() {
    int n;
    printf("Enter the size of the square matrices (n x n): ");
    scanf("%d", &n);

    int matrix1[MAX][MAX], matrix2[MAX][MAX];

    // Input for the first matrix
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add diagonal elements
    addDiagonals(matrix1, matrix2, n);

    return 0;
}
