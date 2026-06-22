/*
 * This program calculates the sum of elements on the border of a 2D matrix.
 * The border includes the first and last rows, as well as the first and last columns.
 * The nested loops iterate through the matrix, and elements on the border are added to the sum.
 */

#include <stdio.h>

int main(){
    int arr[10][10] = {
        {1, 2 ,3},
        {4, 5 ,6},
        {7, 8 ,9}
    };

    int n = 3;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i ==0 || i==n-1 || j ==0 || j==n-1){
                sum+=arr[i][j]; 
            }
        }
        
    }

    printf("%d", sum);
    
    return 0;
}
