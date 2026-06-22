/*
 * This program reverses a string in-place using a two-pointer approach.
 * It reads a string from input, swaps characters from the start and end
 * moving towards the center, and prints the reversed result.
 */

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str); 

    char *start = str; 
    char *end = str + len - 1; 
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
    char text[300]; 
    scanf("%s", text); 

    reverseString(text); 

    printf("%s\n", text); 
    return 0;   
}
