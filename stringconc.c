#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(char a, char b) {
    if (isdigit(a) && isdigit(b)) return a - b;
    if (isdigit(a)) return -1;
    if (isdigit(b)) return 1;
    if (isupper(a) && isupper(b)) return a - b;
    if (isupper(a)) return -1;
    if (isupper(b)) return 1;
    return a - b;
}

int isValidInput(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i])) {
            return 0; // Invalid character found
        }
    }
    return 1; // Valid input
}

void mergeStrings(const char *str1, const char *str2, char *result) {
    int freq[128] = {0};
    int idx = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (!freq[(int)str1[i]]) {
            result[idx++] = str1[i];
            freq[(int)str1[i]] = 1;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (!freq[(int)str2[i]]) {
            result[idx++] = str2[i];
            freq[(int)str2[i]] = 1;
        }
    }

    result[idx] = '\0';
    for (int i = 0; i < idx - 1; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (compare(result[i], result[j]) > 0) {
                char temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main() {
    char str1[101], str2[101], result[202];

    if (scanf("%s %s", str1, str2) != 2) {
        printf("Wrong Input!\n");
        return 1;
    }

    if (!isValidInput(str1) || !isValidInput(str2)) {
        printf("Wrong Input!\n");
        return 1;
    }

    mergeStrings(str1, str2, result);
    printf("%s\n", result);
    
    return 0;
}
