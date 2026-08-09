#include <stdlib.h>
#include <math.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    

    int w = (int)sqrt(area);
    

    while (area % w != 0) {
        w--;
    }
    
    int l = area / w;
    
    result[0] = l;
    result[1] = w;
    
    return result;
}