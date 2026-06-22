/*
 * This program finds the row in a 2D integer array that contains the maximum number of 1s.
 * It iterates through each row, counts the occurrences of 1, and tracks the row index and count of the maximum.
 * Finally, it prints the 1-based row number and the count of 1s in that row.
 */

#include <stdio.h>

int main(){
    int arr[3][4] = {
        {0, 1, 0, 1},
        {1, 1, 1, 0},
        {0, 0, 0, 1}
    };

    int max = 0; 
    int max_row = 0;

    for (int i = 0; i < 3; i++)
    {
        int count = 0; 
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1){
                count ++; 
            }
        }
        if (count > max){
            max = count;
            max_row = i+1;
        }
        
    }

    printf("Row %d has the maximum 1s (Count: %d)",max_row, max);
    
    return 0;
}
