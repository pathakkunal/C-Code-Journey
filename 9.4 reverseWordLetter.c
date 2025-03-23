#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWordLetter(char str[]) {
    int start = 0;
    int length = strlen(str);

    // Loop through the entire string
    for (int i = 0; i <= length; i++) {
        // If we find a space or the end of the string, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            
            // Reverse the word from start to end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            
            // Move start to the next word after the space
            start = i + 1;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end of the input string
    str[strcspn(str, "\n")] = '\0';

    reverseWordLetter(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
