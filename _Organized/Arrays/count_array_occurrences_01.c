/*
 * This program counts the occurrences of each unique element in an integer array.
 * It iterates through the array and for each element, it compares it with all other elements.
 * If an element is found to be equal to the current element, a counter is incremented.
 * Duplicate consecutive elements are skipped to avoid redundant counting.
 */

#include <stdio.h>

int main(){
    int arr[10] = {5, 5, 5, 2, 2, 8, 8, 8, 8};

    for (int i = 0; i < 9; i++)
    {
        int max = 0;
        for (int j = 0; j < 9; j++)
        {
            
            if (arr[i+1] == arr[i])
            {
                continue;
            }
            else{
                if (arr[i] == arr[j]){
                    max++;
                }
            }
            
            
        }
        if (max>0){
        printf("%d occurs %d times \n", arr[i], max);
        }
    }
    
    return 0;
}
