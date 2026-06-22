/*
 * This program reads a 2D matrix of size m x n from user input.
 * It then prompts for a target value and searches for its presence in the matrix.
 * If found, it prints the row and column indices where the element is located.
 */

#include <stdio.h>

int main(){
    int m, n; 
    scanf("%d %d", &m, &n); 

    int matrix[10][10]; 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]); 
        }
        
    }

    int target; 
    printf("Enter Target: "); scanf("%d", &target); 

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == target){
                printf("Found at %d %d", i, j);
            }
        }
        
    }
    
    
    return 0;
}
