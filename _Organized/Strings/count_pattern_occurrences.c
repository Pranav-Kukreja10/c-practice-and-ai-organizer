/*
 * This program counts the total number of occurrences of a given pattern string within a main string.
 * It uses a nested loop approach: the outer loop iterates through each character of the main string, while the inner loop checks if the pattern matches starting at that position.
 * A match is counted only if all characters of the pattern match consecutively in the main string, including handling cases where the pattern extends beyond the main string bounds.
 */

#include <stdio.h>

int main(){
    char main_str[150], pattern[50]; 
    scanf("%s", main_str); 
    scanf("%s", pattern); 

    int count = 0;

    for (int i = 0; main_str[i] != '\0'; i++)
    {
        int match = 1; 

        for (int j = 0; j < pattern[j] != '\0'; j++)
        {
            if (main_str[i + j] != pattern[j] || main_str[i + j] == '\0') {
                match = 0; 
                break; 
            }
        }

        if (match == 1){
            count++;
        }
        
    }

    printf("%d\n", count); 
    
    return 0;
}
