/*
 * This program calculates the sum and average of elements in a float array.
 * It iterates through the array to accumulate the total sum, then divides by the number of elements to find the average.
 * Key approach: Use a loop to traverse the array and perform arithmetic operations on each element.
 */

#include <stdio.h>

int main(){
    float arr [5] = {1, 2, 3, 4, 5};

    float sum = 0; 
    float n = 5; 

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("%f\n", sum);
    printf("%f\n", sum/n);
    
    return 0;
}
