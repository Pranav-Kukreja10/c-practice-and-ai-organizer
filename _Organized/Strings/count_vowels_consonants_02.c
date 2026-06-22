/*
 * This program counts the number of vowels and consonants in a given string.
 * It iterates through each character, checks if it is an alphabetic character,
 * and then determines if it is a vowel or a consonant accordingly.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    int vowel = 0, consonants = 0; 

    printf("Enter a string: "); scanf("%[^\n]s", str); 

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i]; 

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
            ){
                vowel++; 
            }

            else{
                consonants++; 
            }            
        }

        
    }

    printf("Vowels: %d\n", vowel); 
    printf("Consonants: %d\n", consonants); 
    
    return 0;
}
