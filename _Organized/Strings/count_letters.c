/*
 * This program counts vowels and consonants in a given string.
 * It converts each character to lowercase and checks if it is a vowel
 * (a, e, i, o, u) or a consonant (alphabetic non-vowel).
 * Non-alphabetic characters are ignored in the count.
 */

#include <stdio.h>
#include <ctype.h>

void countLetters(char *str, int *vowels, int *consonants) {
    *vowels = 0; 
    *consonants = 0; 

    while (*str != '\0') {
        char c = tolower(*str); 

        if ((c >= 'a' && c <= 'z')){
            if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                (*vowels)++; 
            }
            else {
                (*consonants)++; 
            }
        }
        str++;
    }
}


int main(){
    char text[100]; 
    scanf("%s", text); 

    int v_count, c_count; 

    countLetters(text, &v_count, &c_count); 

    printf("Vowels: %d, Consonats: %d\n", v_count, c_count); 
    
    return 0;
}
