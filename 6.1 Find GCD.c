#include <stdio.h>

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);  // Recursive call
}

int main() {
    int a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
