/*
 * This program finds a missing number in a sequence from 0 to n.
 * It calculates the expected sum of numbers from 0 to n using the formula for sum of first n integers.
 * Then it reads n-1 numbers and computes the missing number by subtracting the actual sum from the expected sum.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    
    int actualSum = 0; 

    for (int i = 0; i < n + 1; i++)
    {
        actualSum+= i; 
    }
    

    int sum = 0; 
    for (int i = 0; i < n-1; i++)
    {
        int num; 
        scanf("%d", &num);
        sum += num; 
    }

    int missingNum = actualSum - sum; 

    printf("%d", missingNum);
     
    return 0;
}
