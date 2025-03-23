#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter the range: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Harmonic Sequence is: ");

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("1/%d", i);
            printf("1/%d + ", i);
        }
        sum += 1.0 / i;
    }

    printf("\nSum of harmonic series: %.5f\n", sum);

    return 0;
}
