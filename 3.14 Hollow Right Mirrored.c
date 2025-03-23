#include <stdio.h>

void hollow_mirrored_right_triangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows for the patterns: ");
    scanf("%d", &rows);

    printf("\nHollow Mirrored Right Triangle Star Pattern:\n");
    hollow_mirrored_right_triangle(rows);
    return 0;
}