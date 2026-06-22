/*
 * This program separates even and odd numbers from an array.
 * It iterates through the input array, checks each element for divisibility by 2,
 * and stores even numbers in one array and odd numbers in another.
 * Finally, it prints both separated lists to the console.
 */

#include <stdio.h>

int main(){
    int arr[7] = {1, 4, 5, 8, 9, 12, 15};

    int even[10]; 
    int e = 0, o = 0;
    int odd[10]; 

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;   
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }
    printf("Even: ");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd: ");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    
    
    
    return 0;
}
