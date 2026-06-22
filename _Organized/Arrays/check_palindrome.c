/*
 * This program checks if an array of integers is a palindrome.
 * It uses a two-pointer approach, comparing elements from the start and end of the array moving towards the center.
 * The function returns 1 if the array is a palindrome, and 0 otherwise.
 */

#include <stdio.h>

int isPalindrome(int *arr, int n){
    int *start = arr; 
    int *end = arr + n - 1; 

    while (start < end) {
        if (*start != *end) {
            return 0; 
        }
        start++; 
        end--; 
    }
    return 1; 
}

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    if (isPalindrome(arr, n)) {
        printf("Plaindrome\n"); 
    }
    else{
        printf("Not Palindrome\n"); 
    }
    
    return 0;
}
