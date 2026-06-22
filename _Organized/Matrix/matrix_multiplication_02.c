/*
 * This program performs matrix multiplication of two matrices.
 * It first reads the dimensions and elements of the first matrix (r1 x c1) and the second matrix (r2 x c2).
 * It then checks if multiplication is possible by verifying if the number of columns in the first matrix equals the number of rows in the second matrix.
 * If valid, it computes the product matrix using the standard triple-nested loop algorithm and prints the result.
 */

#include <stdio.h>

int main(){
    int r1, c1, r2, c2;
    int matrix1[10][10]; 
    int matrix2[10][10]; 
    int result[10][10]; 
    
    scanf("%d %d", &r1, &c1); 
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]); 
        }
        
    }

    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
        
    }

    if (c1 != r2){
        printf("Multiplication not Possible!"); 
        return 0; 
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; 
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
