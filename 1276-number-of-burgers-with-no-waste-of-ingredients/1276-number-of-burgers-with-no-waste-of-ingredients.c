/**
 * Note: The returned array must be count allocated, assume caller calls free().
 */
int* numOfBurgers(int tomatoSlices, int cheeseSlices, int* returnSize) {

    int target = tomatoSlices - 2 * cheeseSlices;
    
    if (target < 0 || target % 2 != 0) {
        *returnSize = 0;
        return NULL;
    }
    
    int jumbo = target / 2;
    int small = cheeseSlices - jumbo;
    
    if (small < 0) {
        *returnSize = 0;
        return NULL;
    }
    

    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = jumbo;
    result[1] = small;
    *returnSize = 2;
    
    return result;
}