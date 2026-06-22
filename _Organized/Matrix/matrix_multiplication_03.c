/*
 * This program demonstrates matrix multiplication for 2x2 matrices.
 * It defines a function multiplyMatrices that takes two 2x2 matrices A and B
 * and computes their product into a result matrix using the standard algorithm.
 * The main function initializes two sample matrices, calls the multiplication function,
 * and prints the resulting matrix.
 */

#include <stdio.h>

void multiplyMatrices(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0; 
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += A[i][k] * B[k][j]; 
            }
            
        }
        
    }
    
}

int main(){
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{2, 0}, {1, 2}};
    int result[2][2];

    multiplyMatrices(A, B, result);

    printf("Result of Multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
