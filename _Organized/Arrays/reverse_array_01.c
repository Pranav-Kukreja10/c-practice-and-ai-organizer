/*
 * This program reverses an integer array in-place using a two-pointer approach.
 * It swaps elements from the start and end of the array moving towards the center.
 * The time complexity is O(n) and space complexity is O(1).
 */

#include <stdio.h>

void reverseArray(int *arr, int size){
    if (size <= 1) return; 

    int *start = arr; 
    int *end = arr + size - 1; 
    int temp; 
    
    while (start < end) {
        temp = *start; 
        *start = *end; 
        *end = temp; 

        start++; 
        end--; 
    }
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    reverseArray(arr, size); 

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
