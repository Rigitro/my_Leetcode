#include <stdlib.h>

#define EMPTY 0
#define GUARD 1
#define WALL 2
#define GUARDED 3

int countUnguarded(int m, int n, int** guards, int guardsSize, int* guardsColSize, int** walls, int wallsSize, int* wallsColSize) {

    int** grid = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        grid[i] = (int*)calloc(n, sizeof(int));
    }


    for (int i = 0; i < guardsSize; i++) {
        grid[guards[i][0]][guards[i][1]] = GUARD;
    }

    for (int i = 0; i < wallsSize; i++) {
        grid[walls[i][0]][walls[i][1]] = WALL;
    }

    int dX[] = {-1, 0, 1, 0};
    int dY[] = {0, 1, 0, -1};

    for (int i = 0; i < guardsSize; i++) {
        for (int d = 0; d < 4; d++) {

            int r = guards[i][0] + dX[d];
            int c = guards[i][1] + dY[d];

            while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] != GUARD && grid[r][c] != WALL) {
                grid[r][c] = GUARDED;
                r += dX[d];
                c += dY[d];
            }
        }
    }

    int unguardedCount = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == EMPTY) {
                unguardedCount++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        free(grid[i]);
    }
    free(grid);

    return unguardedCount;
}
