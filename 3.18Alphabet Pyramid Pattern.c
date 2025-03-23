#include <stdio.h>

void alphabet_pyramid_pattern(int rows) {
    for (int i = rows; i >= 1; i--) {
        // Print increasing sequence of characters
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            printf("%c ", ch);
        }
        // Print decreasing sequence of characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the Alphabet Pyramid Pattern: ");
    scanf("%d", &rows);
    printf("\nAlphabet Pyramid Pattern:\n");
    alphabet_pyramid_pattern(rows);
    return 0;
}
