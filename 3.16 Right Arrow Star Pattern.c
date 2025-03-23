#include<stdio.h>

void right_arrow(int rows) {
    // Upper part of the arrow
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    // Lower part of the arrow
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the patterns: ");
    scanf("%d", &rows);

    printf("\nRight Arrow Star Pattern:\n");
    right_arrow(rows);

    return 0;
}