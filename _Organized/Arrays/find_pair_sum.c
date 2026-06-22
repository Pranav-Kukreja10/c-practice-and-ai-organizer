/*
 * This program finds all pairs of elements in an array that sum up to a given target value.
 * It uses a nested loop approach where the outer loop iterates through each element and the inner loop checks all subsequent elements.
 * For each valid pair found, it prints the values in the format (value1, value2).
 */

#include <stdio.h>

int main(){
    int n = 6;
    int arr[6] = {2, 4, 3, 5, 7, 8};
    int target = 9;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
        
    }
    
    return 0;
}
