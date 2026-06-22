/*
 * This program demonstrates the use of static variables inside functions.
 * The static variable 'count' retains its value between function calls,
 * allowing us to track the total number of times trackCalls() has been invoked.
 * The main function reads an integer n and calls trackCalls() n times,
 * printing the cumulative count after each call.
 */

#include <stdio.h>

void trackCalls() {
    static int count = 0; 
    count++; 
    printf("%d ", count); 
}

int main(){
    int n; 
    scanf("%d", &n); 

    for (int i = 0; i < n; i++)
    {
        trackCalls(); 
    }
    
    printf("\n"); 
    return 0;
}
