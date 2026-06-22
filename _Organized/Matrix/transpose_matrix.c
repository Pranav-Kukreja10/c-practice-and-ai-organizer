/*
 * This program reads a square matrix of size N*N from standard input.
 * It then transposes the matrix in-place by swapping elements across the main diagonal.
 * The algorithm iterates through the upper triangle of the matrix and swaps each element
 * with its symmetric counterpart in the lower triangle. Finally, it prints the transposed matrix.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N; 
    if (scanf("%d", &N) != 1) return 1; 
    
    int *matrix = (int* ) malloc(N * N * sizeof(int)); 

    for (int i = 0; i < N * N; i++)
    {
        scanf("%d", (matrix + i));
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int *element1 = matrix + (i * N) + j; 
            int *element2 = matrix + (j * N) + i; 

            int temp = *element1;
            *element1 = *element2; 
            *element2 = temp;  
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", *(matrix + i * N + j)); 
        }
        printf("\n"); 
    }

    free(matrix);
    
    
    
    return 0;
}
