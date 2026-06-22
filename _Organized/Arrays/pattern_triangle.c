/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the row number, while the inner loops handle printing spaces and asterisks.
 * The number of spaces decreases as the row number increases, creating the left-aligned triangle shape.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf(" "); 
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* "); 
        }

        printf("\n"); 
        
        
    }
    
    return 0;
}
