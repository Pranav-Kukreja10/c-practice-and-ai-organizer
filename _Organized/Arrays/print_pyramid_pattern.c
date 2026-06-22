/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the number of rows, while the inner loop prints the asterisks for each row.
 * The pattern starts with 5 rows, where each row i contains i asterisks.
 */

#include <stdio.h>

int main(){
    int n = 5;

    for (int i = n; i>=1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
