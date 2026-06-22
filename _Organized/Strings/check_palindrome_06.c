/*
 * This program checks if a given string is a palindrome using a recursive approach.
 * It compares characters from the start and end of the string, moving inward recursively.
 * The recursion terminates when the pointers meet or cross, indicating a palindrome.
 */

#include <stdio.h>
#include <string.h>

int isPalindrome(char *start, char *end){
    if (start >= end){
        return 1;
    }

    if (*start != *end) {
        return 0; 
    }

    return isPalindrome(start + 1, end - 1);
}

int main(){
    char str[50];
    
    printf("Enter a string: ");
    scanf("%s", str);

    // Determine the length to set the 'end' pointer correctly
    int len = strlen(str);
    
    // Pass pointer to first char, and pointer to last char (before '\0')
    if (isPalindrome(str, str + len - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
