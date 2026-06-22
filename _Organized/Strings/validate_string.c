/*
 * This program validates a string based on specific criteria.
 * It counts the number of vowels and consonants while checking for the presence of the letter 'z'.
 * The string is considered VALID if it does not contain 'z' and has fewer consonants than vowels.
 * Otherwise, the string is marked as INVALID.
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    int vowels = 0, consonants = 0;
    int hasZ = 0; 
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]); 

        if (ch == 'z'){
            hasZ = 1; 
            break;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++; 
        }
        else{
            consonants++; 
        }
    }

    if (hasZ == 0 && consonants < vowels) {
        printf("VALID\n");
    }
    else{
        printf("INVALID\n");
    }
    
    return 0;
}
