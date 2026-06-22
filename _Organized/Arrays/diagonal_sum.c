/*
 * This program calculates the sum of elements on the main diagonal and the secondary diagonal of a 2D array.
 * The main diagonal consists of elements where the row index equals the column index (i == j).
 * The secondary diagonal consists of elements where the sum of row and column indices equals (size - 1).
 * Note: The variable 'main' is shadowed by the keyword 'main' in the original code, which is invalid C syntax.
 */

#include <stdio.h>

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {8, 8, 9}
    }; 

    int size = 3;

    int main = 0;
    int secondary = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j){
                main+= arr[i][j];
            }
            if ((i+j) == (size - 1)){
                secondary += arr[i][j];
            }
        }
        
    }

    printf("Main Diagonal Sum: %d\n", main);
    printf("Secondary Diagonal Sum: %d\n", secondary);

    
    return 0;
}
