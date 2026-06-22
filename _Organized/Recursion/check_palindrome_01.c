/*
 * This program checks if a given string is a palindrome using recursion.
 * It compares characters from the start and end indices, moving inward recursively.
 * Returns true if all corresponding characters match, false otherwise.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalindrome(char str[], int start, int end) {
    if (start >= end){
        return true; 
    }

    if (str[start] != str[end]) {
        return false; 
    } 

    return isPalindrome(str, start + 1, end - 1);
}

int main(){
    char test_cases[][10] = {"racecar", "hello", "a"};
    for (int i = 0; i < 3; i++) {
        int len = strlen(test_cases[i]);
        printf("Input: \"%s\" | Output: %d\n", 
               test_cases[i], 
               isPalindrome(test_cases[i], 0, len - 1));
    }
    return 0;
}
