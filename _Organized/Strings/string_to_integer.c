/*
 * This program converts a string of digits into its corresponding integer value.
 * It iterates through each character of the string, subtracting the ASCII value of '0' to get the numeric digit,
 * and accumulates the result by multiplying the current total by 10 and adding the new digit.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[20] = "1234"; 

    int actual_number = 0; 

    for (int i = 0; str[i] != 0; i++)
    {
        actual_number = actual_number*10 + (str[i] - '0');
    }

    printf("%d", actual_number);
    
    return 0;
}
