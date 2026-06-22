/*
 * This program reads a line of text containing multiple words separated by spaces.
 * It reverses each individual word in place while preserving the original order of words.
 * The algorithm uses two pointers to identify word boundaries and applies a swap-based reversal for each word.
 */

#include <stdio.h>

void reverseString(char *start, char *end) {
    while (start < end){
        char temp = *start; 
        *start = *end; 
        *end = temp; 
        start++; 
        end--; 
    }
}

int main(){
    char str[100]; 

    scanf("%[^\n]", str); 

    int len = 0;

    while (str[len] != '\0') {
        len++; 
    }

    reverseString(str, str + len - 1); 

    char *wordStart = str; 
    char *wordEnd = str; 

    while (*wordEnd != '\0') {
        // Move wordEnd forward until we hit a space or the end of the string
        if (*wordEnd == ' ' || *(wordEnd + 1) == '\0') {
            
            // If it's a space, the end of the word is one character behind it
            if (*wordEnd == ' ') {
                reverseString(wordStart, wordEnd - 1);
                wordStart = wordEnd + 1; // Next word starts after the space
            } 
            // If it's the end of the string, the end of the word is exactly here
            else {
                reverseString(wordStart, wordEnd);
            }
        }
        wordEnd++;
    }
    
    printf("%s\n", str);
}
