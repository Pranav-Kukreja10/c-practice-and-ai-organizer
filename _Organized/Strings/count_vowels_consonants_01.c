/*
 * This program counts the number of vowels and consonants in a given string.
 * It iterates through each character, checks if it is an alphabetic character,
 * and then determines if it is a vowel or a consonant accordingly.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Learning C is awesome!"; 

    int vowel = 0, consonants = 0;
    int len = strlen(str); 

    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                    vowel++;
                }
                else{
                    consonants++;
                }
        }

        
    }

    printf("Vowels: %d Consonants: %d", vowel, consonants);
    
    return 0;
}
