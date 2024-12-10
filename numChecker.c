#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int isInteger(const char *str) {
    while (*str == ' ' || *str == '\t') {
        str++;
    }

    if (*str == '\0') {
        return 0;
    }

    if (*str == '+' || *str == '-') {
        str++;
    }

    if (*str == '\0') {
        return 0;
    }

    while (*str != '\0') {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }

    return 1;
}

int main() {
    char input[100];
    
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    if (isInteger(input)) {
        printf("That string represents an integer.\n");
    } else {
        printf("That string does not represent an integer.\n");
    }

    return 0;
}
