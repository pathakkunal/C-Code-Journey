#include <stdio.h>
#include <string.h>

void replaceCharacter(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end of the input string
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);  // Read the old character to replace
    getchar();  // Consume the newline character

    printf("Enter the new character: ");
    scanf("%c", &newChar);  // Read the new character

    replaceCharacter(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
