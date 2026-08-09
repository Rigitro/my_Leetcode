#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int R = matrixSize;          
    int C = matrixColSize[0];    
    
    *returnSize = C;             
    

    int** ans = (int**)malloc(C * sizeof(int*));
    
 
    *returnColumnSizes = (int*)malloc(C * sizeof(int));
    

    for (int i = 0; i < C; i++) {
        ans[i] = (int*)malloc(R * sizeof(int));
        (*returnColumnSizes)[i] = R; 
    }
    
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            ans[c][r] = matrix[r][c];
        }
    }
    
    return ans;
}