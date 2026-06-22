/*
 * This program calculates the sum and average of elements in an integer array.
 * It iterates through the array to accumulate the sum and counts the number of elements.
 * The average is computed by dividing the sum by the count of elements.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10 ,20, 30, 40, 50};
    int sum = 0, count = 0;
    float avg = 0;

    for (int i = 0; i < 5; i++)
    {
        count ++; 
        sum+=arr[i];
    }

    printf("Sum: %d\n", sum);
    avg = sum/count;
    printf("Average: %.2f", avg);
    
    return 0;
}
