#include <stdio.h>

int main()
{
    int first_term, common_difference, num_terms, sum = 0;

    printf("Enter the first term of the A.P.: ");
    scanf("%d", &first_term);

    printf("Enter the common difference: ");
    scanf("%d", &common_difference);

    printf("Input number of terms in the series: ");
    scanf("%d", &num_terms);

    if (num_terms <= 0)
    {
        printf("Number of terms must be a positive integer.\n");
        return 1;
    }

    printf("Arithmetic Progression: ");

    for (int i = 0; i < num_terms; i++)
    {
        int term = first_term + i * common_difference;
        printf("%d ", term);
        sum += term;
    }

    printf("\nThe sum of the AP series is: %d\n", sum);

    return 0;
}
