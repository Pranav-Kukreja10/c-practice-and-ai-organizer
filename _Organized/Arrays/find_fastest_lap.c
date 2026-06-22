/*
 * This program calculates the fastest lap time and average pace from an array of lap times.
 * It iterates through the array to find the minimum value (fastest lap) and sums all values for the average.
 * The average pace is computed by dividing the total sum by the number of elements.
 */

#include <stdio.h>

int main(){
    int arr[5] = {82, 79, 85, 78, 81};
    int fastest_lap = __INT_MAX__;
    float average_pace = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < fastest_lap){
            fastest_lap = arr[i];
        }
        average_pace+= arr[i];

    }

    printf("Fastest Lap: %d Average Pace: %.2f", fastest_lap, average_pace/5);
    
    return 0;
}
