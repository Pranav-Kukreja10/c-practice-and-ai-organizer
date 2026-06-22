/*
 * This program counts the number of even and odd integers in a fixed-size array.
 * It iterates through each element of the array, checks if the element is divisible by 2,
 * and increments the respective counter for even or odd numbers.
 */

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;        
        }
        
    }

    printf("Even: %d Odd: %d", even, odd);
    
    return 0;
}
