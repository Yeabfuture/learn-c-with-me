#include <stdio.h>
#include <string.h>

int romanToInt(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int convertRomanToInt(const char *roman) {
    if (*roman == '\0') {
        return 0;
    }
    int current = romanToInt(*roman);
    int next = romanToInt(*(roman + 1));
    if (current < next) {
        return (next - current) + convertRomanToInt(roman + 2);
    } else {
        return current + convertRomanToInt(roman + 1);
    }
}

int main() {
    char roman[100];
    scanf("%s", roman);
    int result = convertRomanToInt(roman);
    printf("%d\n", result);
    return 0;
}
