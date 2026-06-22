/*
 * This program iterates through an array and prints each element only once.
 * It uses a nested loop to check if the current element has already appeared earlier in the array.
 * If an element is found to be a duplicate, it skips printing. Otherwise, it prints the element.
 */

#include <stdio.h>

int main()
{
    int n = 8;
    int arr[8] = {4, 2, 4, 5, 2, 3, 1, 4};

    for (int i = 0; i < n; i++)
    {
        int already_seen = 0;
        for (int j = 0; j < i; j++)
        {

            if (arr[i] == arr[j])
            {
                already_seen = 1;
                break;
            }
        }

        if (already_seen = 1)
        {
            continue;
        }

        for (int k = 0; k < n; k++)
        {
            if (arr[i] == arr[k]){
                printf("%d ", arr[i]);
                break;
            }
        }
        
    }

    return 0;
}
