/*
 * This program rearranges an array of integers so that all negative numbers appear at the beginning and all non-negative numbers at the end.
 * It uses a two-pointer approach: 'left' starts at the beginning and 'right' at the end of the array.
 * The algorithm moves the 'left' pointer forward if the current element is negative, and moves the 'right' pointer backward if the current element is non-negative.
 * When a negative number is found at 'right' and a non-negative number at 'left', they are swapped to place negatives on the left and non-negatives on the right.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int *left = arr; 
    int *right = arr + n - 1; 

    while (left <= right) {
        if (*left < 0) {
            left++; 
        }
        else if (*right >= 0) {
            right--; 
        }
        else {
            int temp = *left; 
            *left = *right; 
            *right = temp; 

            left++; 
            right--; 
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    
    return 0;
}
