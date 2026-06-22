/*
 * This program finds the minimum and maximum values in an integer array.
 * It uses a single pass through the array to update both min and max pointers.
 * The function takes the array, its size, and pointers to store the results.
 */

#include <stdio.h>

void findMax(int arr[], int n, int *min, int *max){
    *min = arr[0]; 
    *max = arr[0]; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max){
            *max = arr[i]; 
        }
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
    }
    
}

int main(){
    int n = 5; 
    int arr[5] = {1, 4, 5, 3, 2}; 

    int max, min; 

    findMax(arr, n, &min, &max); 

    printf("%d %d", max, min); 
    return 0;
}
