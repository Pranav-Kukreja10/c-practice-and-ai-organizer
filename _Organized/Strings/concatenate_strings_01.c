/*
 * This program concatenates two strings dynamically allocated in memory.
 * It calculates the lengths of both input strings, allocates a new buffer for the combined result,
 * copies characters from the first string, then from the second string, and finally appends a null terminator.
 * The result is printed to the console.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char word1[50] = "Hello", word2[50] = "World";
    
    int len1 = strlen(word1); 
    int len2 = strlen(word2); 

    char *combined = (char *)malloc((len1 + len2 + 1) * sizeof(char));

    char *ptr = combined; 

    for (int i = 0; i<len1; i++){
        *ptr = word1[i]; 
        ptr++; 
    }

    for (int i = 0; i < len2; i++)
    {
        *ptr = word2[i]; 
        ptr++; 
    }

    *ptr = '\0';

    printf("%s", combined);
    
    return 0;
}
