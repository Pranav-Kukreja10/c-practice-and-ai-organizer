/*
 * This program counts the number of vowels in a given string.
 * It iterates through each character, converts it to lowercase,
 * and checks if it matches any of the vowels (a, e, i, o, u).
 */

#include <stdio.h>
#include <ctype.h>

int count_vowels(char *str) {
    int count = 0; 

    while (*str != 0){
        char current = tolower(*str);

        if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u'){
            count++; 
        }
        str++; 
    }
    return count; 
}

int main(){

    char text1[] = "hello world";
    char text2[] = "c programming";

    printf("Vowels in '%s': %d\n", text1, count_vowels(text1));
    printf("Vowels in '%s': %d\n", text2, count_vowels(text2));

    return 0;
}
