/*
 * This program calculates the maximum difference between any two elements in an array where the larger element appears after the smaller one.
 * It iterates through each element as a potential starting point and compares it with all subsequent elements to find the maximum positive difference.
 * The algorithm uses nested loops to check every valid pair (i, j) where j > i and arr[j] > arr[i].
 */

#include <stdio.h>

int main(){
    int arr[6] = {310, 315, 305, 320, 318, 325};

    int max_diff = 0;

    for (int i = 0; i < 5; i++)
    {
        int current_diff = 0;
        for (int j = i; j < 6; j++)
        {
        
        if (arr[j]>arr[i]){
            current_diff = arr[j] - arr[i];
        }
        else{
            continue;
        }

        if (current_diff > max_diff)
        {
            max_diff = current_diff;
        }
    }
    }

    printf("%d", max_diff);
    
    return 0;
}
