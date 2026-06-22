/*
 * This program rotates a 3x3 matrix 90 degrees clockwise.
 * The algorithm maps each element at matrix[i][j] to rotated[j][3 - 1 - i].
 * After rotation, the matrix is printed row by row.
 */

#include <stdio.h>

int main(){
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    }; 

    int rotated[3][3]; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rotated[j][3 - 1 - i] = matrix[i][j]; 
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", rotated[i][j]); 
        }
        printf("\n");
    }
    
    
    return 0;
}
