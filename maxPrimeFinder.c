#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int num;

    if (scanf("%d", &num) == 1 && num >= 0) {
        for (int i = num; i >= 2; i--) {
            if (isPrime(i)) {
                printf("The max prime number is %d.\n", i);
                return 0;
            }
        }
    }

    printf("No prime number found.\n");
    return 0;
}
