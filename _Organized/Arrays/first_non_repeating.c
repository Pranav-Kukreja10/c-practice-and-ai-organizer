/*
 * This program finds the first non-repeating character in a given string.
 * It uses a frequency array of size 256 to count occurrences of each character.
 * The algorithm iterates through the string twice: first to count frequencies, then to find the first character with a frequency of 1.
 */

#include <stdio.h>

char firstNonRepeating(char str[]) {
    int freq[256] = {0}; 

    for (int i = 0; str[i] != '\0' ; i++)
    {
       freq[(int)str[i]] ++; 
        
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] == 1){
            return str[i]; 
        }
    }
    
    return '_';
    
}

int main(){
    printf("First non-repeating in 'swiss': %c\n", firstNonRepeating("swiss"));
    return 0;
}
