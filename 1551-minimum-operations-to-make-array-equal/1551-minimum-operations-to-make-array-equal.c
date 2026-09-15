#include <math.h>
int minOperations(int n) {
    int count = 0;
    int arr[n]; 
    for(int i = 0 ;i<n;i++){
        arr[i] = (2*i)+1;
    }
    count = pow(n,2)/4;
    return count;
}