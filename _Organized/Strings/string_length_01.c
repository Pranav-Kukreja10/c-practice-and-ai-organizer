/*
 * This program calculates the length of a given string.
 * It iterates through each character until the null terminator '\0' is encountered.
 * The count of characters processed is returned as the string length.
 */

#include <stdio.h>

int stringLength(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++; 
    }

    return count; 
}

int main(){
    printf("Input: \"apple\" | Output: %d\n", stringLength("apple"));
    printf("Input: \"C\"     | Output: %d\n", stringLength("C"));
    printf("Input: \"\"      | Output: %d\n", stringLength(""));
    return 0;
}
