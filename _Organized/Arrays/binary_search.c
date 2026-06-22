/*
 * This program implements a recursive binary search algorithm to find a target element in a sorted array.
 * It uses pointer arithmetic to calculate the middle element and recursively narrows the search range.
 * The function returns a pointer to the found element or NULL if the element is not present.
 */

#include <stdio.h>

int* binarySearch(int *left,int *right, int target){
    if (left > right) {
        return NULL; 
    }

    int *mid = left + (right - left) / 2; 

    if (*mid == target){
        return mid; 
    }

    if (*mid > target) {
        return binarySearch(left, mid - 1, target); 
    } else {
        return binarySearch(mid + 1, right, target); 
    }
}

int main(){
    int n, target; 

    scanf("%d", &n);
    
    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }
    scanf("%d", &target); 

    int *result = binarySearch(arr, arr + n - 1, target);
    
    if (result != NULL) {
        int index = result - arr; 
        printf("%d", index); 
    }

    else{
        printf ("Not Found"); 
    }
    return 0;
}
