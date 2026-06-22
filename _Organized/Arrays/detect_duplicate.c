/*
 * This program reads an array of integers from the user and checks for any duplicate values.
 * It uses a nested loop to compare each element with all subsequent elements to find the first repeating number.
 * If a duplicate is found, it prints the value and exits; otherwise, it prints a message indicating no duplicates exist.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int is_repeat = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i]) {
                is_repeat = 1; 
                printf("%d", arr[j]); 
                return 0; 
            }
        }
        
    }

    if (is_repeat == 0) {
        printf("No Repeating number found"); 
    }
    
    
    return 0;
}
