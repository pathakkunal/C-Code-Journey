#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int sum = 0, temp, digit;
    
    // Make a copy of the number to extract digits
    temp = n;

    // Extract each digit and add its cube to sum
    while (temp != 0) {
        digit = temp % 10;  // Get the last digit
        sum += digit * digit * digit;  // Add cube of the digit to sum
        temp /= 10;  // Remove the last digit
    }

    // Check if the sum is equal to the original number
    return (sum == n);
}

int main() {
    printf("Armstrong numbers between 100 and 500 are:\n");
    
    // Iterate over the range from 100 to 500
    for (int i = 100; i < 500; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);  // Print the Armstrong number
        }
    }

    return 0;
}
