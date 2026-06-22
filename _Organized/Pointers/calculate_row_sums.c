/*
 * This program calculates the sum of each row in a dynamically allocated 2D integer matrix.
 * It uses a double pointer (int**) to represent the 2D array and returns a single pointer (int*)
 * containing the row sums. The function demonstrates pointer arithmetic and memory management.
 */

#include <stdio.h>
#include <stdlib.h>

// Function accepts double pointer (2D array) and returns a single pointer (1D array)
int* calculateRowSums(int **matrix, int rows, int cols) {
    // Allocate 1D array to store the sum of each row
    int *sums = (int *)malloc(rows * sizeof(int));
    
    for (int i = 0; i < rows; i++) {
        *(sums + i) = 0; // Initialize sum
        for (int j = 0; j < cols; j++) {
            // matrix[i][j] is equivalent to *(*(matrix + i) + j)
            *(sums + i) += *(*(matrix + i) + j); 
        }
    }
    return sums;
}

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 1. Allocate memory for array of row pointers
    int **matrix = (int **)malloc(rows * sizeof(int *));
    
    // 2. Allocate memory for each column in every row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int *rowSums = calculateRowSums(matrix, rows, cols);

    printf("Row sums are:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i, rowSums[i]);
    }

    // CRITICAL: Free memory in reverse order of allocation
    free(rowSums); // Free the 1D array
    for (int i = 0; i < rows; i++) {
        free(matrix[i]); // Free each row
    }
    free(matrix); // Free the row pointers

    return 0;
}
