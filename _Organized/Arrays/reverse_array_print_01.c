/*
 * This program demonstrates array traversal in reverse order.
 * It iterates through an integer array from the last index down to 0.
 * The loop prints each element in reverse sequence without modifying the array.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 4; i > -1; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
