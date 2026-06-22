/*
 * This program finds the lowest mark in an array of student marks.
 * It initializes a variable with the maximum integer value and iterates through the array.
 * The minimum value is updated whenever a smaller mark is encountered.
 */

#include <stdio.h>

int main(){
    int marks[5] = {45, 78, 32, 90, 60};
    int lowest = __INT_MAX__; 
    
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < lowest){
            lowest = marks[i];
        }
        
        
    }

    printf("%d", lowest);
    
    return 0;
}
