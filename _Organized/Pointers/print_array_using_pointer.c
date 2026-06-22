/*
 * This program reads n integers into an array and prints them using pointer arithmetic.
 * It demonstrates how a pointer can be initialized to an array name to access elements sequentially.
 * The pointer 'ptr' is set to 'arr' and incremented via 'ptr + i' to access each element.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[100]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int *ptr = arr; 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i)); 
    }

    
    
    
    return 0;
}
