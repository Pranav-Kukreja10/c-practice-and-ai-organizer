/*
 * This program compares two strings entered by the user.
 * It uses pointer arithmetic to iterate through both strings simultaneously until a mismatch is found or one string ends.
 * The difference between the ASCII values of the mismatched characters determines whether the first string is smaller, larger, or equal.
 */

#include <stdio.h>

int main(){
    char str1[100], str2[100]; 
    scanf("%s", str1); 
    scanf("%s", str2);
    
    char *p1 = str1; 
    char *p2 = str2; 

    while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
        p1++; 
        p2++; 
    }

    int diff = *p1 - *p2; 

    if (diff == 0) {
        printf("Equal"); 
    }
    else if (diff < 0) {
        printf("First is smaller"); 
    }
    else {
        printf("First is Largest"); 
    }
    return 0;
}
