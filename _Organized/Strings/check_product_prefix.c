/*
 * This program demonstrates string comparison using strncmp() to check if a product code starts with a specific prefix.
 * It extracts the first 4 characters of the product string and compares them with "WIN_" to identify winter collection items.
 * The program prints "Winter Collection" if the prefix matches, otherwise it does nothing.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char product[] = "WIN_JACKET_01";

    if (strncmp(product, "WIN_", 4) == 0){
        printf("Winter Collection");
    }
    return 0;
}
