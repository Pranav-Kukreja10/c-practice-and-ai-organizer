/*
 * This program counts the number of words in a single line of input.
 * It reads a line of text using scanf with a format specifier that stops at whitespace or newline.
 * The algorithm iterates through the string and increments the word count whenever a space character is encountered.
 * Note: The initial count is set to 1 to account for the first word, assuming non-empty input.
 */

#include <stdio.h>

int main(){
    char str[1000];
    
    scanf("%[^\n^]", str); 

    int wordCount = 1; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' '){
            wordCount++; 
        }
    }

    printf("%d\n", wordCount);
    
    return 0;
}
