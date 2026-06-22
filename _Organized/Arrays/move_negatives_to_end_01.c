/*
 * This program reads an array of integers from the user and rearranges them such that all negative numbers are moved to the end of the array while maintaining the relative order of non-negative numbers.
 * The algorithm uses a two-pointer approach where it iterates through the array and swaps elements when a negative number is found before a non-negative one, effectively bubbling negatives to the right.
 * After processing, the modified array is printed to the console.
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

    for (int i = 1; i < n; i++)
    {
       while (arr[i] < 0 && arr[i - 1] > 0) {
        int temp = arr[i];
        arr[i] = arr[i - 1]; 
        arr[i - 1] = temp; 
        i--;  

       }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    
    
    return 0;
}
