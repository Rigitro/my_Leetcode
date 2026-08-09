#include <stdbool.h>
#include <math.h>


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int maxPrime = 0;
    
    for (int i = 0; i < numsSize; i++) {

        int p1 = nums[i][i];
        if (p1 > maxPrime && isPrime(p1)) {
            maxPrime = p1;
        }
        

        int p2 = nums[i][numsSize - 1 - i];
        if (p2 > maxPrime && isPrime(p2)) {
            maxPrime = p2;
        }
    }
    
    return maxPrime;
}