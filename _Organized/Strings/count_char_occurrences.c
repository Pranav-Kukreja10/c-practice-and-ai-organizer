/*
 * This program counts the occurrences of a specific character in a string.
 * It iterates through each character of the input string and increments a counter
 * whenever the current character matches the target character.
 */

#include <stdio.h>

int main(){
    char str[100] = "programming"; 
    char target = 'm';
    
    // scanf(" %c", target); 

    int count = 0;
    
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target) {
            count++; 
        }
    }

    printf("%d", count); 
    
    return 0;
}
