int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize;
    int cols = gridColSize[0];
    
    for (int i = 0; i < rows; i++) {
        qsort(grid[i], cols, sizeof(int), cmp);
    }
    
    int total = 0;
    for (int j = 0; j < cols; j++) {
        int max_val = 0;
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] > max_val) {
                max_val = grid[i][j];
            }
        }
        total += max_val;
    }
    
    return total;
}