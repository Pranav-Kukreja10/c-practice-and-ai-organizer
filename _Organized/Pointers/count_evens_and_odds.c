/*
 * This program counts the number of even and odd integers in an array.
 * It uses a pointer to traverse the array elements sequentially.
 * The function countEvensAndOdds takes the array, its size, and pointers to store the counts.
 */

#include <stdio.h>

void countEvensAndOdds(int *arr, int size, int *evenCount, int *oddCount){
    *evenCount = 0;
    *oddCount = 0;
    
    int *ptr = arr; 

    for (int i = 0; i < size; i++)
    {
        if (*ptr % 2 == 0){
            (*evenCount)++; 
        }
        else{
            (*oddCount)++; 
        }
        ptr++;
    }
    
}

int main(){
    int numbers[] = {1, 2, 3, 4 ,5 ,6};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    int evens, odds; 

    countEvensAndOdds(numbers, size, &evens, &odds); 

    printf("Evens: %d Odds: %d", evens, odds);
    return 0;
}
