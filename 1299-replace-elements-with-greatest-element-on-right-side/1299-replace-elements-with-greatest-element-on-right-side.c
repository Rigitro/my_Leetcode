/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {

    *returnSize = arrSize;
    
    int* result = (int*)malloc(arrSize * sizeof(int));
    if (result == NULL) return NULL; 


    int maxSoFar = -1;


    for (int i = arrSize - 1; i >= 0; i--) {
        int originalValue = arr[i]; 
        result[i] = maxSoFar;       
        if (originalValue > maxSoFar) {
            maxSoFar = originalValue; 
        }
    }

    return result;
}