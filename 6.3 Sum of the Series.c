#include <stdio.h>

// Recursive function to calculate the sum of the series
double seriesSum(int N, int currentTerm) {
    if (currentTerm > N) {
        return 0;  // Base case: return 0 when currentTerm exceeds N
    }
    // If currentTerm is odd, add it; if even, subtract it
    double sign = (currentTerm % 2 == 0) ? -1 : 1;
    return sign * (1.0 / currentTerm) + seriesSum(N, currentTerm + 1);
}

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    double result = seriesSum(N, 1);
    printf("Sum of the series up to N = %d is: %.15lf\n", N, result);
    return 0;
}
