/*
 * This program finds the second largest element in an array.
 * It iterates through the array, tracking the current maximum value.
 * When a new maximum is found, the previous maximum is stored as the second largest.
 */

#include <stdio.h>

int main(){
    int arr[6] = {10, 10, 5, 8, 20, 20};

    int max = 0, result = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max){
            result = max;
            max = arr[i];

        }
    }

    printf("Second Largest: %d", result);
    

    return 0;
}
