/*
 * This program counts the number of words in a given input string.
 * It reads a line of text and iterates through each character to identify word boundaries.
 * A word is defined as a sequence of non-whitespace characters, and the count increments when a new word is detected.
 */

#include <stdio.h>

int main(){
    char str[150]; 
    scanf("%[^\n]s", str); 

    char *ptr = str; 
    int count = 0;
    int in_word = 0; 

    while (*ptr != '\0') {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n') {
            in_word = 0; 
        }
        else if (in_word == 0) {
            in_word = 1; 
            count++; 
        }
        ptr++; 
    }

    printf("%d\n", count);
    return 0;
}
