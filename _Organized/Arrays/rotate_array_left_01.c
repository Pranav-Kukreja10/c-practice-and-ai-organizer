/*
 * This program rotates an integer array to the left by a specified number of positions.
 * It uses a nested loop approach where the outer loop runs for the number of rotations (k) and the inner loop shifts all elements one position to the left.
 * The last element is then updated with the value that was originally at the first position, effectively completing the rotation for each step.
 */

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;

    for (int i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < 4; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[4] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
