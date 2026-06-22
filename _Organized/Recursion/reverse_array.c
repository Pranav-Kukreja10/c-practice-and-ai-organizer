/*
 * This program reverses an array of integers using recursion.
 * The reverseRec function swaps elements from the start and end pointers
 * moving towards the center until they meet.
 * It uses a recursive approach to achieve the reversal in-place.
 */

#include <stdio.h>

void reverseRec(int *start, int *end) {
    if (start >= end) {
        return; 
    }

    int temp = *start; 
    *start = *end; 
    *end = temp; 

    reverseRec(start + 1, end - 1); 
}

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    reverseRec(arr, arr + n - 1); 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    

    
    return 0;
}
