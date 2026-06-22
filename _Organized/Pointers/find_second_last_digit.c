/*
 * This program extracts the second last and last digits of a given integer.
 * It handles single-digit numbers by setting both values to -1.
 * For larger numbers, it calculates the last digit and reduces the number
 * to find the second last digit.
 */

#include <stdio.h>

void findDigits(int number, int *sec, int *secLast) {
    if (number < 10) {
        *sec = -1; 
        *secLast = -1; 
        return; 
    }

    *secLast = (number / 10) % 10; 
    while (number >= 100) {
        number = number / 100; 
    }

    *sec = number % 10; 
}

int main(){

    return 0;
}

int main() {
    int number, sec, secLast;
    
    // Test case 1: Single digit
    number = 5;
    findDigits(number, &sec, &secLast);
    printf("Number: %d, Second Last: %d, Last: %d\n", number, sec, secLast);
    
    // Test case 2: Two digits
    number = 23;
    findDigits(number, &sec, &secLast);
    printf("Number: %d, Second Last: %d, Last: %d\n", number, sec, secLast);
    
    // Test case 3: Three digits
    number = 123;
    findDigits(number, &sec, &secLast);
    printf("Number: %d, Second Last: %d, Last: %d\n", number, sec, secLast);
    
    // Test case 4: Four digits
    number = 1234;
    findDigits(number, &sec, &secLast);
    printf("Number: %d, Second Last: %d, Last: %d\n", number, sec, secLast);
    
    return 0;
}
