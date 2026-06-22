/*
 * This program converts all lowercase letters in a string to uppercase.
 * It iterates through each character of the string and checks if it is a lowercase letter.
 * If it is, the character is converted to uppercase by subtracting 32 from its ASCII value.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Hello World 123!"; 
    int len = strlen(str); 

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; 
        }
        
    }

    printf("%s", str);
    
    return 0;
}
