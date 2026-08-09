#include <stdlib.h>

int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    *returnSize = n;
    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    int** matrix = (int**)malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }
    
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    int num = 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
    
    return matrix;
}