#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to the square root of num
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("Prime numbers between 1 and 300 are:\n");
    for (int i = 1; i <= 300; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
