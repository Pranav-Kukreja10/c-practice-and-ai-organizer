/*
 * This program counts the number of words in a single line of input.
 * It reads a line of text using scanf with a format specifier that stops at newline.
 * The algorithm iterates through each character, toggling a flag when a non-space character is encountered after a space or at the start, incrementing the count for each new word found.
 */

#include <stdio.h>

int main(){
    char str[1000]; 
    scanf("%[^\n]", str); 

    int count = 0; 
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t') {
            in_word = 0; 
        }
        else if (in_word == 0) {
            count++; 
            in_word = 1; 
        }
    }
    
    printf("%d", count); 
    return 0;

}
