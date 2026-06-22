/*
 * This program counts the frequency of each unique element in an integer array.
 * It iterates through the array and for each unvisited element, it scans the entire array to find all matching occurrences.
 * A helper array tracks visited elements to ensure each unique value is reported exactly once.
 */

#include <stdio.h>

int main(){
    int arr[8] = {5, 1, 5, 2, 1, 5, 3, 2};
 
    int counted[8] = {0};

    for (int i = 0; i < 8; i++)
    {
        if (counted[i] == 0){
            int count = 1;
            for (int j = 0; j < 8; j++)
            {
                if (arr[i] == arr [j]){
                    count++;
                    counted[j] = 1;
                }
            }
             printf("%d occurs %d %s\n", arr[i], count, (count > 1) ? "times" : "time");
        }
    }
         
    return 0;
}
