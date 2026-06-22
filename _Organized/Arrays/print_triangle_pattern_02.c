/*
 * This program prints a right-angled triangle pattern of numbers.
 * The outer loop controls the number of rows, while the inner loop prints an incrementing counter for each column.
 * The counter resets for each new row, creating a sequence from 1 to n in the last row.
 */

#include <stdio.h>

int main(){
    int n = 5;
    int count = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<i; j++){
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    
    return 0;
}
