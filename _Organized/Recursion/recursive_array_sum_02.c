/*
 * This program calculates the sum of elements in an integer array using recursion.
 * The base case returns 0 when the array size is 0, otherwise it adds the current element to the recursive call for the rest of the array.
 */

#include <stdio.h>

int arraySum(int *arr, int size){
    if (size == 0){
        return 0; 
    }

    return *arr + arraySum(arr + 1, size - 1); 
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5}; 

    printf("%d", arraySum(arr, 5)); 
    return 0;
}
