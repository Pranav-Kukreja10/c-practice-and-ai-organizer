/*
 * This program performs matrix multiplication of two matrices A and B.
 * It first reads the dimensions and elements of matrix A (r1 x c1) and matrix B (c2 x c2).
 * Then it computes the product matrix C where C[i][j] = sum(A[i][k] * B[k][j]) for k from 0 to c1-1.
 * Finally, it prints the resulting matrix C row by row.
 */

#include <stdio.h>

int main(){
    int r1, c1; 
    scanf("%d %d", &r1, &c1); 
    int matrixA[r1][c1]; 
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &matrixA[i][j]); 
        }
        
    }

    int r2, c2; 
    scanf("%d %d", &r2, &c2); 
    int matrixB[r2][c2]; 
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrixB[i][j]); 
        }
        
    }

    int matrix[r1][c2]; 

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            matrix[i][j] = 0; 
            for (int k = 0; k < c1; k++)
            {
                matrix[i][j] += matrixA[i][k] * matrixB[k][j]; 
            }
            printf("%d ", matrix[i][j]); 
        }
        printf("\n"); 
    }
    
    
    
    return 0;
}
