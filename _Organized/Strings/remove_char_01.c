/*
 * This program removes all occurrences of a specified character from a string.
 * It uses a two-pointer approach where 'read' scans the original string and 'write'
 * tracks the position for the new string without the target character.
 * After processing, the string is null-terminated at the new write position.
 */

#include <stdio.h>

void removeChar(char *str, char target) {
    int read = 0; 
    int write = 0; 

    while (str[read] != '\0'){
        if (str[read] != target){
            str[write] = str[read]; 
            write++; 
        }
        read++;
    }

    str[write] = '\0'; 
     


}

int main(){
    char str1[] = "programming";
    char str2[] = "hello world";
    
    removeChar(str1, 'm');
    removeChar(str2, 'l');
    
    printf("Test 1 Output: \"%s\"\n", str1);
    printf("Test 2 Output: \"%s\"\n", str2);
    return 0;
}
