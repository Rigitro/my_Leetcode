int countSymmetricIntegers(int low, int high) {
    int symm=0;
    for(int i=low;i<=high;i++){
        int len=0;
        int temp=i;
        do{
            len++;
            temp=temp/=10;
        }while(temp>0);

        if(len%2!=0){
            continue;
        }
         temp = i;
        int half_len = len / 2;
        int right_sum = 0;
        int left_sum = 0;

        for (int j = 0; j < half_len; j++) {
            right_sum += temp % 10;
            temp /= 10;
        }

        for (int j = 0; j < half_len; j++) {
            left_sum += temp % 10;
            temp /= 10;
        }

        if (left_sum == right_sum) {
            symm++;
        }
    }
    return symm;
}
