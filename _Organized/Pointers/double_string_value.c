/*
 * This program reads a string of digits from the user, optionally preceded by a minus sign.
 * It uses a pointer to traverse the string, accumulating the numeric value while skipping non-digit characters.
 * The final result is the parsed integer multiplied by 2, with the sign preserved if a minus was present.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    char *ptr = str; 
    int result = 0; 
    int sign = 1; 

    if (*ptr == '-'){
        sign = -1; 
        ptr++; 
    }

    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            result = (result * 10) + (*ptr - '0'); 
        }
        else {
            break; 
        }
        ptr++;
    }

    result = result * sign * 2; 

    printf("%d", result); 
    return 0;
}
