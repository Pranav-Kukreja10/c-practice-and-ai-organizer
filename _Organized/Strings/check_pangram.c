/*
 * This program checks if a given string is a pangram.
 * A pangram is a sentence containing every letter of the alphabet at least once.
 * The algorithm counts the presence of each letter (case-insensitive) and verifies if all 26 letters are present.
 */

#include <stdio.h>

int main(){
    int t; 
    scanf("%d\n", &t); 

    while (t--) {
        char str[1000005]; 
        gets(str); 

        int count[26] = {0}; 
        int isPangram = 1; 

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z') {
                count[str[i] - 'a'] = 1; 
            }
            else if (str[i] >= 'A' && str[i] <= 'Z'){
                count[str[i] - 'A'] = 1; 
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] == 0) {
                isPangram = 0; 
                break;
            }
        }

        if (isPangram) {
            printf("YES\n");
        }
        else{
            printf("NO"); 
        }
        
        
    }
    return 0;
}
