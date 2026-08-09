/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {

    double* result = (double*)malloc(2 * sizeof(double));
    

    *returnSize = 2;
    

    result[0] = celsius + 273.15;
    

    result[1] = celsius * 1.80 + 32.00;
    

    return result;
}