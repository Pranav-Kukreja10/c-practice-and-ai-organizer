/*
 * This program reverses each word in a given string while preserving the original order of words.
 * It reads a line of text, identifies word boundaries by spaces, and reverses each word individually.
 * The algorithm uses two pointers to define the start and end of each word, swapping characters until they meet.
 */

#include <stdio.h>

void reverse_string(char *start, char *end) {
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
    char str[150]; 
    scanf("%[^\n]s", str); 

    char *word_Start = str; 
    char *ptr = str; 

    while (*ptr != '\0') {
        if (*ptr == ' ') {
            reverse_string(word_Start, ptr - 1); 
            word_Start = ptr + 1; 
        }
        ptr++; 
    }

    reverse_string(word_Start, ptr - 1); 

    printf("%s\n", str); 
    return 0;
}
