/*
 * This program calculates the sum of each column in a 2D integer array.
 * It iterates through each column index and accumulates the values from all rows.
 * The result for each column is printed with its 1-based index.
 */

#include <stdio.h>

int main(){
    int r = 3, c =3;
    int arr[3][3] = {
        {1, 2 ,3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < c; i++)
    {
        int col_Sum = 0;
        for (int j = 0; j < r; j++)
        {
            col_Sum += arr[j][i];
        }
        printf("Col %d Sum: %d\n",i+1, col_Sum);
    }
    
    return 0;
}
