/*
 * This program checks if a given string is a palindrome.
 * It reads a string from standard input and compares characters from both ends moving towards the center.
 * Case-insensitive comparison is performed using tolower() function.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[505]; 
    scanf("%s", str); 

    int len = strlen(str); 
    int isPalindrome =  1;

    for (int i = 0; i < len/2; i++)
    {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1){
        printf("Yes"); 
    }

    else{
        printf("No");
    }
    
    return 0;
}
