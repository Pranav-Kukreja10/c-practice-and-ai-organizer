/*
 * This program counts the number of vowels in a given string.
 * It iterates through each character, converts it to lowercase,
 * and checks if it matches any of the vowels (a, e, i, o, u).
 */

#include <stdio.h>
#include <ctype.h>

int countVowels(char *str){
    int count = 0;
    char *ptr = str; 

    while (*ptr != '\0'){
        char current = tolower(*ptr); 

        if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
            count++;
        }
        ptr++; 
    }
    return count;
}
int main(){
    char word1[] = "Hello World"; 
    char word2[] = "Umbrella";

    printf("%d", countVowels(word1));
    printf("%d", countVowels(word2));
    return 0;
}
