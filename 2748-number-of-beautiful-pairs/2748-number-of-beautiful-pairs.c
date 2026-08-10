int countBeautifulPairs(int* nums, int numsSize) {
    int ans=0;
    for(int i=0;i<numsSize-1;i++){
        int a=nums[i];
        while(a>=10){
            a/=10;
        }
        for(int j=i+1;j<numsSize;j++){
            int b=nums[j]%10;
            int x=a;
            int y=b;
            while(y!=0){
                int temp=y;
                y=x%y;
                x=temp;
            }
            if(x==1){
                ans++;
            }
        }
    }
    return ans;
}