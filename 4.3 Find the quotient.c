#include <stdio.h>

int divide(int a, int b) {
    // Handle case where b is 0 to avoid division by zero error
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }

    // Track the sign of the result
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;

    // Make both a and b positive for ease of calculation
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    int quotient = 0;

    // Subtract b from a until a becomes smaller than b
    while (a >= b) {
        a -= b;
        quotient++;
    }

    // Apply the sign to the quotient
    return sign * quotient;
}

int main() {
    int a = 10, b = 3;
    printf("Quotient of %d / %d = %d\n", a, b, divide(a, b));  // Output: 3

    a = 43, b = -8;
    printf("Quotient of %d / %d = %d\n", a, b, divide(a, b));  // Output: -5

    return 0;
}
