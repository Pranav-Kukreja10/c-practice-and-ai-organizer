/*
 * This program demonstrates advanced pointer usage in C by creating an array of function pointers.
 * It allows dynamic selection and execution of different AI modules (Image Upscaling, Object Detection, Predictive Modeling).
 * The user can choose a module by entering its ID, and the corresponding function is invoked via the pointer array.
 */

#include <stdio.h>

void runImageUpscaler(){
    printf("[EXECUTING] AI image Upscaling initialized...\n"); 
}

void runObjectDetection(){
    printf("[EXECUTING] Computer Vision Object Detection running...\n"); 
}

void runPredictiveModel(){
    printf("[EXECUTING] ML Predictive Model crushing data...\n"); 
}


int main(){
    void (*aiPipeline[3])() = {&runImageUpscaler, &runObjectDetection, &runPredictiveModel};

    int choice; 

    printf("--- AI MODULE SELECTOR ---\n");
    printf("0: Image Upscaling\n");
    printf("1: Object Detection\n");
    printf("2: Predictive Modeling\n");
    printf("Enter module ID to run: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <=2){
        (*aiPipeline[choice])();
    }
    else{
        printf("Error: Invalid Model Id...");
    }

    return 0;
}
