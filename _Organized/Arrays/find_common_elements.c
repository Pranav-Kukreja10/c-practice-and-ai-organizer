/*
 * This program finds and prints common elements between two integer arrays.
 * It uses nested loops to compare every element of the first array with every element of the second array.
 * When a match is found, the element from the first array is printed.
 */

#include <stdio.h>

int main(){
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[4] = {15, 30, 45, 10};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
            }
        }
        
    }
    
    return 0;
}
