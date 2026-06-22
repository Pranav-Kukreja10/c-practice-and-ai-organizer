/*
 * This program demonstrates matrix transposition for a square matrix.
 * It swaps elements across the main diagonal (mat[i][j] with mat[j][i])
 * by iterating through the upper triangle and swapping with the corresponding
 * lower triangle element. The result is the transpose of the original matrix.
 */

#include <stdio.h>

int main(){
    int n = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < n; i++)
    {
        int temp = mat[i][i];

        mat[i][i] = mat[i][n-1-i];

        mat[i][n-1-i] = temp;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
