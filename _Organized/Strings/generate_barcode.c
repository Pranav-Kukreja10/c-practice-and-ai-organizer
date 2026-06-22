/*
 * This program demonstrates string concatenation using strcpy and strcat functions.
 * It constructs a barcode by appending a category prefix and a product ID to an empty string.
 * The final concatenated result is printed to the console.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char category[] = "SHOE-";
    char id[] = "8891";
    char barcode[50] = "";

    strcpy(barcode, category);
    strcat(barcode, id);

    printf("Barcode: %s\n", barcode);
    return 0;
}
