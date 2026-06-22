/*
 * This program calculates total points for a racing scenario based on two positions.
 * It uses helper functions to determine points from a main race and a sprint event.
 * The main race points follow a standard ranking system (25 for 1st, 18 for 2nd, etc.),
 * while sprint points decrease linearly from 9 down to 2 for positions 1-8.
 */

#include <stdio.h>

int getSprintPoints(int pos){
    if (pos>=1 && pos <= 8){
        return 9 - pos; 
    }
    return 0; 
}

int getRacePoints(int pos){
    int points[] = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
    if (pos >= 1 && pos <= 10){
        return points[pos - 1];
    }

    return 0;
    
}

int calculateTotalPoints(int sprintPos, int mainPos){
    return getRacePoints(mainPos) + getSprintPoints(sprintPos); 
}

int main(){
    int sprintPos, mainPos;
    printf("Enter sprint position and main race position: ");
    scanf("%d %d", &sprintPos, &mainPos);
    
    int total = calculateTotalPoints(sprintPos, mainPos);
    printf("Total Points: %d\n", total);
    return 0;
}
