/*
 * This program demonstrates the Euclidean algorithm for computing the Greatest Common Divisor (GCD).
 * It uses a recursive function to repeatedly replace (a, b) with (b, a % b) until b becomes 0.
 * The base case is when b equals 0, at which point a is the GCD.
 */

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a; 

    return gcd(b, a % b); 
}

int main(){
    int a_vals[] = {48, 101, 56};
    int b_vals[] = {18, 10, 98};
    
    for (int i = 0; i < 3; i++) {
        printf("Input: a=%d, b=%d | Output: %d\n", 
               a_vals[i], b_vals[i], gcd(a_vals[i], b_vals[i]));
    }
    return 0;
}
