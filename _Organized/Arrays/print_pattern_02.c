/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the number of rows, while the inner loop prints asterisks for each column.
 * The number of asterisks in each row increases by one for every subsequent row.
 */

#include <stdio.h>

int main(){
    int n = 5; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
