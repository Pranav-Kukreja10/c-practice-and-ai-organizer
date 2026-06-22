/*
 * This program prints a right-angled triangle pattern of numbers.
 * The outer loop controls the number of rows, while the inner loop prints the current count value for each column in the row.
 * The count variable increments after each number is printed to ensure a continuous sequence across all rows.
 */

#include <stdio.h>

int main(){
    int rows = 5; 

    int count = 0;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {   
            printf("%d ", count); 
            count++; 
        }
        printf("\n"); 
        
    }
    
    return 0;
}
