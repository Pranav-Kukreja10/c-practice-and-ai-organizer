/*
 * This program reads n integers from the user and finds the second largest element.
 * It uses a single pass algorithm with two variables (first and second) to track the largest and second largest values.
 * If the second largest element does not exist (e.g., all elements are equal or n < 2), it prints a message.
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

    int first = -9999, second = -9999; 

    int *ptr = arr; 

    for (int i = 0; i < n; i++, ptr++)
    {
        if (*ptr > first) {
            second = first; 
            first = *ptr; 
        }
        else if (*ptr > second && *ptr < first) {
            second = *ptr; 
        }
    }

    if (second == -9999) printf("No Second Largest"); 

    else {
        printf("%d", second); 
    }
    
    
    return 0;
}
