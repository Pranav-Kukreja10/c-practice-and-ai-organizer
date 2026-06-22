/*
 * This program demonstrates string reversal using two-pointer technique.
 * It swaps characters from the beginning and end of the string until they meet.
 * Handles edge cases like NULL pointers and single-character strings.
 */

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (str == NULL || *str == '\0') return; 

    char *start = str; 
    char *end =str + strlen(str) - 1; 
    char temp; 
    
    while (start < end) {
        temp = *start; 
        *start = *end; 
        *end = temp; 

        start++; 
        end--; 
    }
}

int main(){
    char str1[] = "hello";
    char str2[] = "programming";
    char str3[] = "A";

    reverseString(str1);
    reverseString(str2);
    reverseString(str3);

    printf("Test 1 Output: %s\n", str1);
    printf("Test 2 Output: %s\n", str2);
    printf("Test 3 Output: %s\n", str3);
    return 0;
}
