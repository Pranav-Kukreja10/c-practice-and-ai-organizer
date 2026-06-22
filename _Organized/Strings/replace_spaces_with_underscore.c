/*
 * This program reads a string and replaces all space characters with underscores.
 * It iterates through each character of the input string until the null terminator is reached.
 * If a space is encountered, it prints an underscore; otherwise, it prints the original character.
 */

#include <stdio.h>

int main(){
    char str[50] = "Hello World this is C"; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' '){
            printf("_");
        }
        else{
            printf("%c", str[i]);
        }
    }
    
    return 0;
}
