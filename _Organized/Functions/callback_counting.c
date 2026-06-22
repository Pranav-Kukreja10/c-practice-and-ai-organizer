/*
 * This program demonstrates function pointers and callbacks in C.
 * It defines two predicate functions (is_even and is_positive) that return 1 or 0.
 * The count_matches function accepts a generic condition function pointer as an argument,
 * allowing it to count elements in an array that satisfy any given condition.
 * In main, we use this generic function to count even numbers and positive numbers
 * by passing the respective predicate functions as callbacks.
 */

#include <stdio.h>

int is_even(int num){
    return (num % 2 == 0) ? 1 : 0; 
}

int is_positive(int num) {
    return (num > 0) ? 1 : 0; 
}

int count_matches(int *arr, int size, int (*condition)(int)) {
    int count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (condition(arr[i])) {
            count++;
        }
    }
    return count; 
}

int main(){
    int arr[] = {-3, -2, 0, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int evens = count_matches(arr, size, is_even);
    
    // Pass 'is_positive' as a callback
    int positives = count_matches(arr, size, is_positive);

    printf("Count of even numbers: %d\n", evens);
    printf("Count of positive numbers: %d\n", positives);
    return 0;
}
