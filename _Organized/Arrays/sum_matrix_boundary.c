/*
 * This program reads a square matrix of size n x n from standard input.
 * It calculates the sum of all elements located on the boundary of the matrix.
 * The boundary includes the first row, last row, first column, and last column.
 * Finally, it prints the computed boundary sum.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]); 
        }
        
    }

    int boundarySum = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n -1) {
                boundarySum += arr[i][j]; 
            }
        }
        
    }
    
    printf("%d", boundarySum); 
     
    return 0;
}
