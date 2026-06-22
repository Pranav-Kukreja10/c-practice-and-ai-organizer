/*
 * This program checks if an array contains consecutive integers.
 * It first sorts the array using a bubble sort algorithm to arrange elements in ascending order.
 * Then it iterates through the sorted array to verify that the difference between adjacent elements is exactly 1.
 */

#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1]){
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        }
        
    }
    
}

int isConsecutive(int arr[], int size) {
    sort (arr, size); 

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] != 1) {
            return 0; 
        }
    }
    return 1; 
}

int main(){
    int arr1[] = {5, 2, 3, 4}; // Will sort to 2, 3, 4, 5
    int arr2[] = {10, 12, 13}; // Gap between 10 and 12
    
    printf("Arr1 is consecutive: %d\n", isConsecutive(arr1, 4));
    printf("Arr2 is consecutive: %d\n", isConsecutive(arr2, 3));
    return 0;
}
