#include <stdio.h>
#include <string.h>

// Function to swap characters at positions i and j in string str
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations of string str
void permute(char* str, int l, int r) {
    if (l == r) {
        printf("%s ", str);  // Print the current permutation
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));  // Swap the current character with the next character
            permute(str, l + 1, r);  // Recursively permute the remaining substring
            swap((str + l), (str + i));  // Backtrack to restore the string
        }
    }
}

int main() {
    char str[100];

    // Take input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end of input if it exists
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);
    printf("The permutations of the string are: \n");
    permute(str, 0, n - 1);

    return 0;
}
