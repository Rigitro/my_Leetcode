#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced, assume caller calls free().
 */
int** onesMinusZeros(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int numRows = gridSize;
    int numCols = gridColSize[0];
    

    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    

    int* onesRow = (int*)calloc(numRows, sizeof(int));
    int* onesCol = (int*)calloc(numCols, sizeof(int));
    

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (grid[i][j] == 1) {
                onesRow[i]++;
                onesCol[j]++;
            }
        }
    }

    int** diff = (int**)malloc(numRows * sizeof(int*));
    for (int i = 0; i < numRows; i++) {
        diff[i] = (int*)malloc(numCols * sizeof(int));
        (*returnColumnSizes)[i] = numCols;
    }
    

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            diff[i][j] = 2 * onesRow[i] + 2 * onesCol[j] - numCols - numRows;
        }
    }
    
    free(onesRow);
    free(onesCol);
    
    return diff;
}