/*
 * This program counts the number of times a specific target value appears in an integer array.
 * It iterates through each element of the array and increments a counter whenever the current element matches the target.
 * Finally, it prints the total count of occurrences found.
 */

#include <stdio.h>

int main(){
    int arr[6] = {10, 45, 10, 23, 10, 8};
    int target = 10; 
    int count = 0; 

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
        
    }

    printf("Item found %d times", count);
    
    return 0;
}
