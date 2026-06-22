/*
 * This program performs matrix addition on two 2x2 matrices.
 * It reads elements for Matrix 1 and Matrix 2 from user input.
 * The resultant matrix is computed by adding corresponding elements.
 * Key approach: Uses pointer arithmetic to access 2D array elements.
 */

#include <stdio.h>

int main(){
    int matrix1[2][2], matrix2[2][2], result[2][2]; 

    printf("Enter elemets of Matrix 1: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", (*(matrix1 + i) + j));
        }
        
    }

    printf("Enter elements of Matrix 2: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", (*(matrix2 + i) + j));
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(result + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
        
    }
    



    printf("Resultant Matrix: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *(*result+i)+j);
        }

        printf("\n");
        
    }
    
    
    
    return 0;
}
