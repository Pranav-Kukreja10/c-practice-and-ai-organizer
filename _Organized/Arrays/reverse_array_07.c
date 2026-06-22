/*
 * This program demonstrates array traversal in reverse order.
 * It iterates through an integer array from the last index down to the first.
 * The key approach is using a decrementing loop counter starting at the array size minus one.
 */

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
