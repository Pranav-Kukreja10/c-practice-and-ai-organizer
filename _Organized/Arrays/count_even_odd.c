/*
 * This program counts the number of even and odd integers in an array.
 * It uses a helper function that takes an array, its size, and pointers
 * to store the counts of even and odd numbers.
 * The function iterates through the array, checking each element's parity
 * using the modulo operator, and increments the respective counters.
 */

#include <stdio.h>

void countEvenOdd(int arr[], int size, int *evens, int *odds) {
    *evens = 0; 
    *odds = 0; 

    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2) == 0) {
            (*evens)++; 
        }
        else{
            (*odds)++; 
        }
    }
    
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    
    int e, o; // Variables to hold our answers
    
    countEvenOdd(arr1, 5, &e, &o);
    printf("Input: [1, 2, 3, 4, 5] | Evens: %d, Odds: %d\n", e, o);
    
    countEvenOdd(arr2, 3, &e, &o);
    printf("Input: [10, 20, 30]    | Evens: %d, Odds: %d\n", e, o);
    return 0;
}
