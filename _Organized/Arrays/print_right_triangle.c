/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the number of rows, while the inner loop prints asterisks for each row.
 * The number of asterisks in each row increases by one as the row number increases.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n"); 
        
    }
    
    return 0;
}
