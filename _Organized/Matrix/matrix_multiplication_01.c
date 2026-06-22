/*
 * This program performs matrix multiplication of two matrices.
 * It first reads the dimensions of the first matrix (r1 x c1) and the second matrix (r2 x c2).
 * It validates that the number of columns in the first matrix equals the number of rows in the second matrix (c1 == r2).
 * If valid, it reads both matrices, computes the product, and prints the resulting matrix.
 */

#include <stdio.h>

int main(){
    int r1, c1, r2, c2; 

    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2){
        return 0; 
    }

    int mat1[10][10], mat2[10][10], result[10][10] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        
    }
    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j]; 
            }
            
        }
        
    }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
