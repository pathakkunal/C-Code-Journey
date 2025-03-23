#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the text matches the pattern
bool isMatch(char* text, char* pattern) {
    int m = strlen(text);
    int n = strlen(pattern);

    // Create a DP table to store results of subproblems
    bool dp[m+1][n+1];

    // Initialize DP table
    dp[0][0] = true; // Empty text and empty pattern match

    // Handle cases where the pattern contains '*' at the start
    for (int j = 1; j <= n; j++) {
        if (pattern[j-1] == '*') {
            dp[0][j] = dp[0][j-1]; // '*' can match an empty sequence
        } else {
            dp[0][j] = false; // If pattern starts with anything other than '*', it can't match empty text
        }
    }

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (pattern[j-1] == text[i-1] || pattern[j-1] == '?') {
                dp[i][j] = dp[i-1][j-1]; // Match a single character or '?'
            } else if (pattern[j-1] == '*') {
                dp[i][j] = dp[i-1][j] || dp[i][j-1]; // '*' can match empty or multiple characters
            } else {
                dp[i][j] = false;
            }
        }
    }

    // Return the result in the bottom-right cell
    return dp[m][n];
}

int main() {
    char text[] = "baaabab";
    char pattern[] = "*****ba*****ab";

    if (isMatch(text, pattern)) {
        printf("Pattern matches the text.\n");
    } else {
        printf("Pattern does not match the text.\n");
    }

    return 0;
}
