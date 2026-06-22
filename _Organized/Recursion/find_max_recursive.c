/*
 * This program finds the maximum element in an array using recursion.
 * The algorithm compares the last element with the maximum of the rest of the array.
 * Base case: when only one element remains, it is returned as the maximum.
 */

#include <stdio.h>

int findMaxRecursive(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }

    int maxofRest = findMaxRecursive(arr, n - 1); 

    if (arr[n - 1] > maxofRest) {
        return arr[n - 1]; 
    }
    else{
        return maxofRest; 
    }
} 

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n]; 
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int max = findMaxRecursive(arr, n); 

    printf("%d\n", max); 
    
    return 0;
}
