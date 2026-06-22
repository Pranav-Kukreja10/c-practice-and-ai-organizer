/*
 * This program performs matrix multiplication of two matrices.
 * It reads the dimensions and elements of two matrices A (r1 x c1) and B (r2 x c2).
 * The program then computes the product matrix C = A * B, where C[i][j] is the sum of products of corresponding elements.
 * Finally, it prints the resulting matrix C.
 */

#include <stdio.h>
#include <string.h>

int main(){
    int a[10][10], b[10][10], c[10][10];
    int r1,c1,r2,c2;
    
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            
        }
      
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    
    
    
}
