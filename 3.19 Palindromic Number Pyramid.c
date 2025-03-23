#include <stdio.h>

void palindromic_number_pyramid(int rows) {
    // Upper part of the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    // Lower part of the pyramid
    for (int i = rows - 1; i >= 1; i--) {
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the Palindromic Number Pyramid: ");
    scanf("%d", &rows);
    printf("\nPalindromic Number Pyramid:\n");
    palindromic_number_pyramid(rows);
    return 0;
}
