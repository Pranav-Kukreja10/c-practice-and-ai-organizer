/*
 * This program checks if two strings are anagrams of each other.
 * An anagram is formed by rearranging the letters of a word or phrase to produce a new word.
 * The approach involves counting the frequency of each character in both strings and comparing the counts.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str1[50] = "listen"; 
    char str2[50] = "silent"; 

    if (strlen(str1) != strlen(str2)){
        printf("Not Anagrams");
        return 0; 
    }

    int freq1[256] = {0}; 
    int freq2[256] = {0}; 

    for (int i = 0; str1[i] != '\0' ; i++)
    {
        freq1[str1[i]]++; 
        freq2[str2[i]]++; 
    }

    int is_anagram = 1; 
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            is_anagram = 0; 
            break;
        }
        
    }

    if (is_anagram) {
        printf("Valid Anagram\n");
    } else {
        printf("Not Anagrams\n");
    }
    

    
    return 0;
}
