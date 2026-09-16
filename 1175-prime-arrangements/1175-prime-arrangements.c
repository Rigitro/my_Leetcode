#include <math.h>
int numPrimeArrangements(int n) {
    int count = 0;
    int num[101];
    for(int i = 1;i<=n;i++){
        num[i]=i;
    }
    for(int i =1;i<=n;i++){
        if(num[i]<=1){
            continue;
        }
        int isprime = 1;
            
        for(int j=2;j<=sqrt(num[i]);j++){
            if(num[i]%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            count++;
        }
    }
    int count2 = n-count;
    long long sum1=1;
    long long sum2=1;
    long long mod = 1000000007;
    for(int i=1;i<=count;i++){
    sum1=(sum1*i)% mod;
    }
    for(int i=1;i<=count2;i++){
    sum2=(sum2*i)%mod;
    }
    long long sum = (sum1*sum2)%mod;
    return (int)sum;
}