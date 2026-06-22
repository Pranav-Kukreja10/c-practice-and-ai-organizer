/*
 * This program compresses a string by counting consecutive duplicate characters.
 * For each group of identical adjacent characters, it prints the character followed by its count.
 * Example: "aaabbc" becomes "a3b2c1".
 * The algorithm iterates through the string, maintaining a count of the current character.
 */

#include <stdio.h>

void compressString(char str[]) {
    int count = 1; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1]) {
            count++; 
        }
        else{
            printf("%c%d", str[i], count); 
            count = 1; 
        }
    }
    printf("\n"); 
    
}

int main(){
    char str[] = "aaabbc";
    printf("Original: %s\n", str);
    printf("Compressed: ");
    compressString(str);
    return 0;
}
