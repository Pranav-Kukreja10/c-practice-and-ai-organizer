/*
 * This program calculates the sum of the secondary diagonal elements of a square matrix.
 * The secondary diagonal runs from the top-right corner to the bottom-left corner.
 * For an element at row i and column j in an n x n matrix, the secondary diagonal condition is j = n - 1 - i.
 */

#include <stdio.h>

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3, sum = 0; 

    for (int i = 0; i < n; i++)
    {
        sum+= arr[i][n-1-i]; 
    }

    printf("%d", sum);
    
    return 0;
}
