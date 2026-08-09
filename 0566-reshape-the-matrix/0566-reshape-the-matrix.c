/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int originalRows = matSize;
    int originalCols = matColSize[0];
    

    if (originalRows * originalCols != r * c) {
        *returnSize = originalRows;
        *returnColumnSizes = (int*)malloc(originalRows * sizeof(int));
        for (int i = 0; i < originalRows; i++) {
            (*returnColumnSizes)[i] = originalCols;
        }
        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));
    *returnSize = r;
    
    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }
    

    for (int i = 0; i < originalRows; i++) {
        for (int j = 0; j < originalCols; j++) {
            int flatIndex = i * originalCols + j;
            int newRow = flatIndex / c;
            int newCol = flatIndex % c;
            result[newRow][newCol] = mat[i][j];
        }
    }
    
    return result;
}