/*
 * This program reverses an integer array in-place using a two-pointer approach.
 * It swaps elements from the start and end of the array moving towards the center.
 * The main function demonstrates the reversal with a sample array of 5 elements.
 */

#include <stdio.h>

void reverseArray(int *arr, int size){
    int temp; 
    int *start = arr; 
    int *end = arr + size - 1; 

    while (start < end){
        temp = *start; 
        *start = *end; 
        *end = *start; 

        start++; 
        end--; 
    }
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; 
    int size = 5;

    reverseArray(arr, size); 

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
