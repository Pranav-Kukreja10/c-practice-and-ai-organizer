/*
 * This program finds the maximum and minimum values in an integer array.
 * It uses a single pass through the array to update the max and min values.
 * The function takes pointers to store the results and the array itself.
 */

#include <stdio.h>


void findMaxMin(int *max, int *min, int *a, int size){
    *max = *a; 
    *min = *a; 

    for (int i = 0; i<size; i++){
        if (*(a+i) > *max){
            *max = *(a+i);
        }

        if (*(a + i) < *min){
            *min = *(a+i);
        }
    }
}

int main(){
    int size = 5; 
    int arr[5] = {12, 45, 7, 23, 9};

    int max_val, min_val;

    findMaxMin(&max_val, &min_val, arr, size);

    printf("%d %d", max_val, min_val);

    return 0;
}
