#include <stdio.h>
#include <string.h>

void printDuplicates(char str[]) {
    int count[256] = {0};
    int length = strlen(str);

    // Count occurrences of each character
    for (int i = 0; i < length; i++) {
        count[str[i]]++;
    }

    // Print duplicate characters and their count
    for (int i = 0; i < length; i++) {
        if (count[str[i]] > 1) {
            printf("%c, count = %d\n", str[i], count[str[i]]);
            count[str[i]] = 0;  // To avoid reprinting
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    printDuplicates(str);

    return 0;
}
