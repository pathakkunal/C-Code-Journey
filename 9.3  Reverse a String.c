#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap the characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end of the input string
    str[strcspn(str, "\n")] = '\0';

    reverseStr(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
