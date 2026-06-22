/*
 * This program demonstrates string concatenation in C.
 * It combines a category prefix and a numeric ID to form a final barcode string.
 * The approach uses strcpy to copy the category and strcat to append the ID.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char category[20] = "SHOE_";
    char ID[20] = "8891"; 
    char merged[20]; 

    strcpy(merged, category);
    strcat(merged, ID); 

    printf("Final Barcode: %s\n", merged);
    return 0;
}
