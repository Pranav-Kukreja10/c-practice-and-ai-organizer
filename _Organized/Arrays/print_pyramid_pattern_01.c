/*
 * This program prints a centered pyramid pattern using nested loops.
 * The outer loop controls the number of rows, while the inner loops handle
 * printing leading spaces and asterisks for each row.
 * Key approach: Row i has (i-1) spaces and (2*i - 1) asterisks.
 */

#include <stdio.h>

int main(){
    int n = 5; 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2*i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
