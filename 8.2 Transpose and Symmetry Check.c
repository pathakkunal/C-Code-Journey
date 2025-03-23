#include <stdio.h>

#define MAX 10

int isSymmetric(int matrix[MAX][MAX], int n) {
    // Check for symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

void transposeMatrix(int matrix[MAX][MAX], int transpose[MAX][MAX], int n) {
    // Find the transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[MAX][MAX], transpose[MAX][MAX];

    // Input for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose
    transposeMatrix(matrix, transpose, n);

    // Check if matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
