/*
 * This program checks if a given integer array is sorted in ascending order.
 * It iterates through the array and compares each element with the next one.
 * If any element is greater than the next, the array is not sorted, and the program outputs NO.
 */

#include <stdio.h>

int main(){
    int n = 5;  

    int arr[5] = {10, 20, 3, 40, 50};
    
    int isSorted = 1; 

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1]){
            isSorted = 0; 
            break;
        }
    }

    if (isSorted == 1) {
        printf("YES"); 
    }
    else{
        printf("NO");
    }
    

    return 0;
}
