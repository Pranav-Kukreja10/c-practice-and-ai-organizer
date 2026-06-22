/*
 * This program counts the occurrences of a specific character in a string.
 * It iterates through each character of the input string and increments a counter
 * whenever the current character matches the target character.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "banana apple"; 

    char target = 'a';

    int count = 0; 
    int len = strlen(str); 

    for (int i = 0; i < len; i++)
    {
        if(str[i] == target){
            count++; 
        }
    }

    printf("%d", count);
    
    return 0;
}
