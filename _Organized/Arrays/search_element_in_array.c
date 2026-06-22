/*
 * This program demonstrates linear search in an array.
 * It iterates through an integer array to find a specific key value.
 * If the key is found, it prints the index and terminates the search.
 */

#include <stdio.h>

int main(){
    int arr[5] = {15, 22, 8, 40, 11};
    int key = 40;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at %d index", i);
            break;
        }
        
    }
    

    return 0;
}
