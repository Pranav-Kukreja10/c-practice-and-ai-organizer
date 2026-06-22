/*
 * This program swaps the first and last elements of an integer array.
 * It stores the first and last elements in temporary variables,
 * then assigns the last element to the first position and vice versa.
 * Finally, it prints the modified array to verify the swap.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    int size = 5;
    int first = arr[0];
    int last = arr[size-1]; 

    arr[0] = last; 
    arr[size-1] = first; 

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
