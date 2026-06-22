/*
 * This program demonstrates string manipulation using the toupper() function.
 * It converts all lowercase alphabetic characters in a given string to uppercase.
 * The makeUpperCase function iterates through each character until the null terminator.
 */

#include <stdio.h>
#include <ctype.h>

void makeUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]); 
    }
    
}

int main(){
    char str1[] = "hello";
    char str2[] = "C is Fun!";
    
    makeUpperCase(str1);
    makeUpperCase(str2);
    
    printf("Test 1 Output: \"%s\"\n", str1);
    printf("Test 2 Output: \"%s\"\n", str2);
    
    return 0;
    return 0;
}
