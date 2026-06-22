/*
 * This program checks if an integer array is sorted in ascending order.
 * It iterates through the array comparing each element with the previous one.
 * Returns 1 if sorted, 0 otherwise.
 */

#include <stdio.h>

int isSorted(int *arr, int size){
    if (size <= 1) return 1; 

    int *current = arr + 1;
    
    int *previous = arr; 

    for (int i = 1; i < size; i++)
    {
        if (*previous > *current){
            return 0; 
        }

        previous++; 
        current++; 
    }

    return 1;
    
}

int main(){
    int sorted_arr[] = {1, 3, 5, 7, 9};
    int unsorted_arr[] = {2, 4, 8, 6};
    
    printf("Is sorted_arr sorted? %d\n", isSorted(sorted_arr, 5));
    printf("Is unsorted_arr sorted? %d\n", isSorted(unsorted_arr, 4));
    return 0;
}
