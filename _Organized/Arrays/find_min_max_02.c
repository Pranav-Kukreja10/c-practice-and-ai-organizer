/*
 * This program finds the maximum and minimum values in an integer array.
 * It initializes max to 0 and min to INT_MAX, then iterates through each element.
 * For each element, it updates max if the current element is larger, and updates min if the current element is smaller.
 */

#include <stdio.h>

int main(){
    int arr[6] = {12, 5, 7, 98, 3, 55}; 

    int max = 0, min = __INT_MAX__; 

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
        
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d", min);
    return 0;
}
