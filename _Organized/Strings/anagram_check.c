/*
 * This program checks if two strings are anagrams of each other.
 * It first verifies that both strings have the same length.
 * If lengths match, it sorts both strings alphabetically using bubble sort.
 * Finally, it compares the sorted strings to determine if they are anagrams.
 */

#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int len = strlen(str); 

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1]){
                char temp = str[j]; 
                str[j] = str[j + 1]; 
                str[j + 1] = temp; 
            }
        }
        
    }
    
}

int main(){
    char str1[100], str2[100]; 
    scanf("%s", str1); 
    scanf("%s", str2); 

    if (strlen(str1) != strlen(str2)) {
        printf("NO\n"); 
        return 0; 
    }

    sortString(str1); 
    sortString(str2); 

    if (strcmp(str1, str2) == 0) {
        printf("YES\n"); 
    }
    else{
        printf("NO\n"); 
    }
    return 0;
}
