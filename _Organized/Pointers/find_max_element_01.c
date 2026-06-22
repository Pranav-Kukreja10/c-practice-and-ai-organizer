/*
 * This program finds the maximum element in an array using pointer arithmetic.
 * It reads the array size and elements, then iterates through the array using a pointer
 * starting at the first element. The pointer is incremented in each iteration to access
 * the next element, updating the maximum value when a larger element is found.
 */

#include <stdio.h>

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int *ptr = arr; 
    int max = *ptr; 

    for (int i = 1; i < n; i++)
    {
        ptr++;
        if (*ptr > max){
            max = *ptr; 
        }
    }

    printf("%d", max);
    
    
    return 0;
}
