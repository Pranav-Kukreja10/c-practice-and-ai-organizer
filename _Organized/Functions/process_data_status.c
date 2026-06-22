/*
 * This program demonstrates function scope and variable shadowing in C.
 * The processData() function declares a local variable 'i' which shadows the global 'system_status' variable.
 * Due to this shadowing, the global 'system_status' remains unchanged after processData() is called.
 */

#include <stdio.h>

int system_status = 0;

void processData(){
    extern int system_status; 

    register int i; 

    printf("Processing data blocks...\n");
    for (int i = 0; i <= 5; i++)
    {
        system_status += i; 
    }
    
}


int main(){
    printf("Initial Status: %d\n", system_status); 

    processData();
    
    printf("Final Staus after processing: %d\n", system_status); 

    return 0;
}
