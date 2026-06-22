/*
 * This program calculates the average of elements in an integer array.
 * It iterates through the array to compute the sum of all elements and then divides by the array size.
 * The result is printed with two decimal places of precision.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; 
    float size = 5;
    int avg = 0; 

    for (int i = 0; i < size; i++)
    {
        avg+=arr[i];
    }

    printf("%.2f", (avg/size));
    
    return 0;
}
