/*
 * This program demonstrates the use of static variables in C functions.
 * The static variable 'count' retains its value between function calls, persisting across loop iterations.
 * Each call to counter() increments the static counter and prints the current value, showing the cumulative count.
 */

#include <stdio.h>

void counter(){
    static int count = 0;
    count++; 
    printf("%d ", count);
}

int main(){
    for (int i = 0; i < 3; i++)
    {
        counter(); 
    };
    for (int i = 0; i < 3; i++)
    {
        counter(); 
    }
    
    return 0;
}
