/*
 * This program reads an array of integers from the user and finds the second largest element.
 * It handles edge cases where the array has fewer than 2 elements or all elements are identical.
 * The algorithm iterates through the array once, updating the largest and second largest values dynamically.
 */

#include <stdio.h>
#include <limits.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    if (n < 2) {
        printf("None\n"); 
        return 0; 
    }

    int largest = INT_MIN;
    int second_largest =  INT_MIN; 
    int *ptr = arr; 
    
    for (int i = 0; i < n; i++)
    {
        if (*ptr > largest) {
            second_largest = largest; 
            largest = *ptr; 
        } else if (*ptr > second_largest && *ptr < largest) {
            second_largest = *ptr; 
        }
        ptr++; 
    }

    if (second_largest == INT_MIN) {
        printf("None"); 
    }
    else {
        printf("%d", second_largest); 
    }
    
    return 0;
}
