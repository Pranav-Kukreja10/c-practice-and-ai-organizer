/*
 * This program reverses an array of integers.
 * It uses a two-pointer approach where one pointer starts at the beginning
 * and another at the end of the array. The values at these pointers are swapped
 * iteratively until the pointers meet in the middle.
 * The function reverse_arr() performs the swap and moves the pointers inward.
 */

#include <stdio.h>

void reverse_arr(int *start,int *end){
    int temp; 
    temp = *start; 
    *start = *end; 
    *end = temp; 

    start++; 
    end--; 
}

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    reverse_arr(arr, arr + n - 1); 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
