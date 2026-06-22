/*
 * This program finds the maximum element in an integer array using pointer iteration.
 * The findMax function takes a pointer to the first element and the array size.
 * It iterates through the array using a pointer to compare each element with the current maximum.
 */

#include <stdio.h>

int findMax(int *arr, int size){
    int max = *arr; 

    int *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        if (*ptr > max){
            max = *ptr; 
        }
    }
    return max; 
}

int main(){
    int arr[] = {10, 40, 30, 50, 20};
    int size = 5; 

    printf("%d", findMax(arr, size));
    return 0;
}
