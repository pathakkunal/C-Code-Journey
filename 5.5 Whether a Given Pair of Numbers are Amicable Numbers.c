#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 1;  // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

// Function to check if two numbers are amicable
int areAmicable(int a, int b) {
    return (sumOfDivisors(a) == b && sumOfDivisors(b) == a);
}

int main() {
    int a, b;
    printf("Enter two numbers to check if they are amicable: ");
    scanf("%d %d", &a, &b);

    if (areAmicable(a, b)) {
        printf("%d and %d are amicable numbers.\n", a, b);
    } else {
        printf("%d and %d are not amicable numbers.\n", a, b);
    }

    return 0;
}
