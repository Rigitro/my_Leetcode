bool isMonotonic(int* nums, int numsSize) {
    bool increase = true;
    bool decrease = true;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]>nums[i+1]){
            decrease = false;
        }
        if(nums[i]<nums[i+1]){
            increase = false;
        }
    }
    return increase || decrease;
}