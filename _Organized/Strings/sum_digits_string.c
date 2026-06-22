/*
 * This program calculates the sum of all numeric digits found in a given string.
 * It uses a recursive approach to traverse the string character by character.
 * For each character, if it is a digit (0-9), its numeric value is added to the total sum.
 */

#include <stdio.h>

int sumOfDigits(char *ptr) {
    if (*ptr == '\0') return 0; 

    int currentVal = 0; 

    if (*ptr >= '0' && *ptr <= '9'){
        currentVal = *ptr - '0'; 
    }

    return currentVal + sumOfDigits(ptr + 1); 
}


int main(){
    char str[100]; 
    scanf("%s", str); 

    int totalSum = sumOfDigits(str); 

    printf("%d\n", totalSum); 
    return 0;
}
