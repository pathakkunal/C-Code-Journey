#include <stdio.h>
#include <string.h>

void reverseWord(char str[]) {
    int start = 0, end = 0, length = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // Reverse the word between start and end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;  // Move start to the next word
        }
    }

    // Reverse the entire string to get the final result
    start = 0;
    end = length - 1;
    while (start < end) {
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

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    reverseWord(str);

    printf("Reversed words string: %s\n", str);
    return 0;
}
