/*
 * This program merges two integer arrays, removes duplicate values, and sorts the result.
 * It then calculates the highest sum of two consecutive elements, the maximum and second maximum values,
 * and the minimum and second minimum values from the processed array.
 */

#include <stdio.h>

int main()
{
    int arr1[5] = {10, 5, 20, 15, 10};
    int n1 = 5;
    int arr2[4] = {20, 25, 5, 30};
    int n2 = 4;

    int merged[20];
    int m_size = n1 + n2;
    int n = 0;

    // Merging Arrays
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merged[i + n1] = arr2[i];
    }

    // Removing Duplicates
    for (int i = 0; i < m_size; i++)
    {
        for (int j = i + 1; j < m_size; j++)
        {
            if (merged[i] == merged[j])
            {
                for (int s = j; s < m_size; s++)
                {
                    merged[s] = merged[s + 1];
                }
                m_size--;
                j--;
            }
        }
    }

    // Sorting the merged array
    for (int i = 0; i < m_size; i++)
    {
        for (int j = 0; j < m_size - i - 1; j++)
        {
            if (merged[i] > merged[i + 1])
            {
                int temp = merged[i];
                merged[i] = merged[i + 1];
                merged[i + 1] = temp;
            }
        }
    }

    // int highest_consecutive_Sum = merged[m_size - 1] + merged[m_size - 2];
    int highest_consecutive_Sum = 0;

    for (int i = 0; i < m_size-1; i++)
    {
        int current_sum = 0;
        current_sum += merged[i] + merged[i+1];
        if (current_sum > highest_consecutive_Sum){
            highest_consecutive_Sum = current_sum;
        }
    }

    int max = 0;
    int second_max = 0;
    int min = __INT_MAX__;
    int second_min = 0;

    for (int i = 0; i < m_size; i++)
    {
        if (merged[i] > max)
        {
            second_max = max;
            max = merged[i];
        }

        if (merged[i] < min)
        {
            second_min = merged[i+1];
            min = merged[i];
        }
    }

    // Printing Final Array
    for (int i = 0; i < m_size; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\nHighest Consecutive Sum: %d", highest_consecutive_Sum);
    printf("\nHigehst Element: %d Second Highest Element: %d", max, second_max);
    printf("\nLowest Element: %d Second lowest Element: %d", min, second_min);
    return 0;
}
