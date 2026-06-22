/*
 * This program finds the missing number in a sequence of integers from 1 to n.
 * It uses the mathematical sum formula n*(n+1)/2 to calculate the expected sum of the complete sequence.
 * The missing number is then determined by subtracting the actual sum of the array elements from the expected sum.
 */

#include <stdio.h>

int findMissing(int arr[], int n) {
    int totalExpectedSum = n* (n + 1) / 2; 
    int arraySum = 0;

    for (int i = 0; i < n-1; i++)
    {
        arraySum += arr[i]; 
    }

    return totalExpectedSum - arraySum; 
    
}

int main(){
    int arr[] = {1, 2, 4, 5}; 
    printf("Missing: %d\n", findMissing(arr, 5));
    return 0;
}
