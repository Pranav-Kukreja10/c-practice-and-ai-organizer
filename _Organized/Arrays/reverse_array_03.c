/*
 * This program reverses an integer array in-place using a two-pointer approach.
 * It swaps elements from the beginning and end of the array moving towards the center.
 * The main function demonstrates the reversal with a sample array of 5 elements.
 */

#include <stdio.h>

void reverseArray(int *arr, int size){
    int *left = arr; 
    int *right = arr + size - 1;
    
    while (left < right){
        int temp = *left; 
        *left = *right; 
        *right = temp; 
        
        left++;
        right--;  
    }
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; 
    int size = 5; 

    reverseArray(arr, 5); 

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    return 0;
}
