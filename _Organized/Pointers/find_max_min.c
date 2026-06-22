/*
 * This program finds the maximum and minimum values in an integer array.
 * It uses pointer parameters to return the results from the function.
 * The algorithm iterates through the array once, updating the max and min pointers as needed.
 */

#include <stdio.h>

void find_max_min(int *arr, int size, int *max, int *min){
    *max = arr[0]; 
    *min = arr[0]; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max){
            *max = arr[i]; 
        }
        if (arr[i] < *min){
            *min = arr[i]; 
        }
    }
    
}

int main(){
    int numbers[] = {15, 3, 22, 8, -4, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int maximum, minimum;

    // Pass the addresses of maximum and minimum
    find_max_min(numbers, size, &maximum, &minimum);

    printf("Max: %d\n", maximum);
    printf("Min: %d\n", minimum);
    return 0;
}
