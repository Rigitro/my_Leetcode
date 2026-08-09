#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minOperations(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);
    
    int total_operations = 0;
    int i = 0;
    

    while (i < numsSize) {
        int start = i;
        

        while (i < numsSize && nums[i] == nums[start]) {
            i++;
        }
        
        int freq = i - start;
        

        if (freq == 1) {
            return -1;
        }
        

        total_operations += (freq + 2) / 3;
    }
    
    return total_operations;
}