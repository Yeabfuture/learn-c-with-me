#include <stdio.h>
int main(void) {
    int num;
    int maxPrime = 0;
    if(scanf("%d", &num)==1)
    {
        for (int i = 2; i <= num+1; i++) {
        int isPrime = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    printf("The max prime number is %d.\n", maxPrime);
    return 0;
    }
    
}
