/*
 * This program calculates the missing number in a sequence of 6 integers.
 * It uses the mathematical property that the sum of numbers from 1 to n is n*(n+1)/2.
 * By comparing the expected sum of indices (1 to 6) with the actual sum of array elements,
 * it identifies the missing number as the difference between these two sums.
 */

#include <stdio.h>

int main(){
    int arr[6] = {1, 4, 3, 5};
    int sum_5 = 0;

    int sum_arr = 0;

    for (int i = 0; i <= 5; i++)
    {
        sum_5 += i; 
        sum_arr += arr[i];
    }

    printf("Missing Number: %d", sum_5 - sum_arr);
    

    return 0;
}
