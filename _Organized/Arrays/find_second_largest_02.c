/*
 * This program finds the second largest element in an array.
 * It iterates through the array once, maintaining the largest and second largest values.
 * The algorithm ensures that duplicate values of the largest element are not counted as the second largest.
 */

#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int largest = -99999; 
    int secondLargest = -99999; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i]; 
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }

    return secondLargest; 
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    
    printf("Second largest is: %d\n", findSecondLargest(arr, size));
    return 0;
}
