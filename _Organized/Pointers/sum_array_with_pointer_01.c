/*
 * This program calculates the sum of all elements in an array using pointer arithmetic.
 * It first reads the array size and elements from the user, then iterates through the array
 * by incrementing a pointer to access each element, accumulating the sum without using index-based access.
 */

#include <stdio.h>

int main(){
    int n; 
    printf("Enter size of array: "); scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0; 
    int *ptr = arr; 

    for (int i = 0; i < n; i++)
    {
        sum+= *ptr; 
        ptr++; 
    }
    
    printf("%d", sum); 
    return 0;
}
