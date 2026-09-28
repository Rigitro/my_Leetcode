int findDuplicate(int* nums, int numsSize) {
    int tortoise = nums[0];
    int rabbit = nums[0];

    do{
        tortoise = nums[tortoise];
        rabbit = nums[nums[rabbit]];
    }while(tortoise!= rabbit);
    
    tortoise = nums[0];

    while(tortoise != rabbit){
        rabbit = nums[rabbit];
        tortoise = nums[tortoise];
    }
    return tortoise;
}