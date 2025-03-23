#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int longestSubstringWithoutRepeating(char str[]) {
    int n = strlen(str);
    int maxLength = 0;
    int start = 0;
    int index[256] = {-1};  // Store the last index of each character

    for (int end = 0; end < n; end++) {
        // If the character is repeated, move the start pointer
        if (index[str[end]] >= start) {
            start = index[str[end]] + 1;
        }

        index[str[end]] = end;  // Update the last index of the character

        // Calculate the length of the current window
        maxLength = (maxLength > (end - start + 1)) ? maxLength : (end - start + 1);
    }

    return maxLength;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    int length = longestSubstringWithoutRepeating(str);
    printf("Length of longest substring without repeating characters: %d\n", length);

    return 0;
}
