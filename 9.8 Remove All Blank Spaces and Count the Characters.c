#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);
    printf("Number of characters (excluding spaces): %ld\n", strlen(str));

    return 0;
}
