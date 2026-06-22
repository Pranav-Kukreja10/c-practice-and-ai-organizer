/*
 * This program searches for a target value in a 3x3 integer matrix.
 * It iterates through each row and column to find the target element.
 * If found, it prints the location and returns success; otherwise, it returns failure.
 */

#include <stdio.h>

int searchMatrix(int mat[3][3], int target) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == target) {
                printf("Found %d at row %d, col %d\n", target, i, j); 
                return 1; 
            }
        }
        
    }
    return 0; 
    
}

int main(){
    int grid[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int found = searchMatrix(grid, 50);
    if (!found) {
        printf("Element not found.\n");
    }
    return 0;
}
