#include <stdio.h>
#include <string.h>

// Function to perform pattern searching using naive algorithm
void naivePatternSearch(char *text, char *pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    // Loop through each position in the text where the pattern can fit
    for (int i = 0; i <= n - m; i++) {
        int j;
        
        // Check for the pattern match starting at text[i]
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break; // No match, break out of the loop
            }
        }

        // If we checked all characters of the pattern and it matched
        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";

    naivePatternSearch(text, pattern);

    return 0;
}
