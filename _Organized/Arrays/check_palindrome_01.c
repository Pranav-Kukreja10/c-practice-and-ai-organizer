/*
 * This program checks if an integer array is a palindrome.
 * It compares elements from the start and end of the array moving towards the center.
 * If mismatched elements are found, it prints 'Not a palindrome' and exits.
 * If all comparisons match, it prints 'Is a palindrome'.
 */

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 2, 1}; 

    int size = 5;
   

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[size-1])
        {
            size--;
            continue;
        }
        else{
            printf("Not a palindrome");
            return 0;
        }
        
    }

   
    printf("Is a palindrome");
    
    
    
    return 0;
}
