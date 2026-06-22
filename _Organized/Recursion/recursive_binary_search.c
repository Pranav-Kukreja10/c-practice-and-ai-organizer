/*
 * Recursive Binary Search Implementation
 * This program searches for a target value in a sorted array using recursion.
 * Key approach: Divide the search space in half at each step by comparing
 * the middle element with the target. If the target is smaller, search the
 * left half; if larger, search the right half. Recursion continues until
 * the target is found or the search space is exhausted.
 */

#include <stdio.h>

int recursiveBinarySearch(int arr[], int low, int high, int target){
    if (high >= low){
        int mid = low + (high - low)/2; 
    

    if (arr[mid] == target){
        return mid; 
    }

    if (arr[mid] > target){
    }

    return recursiveBinarySearch(arr, mid + 1, high, target); 
    } 

}

int main(){

    int inventoryIDs[] = {1001, 1045, 1089, 2034, 2055, 3012, 3099};
    int n = sizeof(inventoryIDs) / sizeof(inventoryIDs[0]);
    int target;
    
    printf("Enter Product ID to search: ");
    scanf("%d", &target);
    
    int result = recursiveBinarySearch(inventoryIDs, 0, n - 1, target);
    
    if (result == -1)
        printf("Product not found\n");
    else
        printf("Product found at index %d\n", result);

    return 0;
}
