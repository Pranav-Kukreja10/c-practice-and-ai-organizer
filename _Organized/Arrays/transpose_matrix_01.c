/*
 * This program demonstrates matrix transposition using pointer arithmetic.
 * It takes a 3x3 float matrix representing sector times and swaps rows with columns.
 * The result is printed to the console showing the transposed matrix values.
 */

#include <stdio.h>

int main(){
    float sectorTimes[3][3] = {
        {25.1, 28.4, 22.3},
        {25.0, 28.2, 22.1},
        {25.3, 28.5, 22.4}
    };

    float transposed[3][3]; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(transposed + j) + i) = *(*(sectorTimes + i) + j); 
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f ", *(*(transposed + i) + j));
        }
        printf("\n");
    }
    
    
    return 0;
}
