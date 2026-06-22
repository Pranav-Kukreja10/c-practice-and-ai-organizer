/*
 * This program counts the occurrences of a specific character in a given string.
 * It iterates through each character of the string until the null terminator is reached.
 * For each character that matches the target, a counter is incremented and the final count is returned.
 */

#include <stdio.h>

int countLetter(char str[], char target) {
    int count = 0; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target) {
            count++; 
        }
    }

    return count; 
    
}

int main(){
    printf("String: \"banana\", Target: 'a' | Output: %d\n", countLetter("banana", 'a'));
    printf("String: \"hello\", Target: 'l'  | Output: %d\n", countLetter("hello", 'l'));
    printf("String: \"dog\", Target: 'z'    | Output: %d\n", countLetter("dog", 'z'));
    return 0;
}
