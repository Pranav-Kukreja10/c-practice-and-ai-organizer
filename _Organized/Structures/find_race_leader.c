/*
 * This program reads data for three drivers (id, name, points) into a struct array.
 * It then iterates through the array to find the driver with the highest points.
 * Finally, it prints the name and points of the leading driver.
 */

#include <stdio.h>

struct Driver {
    int id; 
    char name[50]; 
    int points; 
};



int main(){
    struct  Driver grid[3]; 
    int leaderIndex = 0; 

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %d", &grid[i].id, grid[i].name, &grid[i].points); 
    }

    for (int i = 0; i < 3; i++)
    {
        if (grid[i].points > grid[leaderIndex].points) {
            leaderIndex = i; 
        }
    }
    

    printf("Leader: %s with %d points\n", grid[leaderIndex].name, grid[leaderIndex].points); 
    
    
    return 0;
}
