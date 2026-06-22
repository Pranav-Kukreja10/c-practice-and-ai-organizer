/*
 * This program counts the number of even and odd integers in an array.
 * It uses pointer parameters to return the counts from the function.
 * The algorithm iterates through the array and checks the remainder of each element when divided by 2.
 */

#include <stdio.h>


void countEvenOdd(int *evenCount, int *oddCount, int *arr, int size){
    
    *evenCount = 0; 
    *oddCount = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) % 2 == 0){
            (*evenCount)++;
        }
        else{
            (*oddCount)++;
        }
    }
    
}

int main(){
    int size = 5; 
    int arr[5] = {3, 8, 12, 7, 15}; 
    int even, odd; 
    countEvenOdd(&even, &odd, arr, size);

    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
    return 0;
}
