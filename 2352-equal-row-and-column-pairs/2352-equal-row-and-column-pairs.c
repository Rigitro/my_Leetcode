#include <stdbool.h>

int equalPairs(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    int n = gridSize;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool isEqual = true;
            

            for (int k = 0; k < n; k++) {
                if (grid[i][k] != grid[k][j]) {
                    isEqual = false;
                    break;
                }
            }

            if (isEqual) {
                count++;
            }
        }
    }

    return count;
}