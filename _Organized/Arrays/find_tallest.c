/*
 * This program finds the tallest value in an array of integers.
 * It initializes a variable to track the maximum value found so far.
 * Then it iterates through each element of the array, updating the maximum when a larger value is encountered.
 */

#include <stdio.h>

int main(){
    int arr[4] = {145, 160, 172, 89}; 

    int tallest = 0;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > tallest){
            tallest = arr[i];
        }
    }

    printf("%d", tallest);
    
    return 0;
}
