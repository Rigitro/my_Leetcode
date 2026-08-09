#include <stdlib.h>

int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = *matrixColSize;
    
    int* rowMins = (int*)malloc(rows * sizeof(int));
    int* colMaxs = (int*)malloc(cols * sizeof(int));
    
    for (int i = 0; i < rows; i++) {
        rowMins[i] = 100001;
    }
    for (int j = 0; j < cols; j++) {
        colMaxs[j] = 0;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < rowMins[i]) {
                rowMins[i] = matrix[i][j];
            }
            if (matrix[i][j] > colMaxs[j]) {
                colMaxs[j] = matrix[i][j];
            }
        }
    }
    
    int maxLuckyCount = rows < cols ? rows : cols;
    int* result = (int*)malloc(maxLuckyCount * sizeof(int));
    int count = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == rowMins[i] && matrix[i][j] == colMaxs[j]) {
                result[count++] = matrix[i][j];
            }
        }
    }
    
    free(rowMins);
    free(colMaxs);
    
    *returnSize = count;
    return result;
}
    
