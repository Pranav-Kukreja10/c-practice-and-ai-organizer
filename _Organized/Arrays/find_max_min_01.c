/*
 * This program finds the maximum and minimum values in an integer array.
 * It initializes both max and min to the first element of the array.
 * Then it iterates through the entire array, updating max and min as needed.
 */

#include <stdio.h>

void findMaxMin(int *arr, int size, int*max, int *min){
    *max = *min = *arr; 

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max){
            *max = *(arr + i); 
        }
        if (*(arr + i) < *min){
            *min = *(arr + i); 
        }
    }
    
}

int main(){
    int nums[] = {5, 2, 9, 1, 7};
    int mx, mn; 

    findMaxMin(nums, 5, &mx, &mn); 

    printf("%d %d", mx, mn); 
    return 0;
}
