/*
 * This program reads a 3x3 integer matrix from standard input.
 * It calculates the sum of all elements in the matrix using pointer arithmetic.
 * The result is then printed to the standard output.
 */

#include <stdio.h>

int main(){
    int matrix[10][10] = {}; 
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += *(*(matrix + i) + j);
        }
        
    }

    printf("%d", sum);
    


    
    return 0;
}
