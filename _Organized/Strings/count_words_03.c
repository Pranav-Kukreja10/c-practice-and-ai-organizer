/*
 * This program counts the number of words in a given string.
 * It iterates through each character and toggles a flag when a non-whitespace character is encountered after a whitespace.
 * Each transition from whitespace to non-whitespace increments the word count.
 */

#include <stdio.h>

int countWords(char *str) {
   int count = 0; 
   int inWord = 0; 

   while (*str != '\0') {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            inWord = 0;
        }

        else if (inWord == 0) {
            inWord = 1; 
            count++; 
        }

        str++; 
   }
   return count; 
}

int main(){
    printf("Input: \"C is powerful\"        | Output: %d\n", countWords("C is powerful"));
    printf("Input: \"   Too   many  spaces   \" | Output: %d\n", countWords("   Too   many  spaces   "));
    return 0;
}
