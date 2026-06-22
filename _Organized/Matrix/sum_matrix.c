/*
 * This program calculates the sum of all elements in a 2D matrix.
 * The matrix is represented as a 1D array with row-major order.
 * The sumMatrix function iterates through each row and column to accumulate the total sum.
 */

#include <stdio.h>

int sumMatrix(int *matrix, int row, int cols){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += *(matrix + i * cols + j); 
        }
        
    }
    return sum;
    
}

int main(){
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    
    int total = sumMatrix((int *)matrix, 2, 3);
    
    printf("Sum of the matrix is: %d\n", total);
    return 0;
}
