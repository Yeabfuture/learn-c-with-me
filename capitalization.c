#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_punctuation(char c) {
    // Return true if the character is a punctuation mark that may follow a sentence
    return c == '.' || c == '!' || c == '?' || c == ',' || c == ';' || c == ':' || c == '\'' || c == '"';
}

void capitalize_string(char *str) {
    int i = 0;
    int length = strlen(str);
    int capitalize_next = 1;  // Flag to track when to capitalize

    while (i < length) {
        // Check if we need to capitalize the character
        if (isspace(str[i]) || is_punctuation(str[i])) {
            // If the character is a punctuation mark, set flag to capitalize the next character
            if (is_punctuation(str[i])) {
                capitalize_next = 1;
            }
        } else {
            // Capitalize the first character that needs to be capitalized
            if (capitalize_next && islower(str[i])) {
                str[i] = toupper(str[i]);
                capitalize_next = 0;  // Reset flag, no more capitalization unless after punctuation
            }
            // Special case for lowercase 'i' surrounded by spaces or punctuation
            else if (str[i] == 'i' && (i == 0 || isspace(str[i-1]) || is_punctuation(str[i-1])) && (i == length - 1 || isspace(str[i+1]) || is_punctuation(str[i+1]))) {
                str[i] = 'I';
            }
        }
        i++;
    }
}

int main() {
    char str[1000];

    // Get input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove the newline character if present

    // Capitalize the string
    capitalize_string(str);

    // Display the result
    printf("Capitalized string: %s\n", str);

    return 0;
}
