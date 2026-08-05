int alternateDigitSum(int n) {
    int sum =0;
    int digits[10];
    int count =0;
    while(n>0){
        digits[count]=n%10;
        n=n/10;
        count++;
    }
    int sign = 1;
    int total = 0;
    for(int i =count-1;i>=0;i--){
        total = total+  sign * digits[i];
        sign = -sign;
    }
    return total;

}