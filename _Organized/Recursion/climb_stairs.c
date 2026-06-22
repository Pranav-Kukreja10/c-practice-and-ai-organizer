/*
 * This program calculates the number of distinct ways to climb a staircase
 * with n steps, where you can take either 1 or 2 steps at a time.
 * It uses a recursive approach: f(n) = f(n-1) + f(n-2) with base cases f(1)=1 and f(2)=2.
 * Note: This implementation has exponential time complexity O(2^n) due to repeated subproblems.
 */

#include <stdio.h>

int climbStairs(int n) {
    if (n<=2) return n; 

    return climbStairs(n-2) + climbStairs(n-1); 
}

int main(){
    int n = 4; 
    printf("%d", climbStairs(n));
    return 0;
}
