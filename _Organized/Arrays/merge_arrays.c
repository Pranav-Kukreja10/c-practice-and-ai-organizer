/*
 * This program reads two arrays of user-defined sizes from standard input.
 * It then merges them into a single array by placing the first array's elements followed by the second array's elements.
 * Finally, it prints the merged array to standard output.
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);

    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int size = m + n;

    int arr[m + n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = n; i < size; i++)
    {
        arr[i] = arr2[i - n];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
