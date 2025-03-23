#include <stdio.h>

// Recursive function to calculate (a^b) % c
int modularExponentiation(int a, int b, int c)
{
    // Base case: if exponent b is 0, return 1
    if (b == 0)
    {
        return 1;
    }

    // Recursive step: calculate a^(b//2) % c
    int half = modularExponentiation(a, b / 2, c);

    // If b is even, use the result of half and square it, modulo c
    if (b % 2 == 0)
    {
        return (half * half) % c;
    }
    else
    {
        // If b is odd, multiply by a (to account for the missing factor), modulo c
        return (a * half * half) % c;
    }
}

int main()
{
    int a, b, c;
    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Handle negative 'a' by computing (a % c) to ensure it's in the correct range
    a = a % c;

    // Calculate and print the result
    int result = modularExponentiation(a, b, c);
    printf("Result of (%d^%d) %% %d = %d\n", a, b, c, result);

    return 0;
}
