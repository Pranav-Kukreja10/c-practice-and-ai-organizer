/*
 * This program solves the Tower of Hanoi puzzle using recursion.
 * It moves n disks from a source peg to a destination peg using an auxiliary peg.
 * The algorithm recursively moves n-1 disks to the auxiliary peg, moves the largest disk to the destination,
 * and then moves the n-1 disks from the auxiliary peg to the destination.
 */

#include <stdio.h>

void hanoi(int n, char source, char dest, char aux) {
    if (n == 0) return; 

    hanoi(n -1, source, aux, dest); 

    printf("Move disk %d from %c to %c\n", n, source, dest); 

    hanoi(n - 1, aux, dest, source); 
}

int main(){
    int n; scanf("%d", &n); 

    hanoi (n, 'A', 'C', 'B');
    return 0;
}
