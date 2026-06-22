/*
 * This program finds the first occurrence of a substring within a main string.
 * It uses a nested loop approach: the outer loop iterates through each character of the main string as a potential starting position, while the inner loop compares characters of the substring against the main string starting from that position.
 * If the entire substring is matched consecutively, the current index is printed and the search stops. If no match is found after checking all positions, -1 is printed.
 */

#include <stdio.h>

int main(){
    char main_str[100], sub_str[100]; 
    scanf("%s", main_str); 
    scanf("%s", sub_str);
    
    char *p_main = main_str; 
    int index = 0; 
    int found = 0; 

    while (*p_main != '\0') {
        char *temp_main = p_main; 
        char *p_sub = sub_str; 

        while (*temp_main != '\0' && *p_sub != '\0' && *temp_main == *p_sub) {
            temp_main++; 
            p_sub++; 
        }

        if (*p_sub == '\0') {
            printf("%d\n", index); 
            found = 1;
            break; 
        }

        p_main++; 
        index++; 


    }

    if (found == 0) {
        printf("-1"); 
    }
    return 0;
}
