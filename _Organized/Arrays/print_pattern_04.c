/*
 * This program prints a symmetric alphabetic pattern.
 * It uses nested loops to control spacing and character progression.
 * The outer loop iterates through rows, while inner loops handle leading spaces, ascending characters, and descending characters.
 */

#include <stdio.h>

int main(){
    int n = 5; 
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }

        char ch = 'A';
        for (int j = 1; j <= i ; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        ch -= 2;
        
        for (int j = 1; i < j; j++)
        {
            printf("c ", ch);
            ch--;
        }

        printf("\n");
        
        
    }
    
    return 0;
}
