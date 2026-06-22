/*
 * This program prints a half-diamond pattern using nested loops.
 * It first constructs an upper pyramid by decreasing leading spaces and increasing stars per row.
 * Then it constructs a lower inverted pyramid by reversing the loop direction.
 * The pattern is symmetric and centered based on the input row count.
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for half the diamond: ");
    scanf("%d", &n);

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");      // print leading spaces

        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");      // print stars

        printf("\n");
    }

    // Lower inverted pyramid
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");      // print leading spaces

        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");      // print stars

        printf("\n");
    }

    return 0;
}
