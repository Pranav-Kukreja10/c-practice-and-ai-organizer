/*
 * This program checks if a given square matrix is symmetric.
 * A matrix is symmetric if it is equal to its transpose, meaning arr[i][j] must equal arr[j][i] for all valid i and j.
 * The code iterates through the upper triangle of the matrix and compares each element with its corresponding transposed element.
 */

#include <stdio.h>

int main(){
    int arr[10][10] = {
        {1, 2, 3},
        {2, 5, 6},
        {0, 6, 9}
    };

    int n = 3;
    int symmetric = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i]){
                symmetric = 0;
                break;
            }
        }
        
    }

    if (symmetric == 1)
    {
        printf("Symmetric");
    }
    else{
        printf("Not Symmetric");
    }
    
    
    return 0;
}
