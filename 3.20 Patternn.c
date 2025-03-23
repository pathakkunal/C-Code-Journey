#include <stdio.h>

void print_pattern(int n)
{
    int size = 2 * n - 1; // Total size of the pattern matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Calculate the minimum distance from the edges
            int value = n - (i < j ? (i < size - i ? i : size - i - 1) : (j < size - j ? j : size - j - 1));
            printf("%d ", value);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--)
    {
        int n;
        printf("\nEnter the value of N for test case: ");
        scanf("%d", &n);
        printf("\nPattern for N = %d:\n", n);
        print_pattern(n);
    }
    return 0;
}
