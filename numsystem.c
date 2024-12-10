#include <stdio.h>
#include <stdlib.h>

void convertToBase(int num, int base, char* result) {
    char digits[] = "0123456789ABCDEF";
    int index = 0;
    char temp[32]; 

    while (num > 0) {
        temp[index++] = digits[num % base];
        num /= base;
    }
    temp[index] = '\0';
    
    for (int i = 0; i < index; i++) {
        result[i] = temp[index - i - 1];
    }
    result[index] = '\0';
}

int main() {
    int decimal, base;
    char result[32];

    scanf("%d", &decimal);
    scanf("%d", &base);
    
    if (decimal < 0 || base < 2 || base > 16) {
        return 1;
    }
    
    convertToBase(decimal, base, result);
    printf("%d in %d based system is %s\n", decimal, base, result);
    
    return 0;
}
