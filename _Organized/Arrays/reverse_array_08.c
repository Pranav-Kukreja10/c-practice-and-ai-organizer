/*
 * This program reverses an integer array using a recursive approach.
 * It takes pointers to the start and end of the array and swaps elements
 * from both ends moving towards the center until the pointers cross.
 * The base case is when the start pointer is greater than the end pointer.
 */

#include <stdio.h>

void reverseArray(int *start, int *end){
    if (start > end){
        return;
    }

    int temp = *start; 
    *start = *end; 
    *end = temp; 

    reverseArray(start + 1, end - 1);
}


int main(){ 
    int size = 6; 
    int arr[] = {10, 20, 30, 40, 50, 60};

    reverseArray(arr, arr+size -1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
