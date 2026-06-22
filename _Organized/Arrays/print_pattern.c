/*
 * This program prints a symmetric pattern of asterisks (*) and spaces.
 * The pattern forms an 'X' shape where asterisks appear on the main diagonal (i == j) and the anti-diagonal (i + j == n - 1).
 * The nested loops iterate through an n x n grid, printing '*' for diagonal positions and ' ' otherwise.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1){
                printf("*"); 
            }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    
    return 0;
}
