/*
 * This program calculates the sum of all elements in a 2D matrix.
 * It uses a function that accepts a pointer to the first row of a fixed-column matrix.
 * The nested loops iterate through each row and column to accumulate the total sum.
 */

#include <stdio.h>

#define COLS 3

int sum_matrix(int (*mat)[COLS], int rows){
    int sum = 0; 
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < COLS; j++)
        {
            sum += *(*(mat + i) + j);
        }
        
    }
    return sum; 
}

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int total_sum = sum_matrix(matrix, 3);
    printf("Sum of all elements: %d\n", total_sum);
    return 0;
}
