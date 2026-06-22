/*
 * This program moves all non-zero elements to the front of the array
 * while preserving their relative order, and fills the remaining
 * positions with zeros.
 * Approach: Use a 'nonZeroIndex' pointer to track the position where
 * the next non-zero element should be placed. Iterate through the array,
 * copying non-zero elements to this position and incrementing the pointer.
 * Finally, fill the rest of the array with zeros.
 */

#include <stdio.h>

void moveZeros(int arr[], int size) {
    int nonZeroIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i]; 
            nonZeroIndex++; 
        }
    }

    while (nonZeroIndex < size) {
        arr[nonZeroIndex] = 0; 
        nonZeroIndex++; 
    }
    
}

int main(){
    int arr[] = {0, 1, 0, 3, 12};
    moveZeros(arr, 5);
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    return 0;
}
