/*
 * This program checks if a given string is an isogram.
 * An isogram is a word or phrase in which no letter of the alphabet is repeated.
 * The program reads a string from input and iterates through each character.
 * It uses a frequency array to track seen characters and prints 'Not Isogram' if a duplicate is found.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    int freq[256] = {0}; 
    char *ptr = str; 

    while (*ptr != '\0') {
        if (freq[(int)*ptr] == 1) {
            printf("Not Isogram\n"); 
        }

        freq[(int)*ptr] =1; 
        ptr++; 
    }
    return 0;
}
