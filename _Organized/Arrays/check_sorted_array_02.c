/*
 * This program checks if an integer array is sorted in ascending order.
 * It iterates through the array and returns 0 if any element is greater than the next one.
 * Otherwise, it returns 1 indicating the array is sorted.
 */

#include <stdio.h>

int isSorted(int arr[], int size){
    for (int i = 0; i < size -1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }

    return 1; 
}

int main(){
    int arr1[] = {1, 3, 5, 8};
    int arr2[] = {5, 2, 9};
    printf("Arr1 sorted? %d\n", isSorted(arr1, 4));
    printf("Arr2 sorted? %d\n", isSorted(arr2, 3));
    return 0;
}
