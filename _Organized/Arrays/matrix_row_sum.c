/*
 * This program calculates the sum of elements for each row in a 3x3 integer matrix.
 * It iterates through each row, accumulates the values, and prints the total for that row.
 * This demonstrates nested loops for traversing a 2D array.
 */

#include <stdio.h>

int main(){
    int arr[3][3] = {
        {25, 30, 24},
        {26, 29, 25},
        {24, 28, 24}
    }; 

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j]; 
        }
        printf("Driver %d Total: %d\n", i, sum);
    }
    
    return 0;
}
