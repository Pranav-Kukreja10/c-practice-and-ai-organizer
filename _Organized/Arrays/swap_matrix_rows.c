/*
 * This program demonstrates swapping the first and last rows of a 2D array.
 * It initializes a 3x10 array with the first 3 columns populated, then swaps row 0 with row 2.
 * The result is printed to show the modified matrix.
 */

#include <stdio.h>

int main(){
    int arr[10][10] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        int temp = arr[0][i]; 
        arr[0][i] = arr[n-1][i];
        arr[n-1][i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
