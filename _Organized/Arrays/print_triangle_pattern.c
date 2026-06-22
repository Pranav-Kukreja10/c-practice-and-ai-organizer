/*
 * This program prints a right-angled triangle pattern of numbers.
 * The outer loop controls the number of rows, while the inner loop prints numbers from 1 to the current row number.
 * Each row contains an increasing sequence of integers starting from 1.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ", j); 
        }
        printf("\n"); 
        
    }
    
    return 0;
}
