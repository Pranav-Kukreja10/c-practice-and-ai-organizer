/*
 * This program counts the number of vowels and consonants in a given string.
 * It iterates through each character, checks if it is an alphabetic character,
 * converts it to lowercase, and then determines if it is a vowel or consonant.
 */

#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0; 
    *consonants = 0; 

    while (*str != '\0') {
        if (isalpha(*str)) {
            char lowerChar = tolower(*str); 
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                (*vowels)++; 
            }
            else{
                (*consonants)++; 
            }
        }
        str++; 
    }
}

int main(){
    char *test_cases[] = {"OpenAI", "C Programming 101", "xyz"};
    int v, c;

    for (int i = 0; i < 3; i++) {
        countVowelsConsonants(test_cases[i], &v, &c);
        printf("Input: \"%s\" | Vowels: %d, Consonants: %d\n", test_cases[i], v, c);
    }
    return 0;
}
