/*
 * This program prints the upper triangular part of a 2D array.
 * It iterates through rows and columns starting from the diagonal element.
 * Only elements where column index is greater than or equal to row index are printed.
 */

#include <stdio.h>

int main(){
    int r = 3, c =3;
    int arr[3][3] = {
        {1, 2 ,3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < r; i++)
    {
        for (int j = i; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    
    return 0;
}
