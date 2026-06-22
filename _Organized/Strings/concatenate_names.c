/*
 * This program demonstrates string concatenation in C.
 * It combines a first name and a last name into a full name string.
 * The approach uses strcpy to copy the first name, then strcat to append a space and the last name.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char firstName[50] = "John";
    char lastName[50] = "Doe";
    char fullName[100] = "";

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full Name: %s\n", fullName);
    return 0;
}
