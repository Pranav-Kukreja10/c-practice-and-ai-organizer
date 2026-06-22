/*
 * This program prints a number pyramid pattern.
 * It uses nested loops where the outer loop controls the number of rows and the inner loop prints the current row number.
 * The output forms a right-aligned pyramid of numbers.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i); 
        }
        printf("\n"); 
        
    }
    
    return 0;
}
