/*
 * This program finds the maximum element in an array.
 * It uses a helper function findMax() that iterates through the array
 * and compares each element to track the largest value found so far.
 */

#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr; 

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max){
            max = *(arr + i); 
        }
    }
    return max; 
    
}
 
int main(){
    int n; 

    printf("Enter size of array: "); scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr+i)); 
    }

    int maximum = findMax(arr, n); 

    printf("%d", maximum); 
    
    return 0;
}
