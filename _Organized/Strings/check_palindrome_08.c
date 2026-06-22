/*
 * This program checks if a given string is a palindrome.
 * It reads a string from the user, calculates its length, and then compares characters from both ends moving towards the center.
 * If all corresponding characters match, the string is a palindrome; otherwise, it is not.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    int length = 0; 
    int isPalindrome = 1; 

    printf("Enter a string: "); scanf("%s", str); 

    while (str[length] != '\0'){
        length++; 
    }

    int left = 0; 
    int right = length - 1; 

    while (left < right){
        if (str[left] != str[right]){
            isPalindrome = 0; 
            break; 
        }
        left++; 
        right--; 
    }

    if (isPalindrome == 1){
        printf("Palindrome");
    }

    else{
        printf("Not Palindrome");
    }
    return 0;
}
