/*
 * This program reverses a given string in-place.
 * It uses a two-pointer approach where one pointer starts at the beginning
 * and the other at the end of the string. Characters are swapped until
 * the pointers meet in the middle.
 */

#include <stdio.h>

void reverseString(char *str){
    int left = 0;
    int right = 0;

    while (str[right] != 0) right++; 
    right--;

    while (left < right){
        char temp = str[left];
        str[left] = str[right]; 
        str[right] = temp; 
        left++; 
        right--; 
    }
    
    
}


int main(){

    return 0;
}

int main() {
    char str[] = "Hello World";
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
