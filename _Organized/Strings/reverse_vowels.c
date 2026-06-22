/*
 * This program reverses the order of vowels in a given string.
 * It uses a two-pointer approach: one starting from the beginning and one from the end.
 * The pointers move inward, skipping non-vowel characters, and swap vowels when both pointers point to them.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char character) {
    char c = tolower(character); 

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    char str[150]; 
    scanf("%s", str); 

    char *left = str; 
    char *right = str + strlen(str) - 1; 

    while (left < right) {
        while (left < right && !isVowel(*left)) {
            left++; 
        }

        while (left < right && !isVowel(*right)) {
            right--; 
        }

        if (left < right) {
            char temp = *left; 
            *left = *right; 
            *right = temp; 
            left++; 
            right--; 
        }
    }

    printf("%s\n", str); 
    return 0;
}
