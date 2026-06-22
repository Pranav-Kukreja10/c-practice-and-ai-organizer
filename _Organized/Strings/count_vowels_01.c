/*
 * This program counts the number of vowels in a given string.
 * It reads a string from standard input, converts each character to lowercase,
 * and checks if it matches any of the vowels (a, e, i, o, u).
 * The total count of vowels is then printed to standard output.
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    int vowelCount = 0; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        char currentLetter = tolower(str[i]); 

        if (currentLetter == 'a' || currentLetter == 'e' || currentLetter == 'i' || currentLetter == 'o' || currentLetter == 'u'){
            vowelCount++; 
        }
    }

    printf("%d", vowelCount); 
    
    return 0;
}
