#include <stdio.h>

// Recursive function to find the sum of digits
int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);  // Recursive call
}

int main() {
    int num;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
    return 0;
}
