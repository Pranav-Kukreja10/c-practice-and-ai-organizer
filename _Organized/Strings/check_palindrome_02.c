/*
 * This program checks if a given string is a palindrome.
 * It uses two pointers, one starting at the beginning and one at the end of the string.
 * The pointers move towards each other, comparing characters until they meet or a mismatch is found.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    char *start = str; 
    char *end = str + strlen(str) - 1; 

    while (start < end) {
        if (*start != *end) {
            return false; 
        }
        start++; 
        end--; 
    }

    return true; 
}

int main(){
    printf("racecar: %d\n", isPalindrome("racecar")); // Output: 1 (True)
    printf("hello: %d\n", isPalindrome("hello"));
    return 0;
}
