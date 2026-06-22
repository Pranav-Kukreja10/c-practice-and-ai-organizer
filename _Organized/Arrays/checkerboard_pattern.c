/*
 * This program generates a checkerboard-like pattern of 1s and 0s.
 * The pattern is based on the parity of the sum of row and column indices (1-based).
 * If (i + j) is even, it prints '1', otherwise it prints '0', creating an alternating grid.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0) {
                printf("1 "); 
            }
            else{
                printf("0 "); 
            }
        }
        printf("\n"); 
        
    }
    
    return 0;
}
