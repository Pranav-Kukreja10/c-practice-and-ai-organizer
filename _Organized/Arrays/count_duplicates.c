/*
 * This program reads an array of integers from the user and counts the occurrences of each unique number.
 * It uses a visited marker (-999) to mark numbers that have already been processed to avoid duplicate counting.
 * For each unvisited number, it scans the rest of the array to find and mark all matching duplicates.
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

    int visited = -999; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == visited) {
            continue;
        }

        int count = 1; 

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]) {
                count++; 
                arr[j] = visited; 
            }
        }

        printf("Number %d, Count: %s\n", arr[i], count); 
        
    }
    
    
    return 0;
}
