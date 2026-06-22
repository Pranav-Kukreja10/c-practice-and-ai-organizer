/*
 * This program demonstrates manual string manipulation to convert lowercase letters to uppercase.
 * The manualUpperCase function iterates through each character of the input string.
 * If a character is a lowercase letter (between 'a' and 'z'), it subtracts 32 from its ASCII value
 * to convert it to the corresponding uppercase letter. The main function tests this with two strings.
 */

#include <stdio.h>

void manualUpperCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; 
        } 
        str++; 
    }
}

int main(){
    char str1[] = "hello";
    char str2[] = "C Exam 100!";
    
    manualUpperCase(str1);
    manualUpperCase(str2);
    
    printf("Test 1 Output: \"%s\"\n", str1);
    printf("Test 2 Output: \"%s\"\n", str2);
    return 0;
}
