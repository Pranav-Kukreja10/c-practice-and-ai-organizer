/*
 * This program reads a square matrix of size n x n from standard input.
 * It calculates the sum of all elements located strictly below the main diagonal (where row index i is greater than column index j).
 * The result is then printed to standard output.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int matrix[n][n]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]); 
        }
        
    }

    int sum = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j) {
                sum += matrix[i][j]; 
            }
        }
        
    }
    
    printf("%d", sum); 
    
    return 0;
}
