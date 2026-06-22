/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the number of rows, while the inner loop prints asterisks for each row.
 * The number of asterisks in each row equals the row number, creating an increasing pattern.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    
    return 0;
}
