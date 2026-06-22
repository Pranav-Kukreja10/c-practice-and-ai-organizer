/*
 * This program checks if a given string is a palindrome.
 * It creates a reversed copy of the input string by iterating from the end to the beginning.
 * Then it compares the original string with the reversed string using strcmp.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[20] = "madam"; 
    char reverse[20]; 
    int i, len = strlen(str); 

    for (int i = 0; str[i] != '\0'; i++)
    {
        reverse[i] = str[len-i-1]; 
    }

    reverse[len] = '\0';

    if (strcmp(reverse, str) == 0){
        printf("Palindrome");
    }

    else{
        printf("Not");
    }
    
    return 0;
}
