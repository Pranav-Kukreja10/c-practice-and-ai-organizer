/*
 * This program checks for duplicate elements in an integer array.
 * It uses a nested loop approach where the outer loop iterates from the start and the inner loop iterates from the next element up to the symmetric position from the end.
 * If any two elements at different indices are found to be equal, it prints a message and exits; otherwise, it completes without duplicates.
 */

#include <stdio.h>

int main(){
    int arr[5] = {4, 9, 1, 9, 5}; 

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5-i; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicates found");
                return 0;
            }
            
        }
        
    }
    
    return 0;
}
