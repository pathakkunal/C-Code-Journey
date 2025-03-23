#include <stdio.h>

#define MAX 10

void setMatrixZeros(int matrix[MAX][MAX], int m, int n) {
    int row_flag = 0, col_flag = 0;
    
    // Step 1: Check if the first row and first column need to be zeroed
    for (int i = 0; i < n; i++) {
        if (matrix[0][i] == 0) {
            row_flag = 1;
            break;
        }
    }

    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            col_flag = 1;
            break;
        }
    }

    // Step 2: Mark rows and columns that should be zeroed
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;  // Mark row
                matrix[0][j] = 0;  // Mark column
            }
        }
    }

    // Step 3: Zero out cells based on the flags in the first row and first column
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 4: Zero out the first row if needed
    if (row_flag) {
        for (int i = 0; i < n; i++) {
            matrix[0][i] = 0;
        }
    }

    // Step 5: Zero out the first column if needed
    if (col_flag) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[MAX][MAX];

    // Input for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    printMatrix(matrix, m, n);

    // Set the zeros
    setMatrixZeros(matrix, m, n);

    printf("Matrix after setting zeros:\n");
    printMatrix(matrix, m, n);

    return 0;
}
