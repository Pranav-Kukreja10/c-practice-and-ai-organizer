/*
 * This program finds the minimum and maximum values in an integer array.
 * It uses a single pass through the array to update the min and max pointers.
 * The algorithm initializes both min and max to the first element, then iterates
 * through the rest of the array to update them as needed.
 */

#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max){
    *min = arr[0]; 
    *max = arr[0]; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) *max = arr[i]; 
        if (arr[i] < *min) *min = arr[i]; 
    }
}

int main(){
    int arr[] = {4, 1, 9, 2};
    int min, max;
    findMinMax(arr, 4, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}
