/*
 * This program demonstrates string comparison using pointer arithmetic.
 * The compareStrings function iterates through both strings character by character
 * until a mismatch is found or the end of strings is reached.
 * It returns 0 if strings are equal, or the difference between characters if not.
 */

#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0; 
        }

        str1++; 
        str2++;
    }

    return *str1 - *str2; 
}

int main(){
    printf("apple vs apple: %d\n", compareStrings("apple", "apple")); // Output: 0
    printf("apple vs banana: %d\n", compareStrings("apple", "banana"));
    return 0;
}
