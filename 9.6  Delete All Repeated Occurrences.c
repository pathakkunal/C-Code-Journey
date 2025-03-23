#include <stdio.h>
#include <string.h>

void deleteRepeatedChars(char str[]) {
    int i, j, k;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                // Shift characters to the left
                for (k = j; k < length; k++) {
                    str[k] = str[k + 1];
                }
                length--;  // Decrease the length of the string
                j--;  // Stay at the same index to check the next character
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    deleteRepeatedChars(str);

    printf("String after removing repeated characters: %s\n", str);
    return 0;
}
