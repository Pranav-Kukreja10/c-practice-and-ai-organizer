/*
 * This program prints a symmetric diamond-like pattern using numbers.
 * The upper half prints rows with increasing numbers and spaces, while the lower half mirrors this.
 * Each row starts with spaces, followed by '1', then spaces and the row number if applicable.
 */

#include <stdio.h>

int main()
{
    int n = 5;

    // Upper Half

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        printf("1");

        if (i > 1)
        {
            for (int j = 1; j <= (2 * i - 3); j++)
            {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }

    // Lower Half

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        printf("1");

        if (i > 1)
        {
            for (int j = 1; j <= (2 * i - 3); j++)
            {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
