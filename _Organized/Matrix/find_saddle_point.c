/*
 * This program finds a saddle point in a square matrix.
 * A saddle point is an element that is simultaneously the minimum in its row and the maximum in its column.
 * The algorithm iterates through each row to find the minimum value and its column index, then checks if that value is the maximum in its column.
 */

#include <stdio.h>

int main() {
    int r = 3, c = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int saddle_found = 0; // Flag to check if the matrix even has one

    // Loop through each row one by one
    for (int i = 0; i < r; i++) {
        
        // --- MISSION 1: Find the minimum in the current row 'i' ---
        int min_val = mat[i][0];
        int min_col_index = 0;
        
        for (int j = 1; j < c; j++) {
            if (mat[i][j] < min_val) {
                min_val = mat[i][j];
                min_col_index = j; // Remember WHERE we found it!
            }
        }
        
        // --- MISSION 2: Check if it's the maximum in 'min_col_index' ---
        int is_saddle = 1; // Assume it is true until proven false
        
        for (int k = 0; k < r; k++) {
            // We lock the column to min_col_index and change the row 'k'
            if (mat[k][min_col_index] > min_val) {
                is_saddle = 0; // Candidate failed! Found a bigger number.
                break;         // Stop checking this column, it's over.
            }
        }
        
        // --- THE VERDICT ---
        if (is_saddle == 1) {
            printf("Saddle Point found: %d at Row %d, Col %d\n", min_val, i, min_col_index);
            saddle_found = 1;
        }
    }
    
    if (saddle_found == 0) {
        printf("No Saddle Point exists in this matrix.\n");
    }
    
    return 0;
}
