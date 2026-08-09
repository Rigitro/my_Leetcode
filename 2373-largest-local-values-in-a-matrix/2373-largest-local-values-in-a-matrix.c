#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced, assume caller calls free().
 */
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {

    int n = gridSize - 2;
    *returnSize = n;
    

    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    

    int** maxLocal = (int**)malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = n;
        maxLocal[i] = (int*)malloc(n * sizeof(int));
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int maxVal = grid[i][j];
            

            for (int r = i; r < i + 3; r++) {
                for (int c = j; c < j + 3; c++) {
                    if (grid[r][c] > maxVal) {
                        maxVal = grid[r][c];
                    }
                }
            }

            maxLocal[i][j] = maxVal;
        }
    }
    
    return maxLocal;
}