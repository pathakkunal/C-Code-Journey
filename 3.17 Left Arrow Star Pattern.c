#include <stdio.h>

void left_arrow_star_pattern(int rows) {
    // Upper part of the arrow
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the arrow
    for (int i = 2; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the Left Arrow Star Pattern: ");
    scanf("%d", &rows);
    printf("\nLeft Arrow Star Pattern:\n");
    left_arrow_star_pattern(rows);
    return 0;
}
