/*
 * This program demonstrates a recursive approach to printing an array in reverse order.
 * It uses a post-order recursive pattern where the function first recurses to the end of the array,
 * then prints the current element on the way back up the call stack, effectively reversing the output.
 * The base case handles an empty array by returning immediately.
 */

#include <stdio.h>

void printReverse(int *arr, int size) {
    if (size == 0) {
        return; 
    }

    printReverse(arr + 1, size - 1); 

    printf("%d ", *arr); 
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printReverse(arr, 5);  
    return 0;
}
