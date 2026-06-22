/*
 * This program finds the maximum and minimum values in an integer array.
 * It initializes max to 0 and min to INT_MAX, then iterates through the array
 * to update these values based on comparison with each element.
 */

#include <stdio.h>

int main(){
    int arr[10] = {20, 30, 10, 50, 40}; 
    int max = 0; 
    int min = __INT_MAX__;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }

        if (arr[i] < min){
            min = arr[i];
        }
    }

    printf("%d\n", max); 
    printf("%d\n", min); 
    
    return 0;
}
