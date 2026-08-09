#include <limits.h>

int maxSum(int** grid, int gridSize, int* gridColSize) {
    int max_sum = INT_MIN;
    int rows = gridSize;
    int cols = gridColSize[0];


    for (int i = 0; i < rows - 2; i++) {
        for (int j = 0; j < cols - 2; j++) {

            int current_sum = grid[i][j]   + grid[i][j+1]   + grid[i][j+2] + 
                                             grid[i+1][j+1]                + 
                             grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2]; 

            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}