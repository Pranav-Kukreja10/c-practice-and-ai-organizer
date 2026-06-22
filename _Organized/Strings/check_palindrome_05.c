/*
 * This program checks if a given string is a palindrome.
 * It compares characters from the start and end of the string moving towards the center.
 * If any mismatch is found, the string is not a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[20] = "racecar";
    int len = strlen(str); 
    int is_palindrome = 1; 

    for (int i = 0; i< len/2 ; i++)
    {
        if (str[i] != str[len-1-i])
        {
            is_palindrome = 0; 
            break;
        }
        
    }

    if (is_palindrome == 1)
    {
        printf("Yes");
    }

    else{
        printf("No");
    }
    
    
    return 0;
}
