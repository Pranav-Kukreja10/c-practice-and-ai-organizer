/*
 * This program calculates the sum of all elements located on the border of a 3x3 matrix.
 * The border includes the first and last rows, as well as the first and last columns.
 * Elements strictly inside the matrix (i.e., matrix[1][1]) are excluded from the sum.
 */

#include <stdio.h>

int main(){
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    }; 
    int sum = 0; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 2){
                sum += matrix[i][j]; 
            }
        }
        
    }

    printf("%d", sum); 
    
    return 0;
}
