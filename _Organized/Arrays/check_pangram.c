/*
 * This program checks if a given string is a pangram.
 * A pangram is a sentence containing every letter of the alphabet at least once.
 * The algorithm uses a frequency array of size 26 to track the presence of each letter.
 * It iterates through the input string, marking letters (case-insensitive) in the array,
 * then verifies if all 26 letters have been marked.
 */

#include <stdio.h>

int main(){
    char str[150]; 
    scanf("%[^\n]s", str); 

    char *ptr = str; 
    int alphabet[26] = {}; 

    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            alphabet[*ptr - 'a'] = 1; 
        }
        else if (*ptr >= 'A' && *ptr <= 'Z') {
            alphabet[*ptr - 'A'] = 1; 
        }

        ptr++; 
    }

    int is_pangram = 1; 

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0) {
            is_pangram = 0; 
            break;
        }
    }

    if (is_pangram) {
        printf("Pangram"); 
    }
    else{
        printf("Not Pangram"); 
    }
    
    return 0;
}
