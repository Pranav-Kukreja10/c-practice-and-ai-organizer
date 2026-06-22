/*
 * This program performs matrix multiplication of two 2x2 matrices.
 * It uses pointer arithmetic to access matrix elements without using array indexing syntax.
 * The result matrix is computed by summing the products of corresponding row and column elements.
 */

#include <stdio.h>

int main(){
    int matrix1[2][2] = {{1,2}, {3,4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}}; 
    int result[2][2] = {{0, 0}, {0, 0}}; 

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
            
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *(*result + i) + j);
        }
        printf("\n");
    }
    
    
    return 0;
}
