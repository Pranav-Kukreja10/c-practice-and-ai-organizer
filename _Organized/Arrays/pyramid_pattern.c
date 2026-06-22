/*
 * This program prints two pyramid patterns using nested loops.
 * The first pattern prints spaces followed by incrementing numbers to form a left-aligned pyramid.
 * The second pattern prints spaces followed by incrementing numbers to form a right-aligned pyramid.
 * Both patterns use a nested loop structure to control the number of spaces and numbers printed per line.
 */

#include <stdio.h>

int main(){
    int n = 5; 
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            count ++;
            printf("%d", count);
        }
        printf("\n");
        
    }
    

    printf("\n\n\n");

     
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n - i; j++)
        {
            count2 ++;
            printf("%d", count2);
        }
        printf("\n");
        
    }
    
    return 0;
}
