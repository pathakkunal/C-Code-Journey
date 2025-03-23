#include <stdio.h>

// Function to calculate the sum of Fibonacci series up to N
int fibonacciSum(int N) {
    int a = 0, b = 1, sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a;
        int next = a + b;
        a = b;
        b = next;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Sum of the first %d Fibonacci numbers is: %d\n", N, fibonacciSum(N));
    return 0;
}
