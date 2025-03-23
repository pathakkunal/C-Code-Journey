#include<stdio.h>

void hollow_diamond(int rows) {
    // Upper part of the diamond
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // Lower part of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the patterns: ");
    scanf("%d", &rows);


    printf("\nHollow Diamond Star Pattern:\n");
    hollow_diamond(rows);

    return 0;
}