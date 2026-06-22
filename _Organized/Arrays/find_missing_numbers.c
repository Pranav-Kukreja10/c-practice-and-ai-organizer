/*
 * This program finds all missing numbers in a given array.
 * It iterates from 1 to the maximum possible value (total) and checks if each number exists in the array.
 * If a number is not found in the array, it is printed as a missing number.
 */

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 4, 5, 10};

    int total = 10; 

    for (int i = 1; i <= total; i++)
    {
        int found = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] == i)
            {
                found = 1;
                break;
            }
          
            
        }
          if(!found){
                printf("%d ", i);
            }
        
    }
    
    
    return 0;
}
