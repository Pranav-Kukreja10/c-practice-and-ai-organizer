/*
 * This program demonstrates the use of a union to store telemetry data for a car.
 * A union allows different data types to share the same memory location, so only one
 * value can be active at a time. The program initializes a union with a top speed
 * and a lap time, then prints the size of the union and the stored values.
 */

#include <stdio.h>

typedef enum{
    PIT_LANE, 
    ON_TRACK
} CarState; 

typedef union {
    int topSpeed; 
    float lapTime; 
} TelemetryData; 

int main(){
    CarState state = ON_TRACK; 
    TelemetryData data;
    
    printf("Size of union: %lu bytes\n", sizeof(data)); 

    if (state = ON_TRACK) {
        data.topSpeed = 350; 
        printf("Top Speed: %dkmph\n", data.topSpeed); 

        data.lapTime = 82.5; 
        printf("Lap time: %fs\n", data.lapTime); 
    }
    return 0;
}
