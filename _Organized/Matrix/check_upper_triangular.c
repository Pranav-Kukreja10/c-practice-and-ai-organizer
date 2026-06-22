/*
 * This program checks if a given square matrix is an upper triangular matrix.
 * An upper triangular matrix is defined as a matrix where all elements below the main diagonal are zero.
 * The program reads the matrix dimensions and elements, then iterates through the lower triangle to verify if any non-zero element exists.
 * If a non-zero element is found below the diagonal, it prints 'not an upper triangular matrix', otherwise it confirms the matrix is upper triangular.
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j && matrix[i][j] != 0) {
                printf("not an upper triangular matrix"); 
                return 0; 
            }
        }
        
    }

    printf("upper traiangular matrix"); 
    
    
    return 0;
}
