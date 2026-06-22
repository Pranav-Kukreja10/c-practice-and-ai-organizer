/*
 * This program checks if a given string is a palindrome.
 * It uses a two-pointer approach, starting from the beginning and end of the string.
 * It compares characters moving towards the center until they meet or mismatch is found.
 */

#include <stdio.h>

int isPalindrome(char *str){
   if (str == NULL || *str == '\0') return 1;
   
   char *start = str; 
   char *end = str; 

    while (*end != '\0'){
        end++; 
    }
    end--;

    while (start < end)
    {
      
        if (*start != *end) {
            return 0;
            }
            start++; 
            end--;
        }
        return 1;
    }

    


int main(){
    char str1[] = "racecar";
    char str2[] = "hello";
    
    printf("Is '%s' a palindrome? %d\n", str1, isPalindrome(str1));
    printf("Is '%s' a palindrome? %d\n", str2, isPalindrome(str2));
    return 0;
}
