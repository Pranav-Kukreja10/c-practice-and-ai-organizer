/*
 * This program checks if a given string is a palindrome using a recursive approach.
 * It compares characters from the start and end of the string moving towards the center.
 * The function returns 1 if the string is a palindrome and 0 otherwise.
 */

#include <stdio.h>
#include <string.h>

int isPalindrome(char *left, char *right) {
    if (left >= right){
        return 1; 
    }

    if (*left != * right){
        return 0; 
    }

    return isPalindrome(left + 1, right - 1);
}

int main(){
    char str[100]; 
    printf("Enter string: "); scanf("%s", str); 

    char *start = str; 
    char *end = str + strlen(str) - 1; 

    if (isPalindrome(start, end)){
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}
