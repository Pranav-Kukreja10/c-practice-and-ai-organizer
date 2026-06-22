/*
 * This program checks if a given string is a palindrome using a recursive approach.
 * It uses two pointers, one starting at the beginning and one at the end of the string,
 * and recursively moves them inward while comparing characters (case-insensitive).
 * The recursion stops when the pointers meet or cross (palindrome) or when a mismatch is found.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function passing the left and right memory addresses
int isPalindrome(char *left, char *right) {
    // Base Case 1: If the pointers meet in the middle or cross, we checked everything!
    if (left >= right) {
        return 1; // 1 means YES
    }
    
    // Base Case 2: If we find a mismatch, stop immediately
    if (tolower((unsigned char)*left) != tolower((unsigned char)*right)) {
        return 0; // 0 means NO
    }
    
    // Recursive Step: Both matched, so move pointers inward and check the next pair
    return isPalindrome(left + 1, right - 1);
}

int main() {
    char str[505];
    scanf("%s", str);
    
    int len = strlen(str);
    
    // Set up the initial pointers
    char *startPtr = str;                  // Points to index 0
    char *endPtr = str + len - 1;          // Points to the last character
    
    if (isPalindrome(startPtr, endPtr) == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
