/*
 * This program reverses an integer array in-place using a two-pointer approach.
 * It swaps elements from the start and end of the array moving towards the center.
 * The reverseArray function takes an array pointer and its size, then modifies the array directly.
 */

#include <stdio.h>

void reverseArray(int *arr, int n){
    int *left = arr; 
    int *right = arr + n - 1;
    int temp; 
    
    while (right>left){
        temp = *right; 
        *right = *left; 
        *left = temp; 

        left++; 
        right--;
    }
}

int main(){
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50}; 

    reverseArray(arr, n); 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    return 0;
}
