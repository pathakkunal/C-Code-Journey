#include <stdio.h>

// Function to calculate y based on the value of n
int calculateY(int a, int x, int b, int n) {
    if (n == 1) {
        return (a * x) % b;
    } else if (n == 2) {
        return (a * x * x) + (b * b);
    } else if (n == 3) {
        return a - (b * x);
    } else if (n == 4) {
        return a + (x * b);
    } else {
        printf("Invalid value of n!\n");
        return -1;
    }
}

int main() {
    int a, x, b, n;
    printf("Enter values for a, x, b, and n: ");
    scanf("%d %d %d %d", &a, &x, &b, &n);
    
    int y = calculateY(a, x, b, n);
    printf("The value of y is: %d\n", y);
    
    return 0;
}
