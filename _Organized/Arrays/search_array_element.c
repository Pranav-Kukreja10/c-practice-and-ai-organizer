/*
 * This program demonstrates linear search in a C array.
 * It iterates through an array of integers to find a specific key value.
 * When the key is found, it prints the index where the element is located.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30; 

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("Book ID found at %d Index", i);
        }
        
    }
    
    return 0;
}
