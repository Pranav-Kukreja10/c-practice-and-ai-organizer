/*
 * This program demonstrates matrix transposition by printing a 2x3 array in column-major order.
 * Instead of the standard row-by-row traversal, it swaps the loop indices to access elements as arr[j][i],
 * effectively displaying the transpose of the original matrix layout.
 */

#include <stdio.h>

int main(){
    int r = 2, c = 3; 
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5 ,6}
    };

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
