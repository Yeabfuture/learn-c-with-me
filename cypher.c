#include <stdio.h>
#include <ctype.h>

int main(void) {
    int mode = 0, key = 0;
    char message[50];
    int exit = 1;

    while (exit != 0) {
        if (scanf("%d", &mode) != 1) {
            printf("Wrong Input. Input Again.\n");
            while (getchar() != '\n'); // Clear the buffer
            continue;
        }

        if (mode == 0) {
            exit = 0;
            break;
        }

        if (scanf("%d %[^\n]", &key, message) != 2) {
            printf("Wrong Input. Input Again.\n");
            while (getchar() != '\n'); // Clear the buffer
            continue;
        }

        // Edge Case: Handle large key values by using modulo operation
        key = key % 26;

        // Edge Case: Handle negative keys
        if (key < 0) {
            printf("Wrong Input. Input Again.\n");
            continue;
        }

        // Edge Case: Handle empty message
        if (message[0] == '\0') {
            printf("Wrong Input. Input Again.\n");
            continue;
        }

        switch (mode) {
            case 1: // Encryption
                for (int i = 0; message[i] != '\0'; i++) {
                    if (isalpha(message[i])) {
                        char base = isupper(message[i]) ? 'A' : 'a';
                        message[i] = (message[i] - base + key) % 26 + base;
                    }
                }
                printf("%d %s\n", key, message);
                break;

            case 2: // Decryption
                for (int i = 0; message[i] != '\0'; i++) {
                    if (isalpha(message[i])) {
                        char base = isupper(message[i]) ? 'A' : 'a';
                        message[i] = (message[i] - base - key + 26) % 26 + base;
                    }
                }
                printf("%d %s\n", key, message);
                break;

            default:
                printf("Wrong Input. Input Again.\n");
                break;
        }
    }

    return 0;
}
