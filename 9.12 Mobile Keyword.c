#include <stdio.h>
#include <string.h>

#define MAX_COMBINATIONS 1000  // Set the max combinations, adjust as necessary

// Mapping of digits to characters as per telephone keypad
const char* digit_to_letters[] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

// Function to generate letter combinations
void generate_combinations(char* digits, int index, char* current_combination, char combinations[][MAX_COMBINATIONS], int* count) {
    // If the current combination is complete, add it to the result
    if (digits[index] == '\0') {
        strcpy(combinations[*count], current_combination);
        (*count)++;
        return;
    }

    // Get the corresponding letters for the current digit
    int digit = digits[index] - '0';
    const char* letters = digit_to_letters[digit];

    // Try all possible letters for this digit
    for (int i = 0; letters[i] != '\0'; i++) {
        // Add the letter to the current combination and recurse
        current_combination[index] = letters[i];
        generate_combinations(digits, index + 1, current_combination, combinations, count);
    }
}

// Main function
int main() {
    char digits[20];
    printf("Enter a string of digits (from 2-9): ");
    scanf("%s", digits);

    int len = strlen(digits);
    if (len == 0) {
        printf("No digits provided!\n");
        return 0;
    }

    // Array to store all the combinations
    char combinations[MAX_COMBINATIONS][MAX_COMBINATIONS];
    char current_combination[len + 1];
    current_combination[len] = '\0';

    int count = 0;
    generate_combinations(digits, 0, current_combination, combinations, &count);

    // Print all combinations
    printf("Possible letter combinations are:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", combinations[i]);
    }

    return 0;
}





// 2	"abc"
// 3	"def"
// 4	"ghi"
// 5	"jkl"
// 6	"mno"
// 7	"pqrs"
// 8	"tuv"
// 9	"wxyz"