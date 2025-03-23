#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    FILE *primeFile;

    // Open Prime.txt for writing
    primeFile = fopen("Prime.txt", "w");
    if (primeFile == NULL) {
        printf("Error opening Prime.txt.\n");
        return 1;
    }

    // Loop through numbers from 1 to 100 and check for prime numbers
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            fprintf(primeFile, "%d\n", i);
        }
    }

    // Close the file
    fclose(primeFile);

    printf("Prime numbers between 1 and 100 have been written to Prime.txt.\n");

    return 0;
}
