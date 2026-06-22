/*
 * This program implements the Bubble Sort algorithm to sort an array of integers in ascending order.
 * It uses nested loops to repeatedly compare adjacent elements and swap them if they are in the wrong order.
 * The outer loop controls the number of passes, while the inner loop performs the comparisons and swaps.
 */

#include <stdio.h>

int main()
{
    int arr[5] = {8, 3, 1, 7, 4};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
