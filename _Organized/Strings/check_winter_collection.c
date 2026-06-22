/*
 * This program checks if a product name starts with the prefix 'WIN_'.
 * If the prefix matches, it prints 'Winter Collection'; otherwise, it prints 'item ignored'.
 * The code uses strncmp to safely compare the first 4 characters of the input string.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char product[50]; 
    scanf("%s", product); 

    if (strncmp(product, "WIN_", 4) == 0){
        printf("Winter Collection\n");
    }
    else{
        printf("item ignored\n");
    }
    return 0;
}
