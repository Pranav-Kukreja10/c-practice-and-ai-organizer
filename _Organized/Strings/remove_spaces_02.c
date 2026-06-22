/*
 * This program removes all spaces from a given string.
 * It iterates through the input string and copies only non-space characters
 * into a new position, effectively compacting the string.
 * The result is a space-free version of the original string.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "C programming is fun"; 
    int len = strlen(str);
    int j = 0; 

    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' '){
            str[j] = str[i];
            j++; 
        }
    }

    str[j] = '\0'; 

    printf("%s", str);
    
    return 0;
}
