/*
 * This program checks if a given string is a palindrome using recursion.
 * It compares characters from the start and end of the string moving towards the center.
 * The function returns 1 if the string is a palindrome and 0 otherwise.
 */

#include <stdio.h>
#include <string.h>

int is_palindrome(char *start, char*end)
{
    if (start >= end){
        return 1; 
    }

    if (*start != *end){
        return 0; 
    }

    return is_palindrome(start + 1, end - 1);
}

int main(){
    char word[] = "raceca"; 
    int length = strlen(word); 

    if (is_palindrome(word, word + length - 1)){
        printf("%s is a palindrome\n", word); 
    }
    else{
        printf("%s is not a palindrome\n", word);
}
    return 0;
}
