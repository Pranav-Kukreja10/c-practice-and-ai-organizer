/*
 * This program prints a right-angled triangle pattern using asterisks.
 * The outer loop controls the number of rows, while the inner loops handle spaces and stars.
 * The first inner loop prints leading spaces to align the stars, and the second prints the stars.
 */

#include <stdio.h>

int main(){
    int n = 5; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    return 0;
}
