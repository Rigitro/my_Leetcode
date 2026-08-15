/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* closestDivisors(int num, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = (int)sqrt(num + 2); i >= 1; i--) {
        
        if ((num + 1) % i == 0) {
            result[0] = i;
            result[1] = (num + 1) / i;
            return result;
        }
        if ((num + 2) % i == 0) {
            result[0] = i;
            result[1] = (num + 2) / i;
            return result;
        }
    }
    
    return result;
}
