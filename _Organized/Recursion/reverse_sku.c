/*
 * This program demonstrates a recursive approach to reversing a string in place.
 * It uses two pointers, start and end, which move towards each other to swap characters.
 * The recursion terminates when the start pointer meets or crosses the end pointer.
 */

#include <stdio.h>
#include <string.h>

void reverseSKU(char *start, char *end){
        if (start>=end){
            return; 
        }

        char temp = *start; 
        *start = *end; 
        *end = temp; 

        reverseSKU(start + 1, end - 1);
    }

int main(){
    char sku[] = "VK-8924-POS"; 

    printf("Orignal SKU: %s\n", sku); 

    int len = strlen(sku); 
    reverseSKU(sku, sku + len - 1);
    printf("%s", sku);
    return 0;
}
