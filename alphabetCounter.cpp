#include <stdio.h>
#include <ctype.h>  

int main() {
    char input[100];  // Array to hold the user input
    int alphabets = 0, spaces = 0, specialChars = 0;

    // Asking for user input
    printf("Enter a string (up to 100 characters): ");
    fgets(input, sizeof(input), stdin);  // Using fgets to safely read the input string

    // Loop through each character of the input
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            // If the character is an alphabet (A-Z or a-z)
            alphabets++;
        } else if (isspace(input[i])) {
            // If the character is a space
            spaces++;
        } else if (ispunct(input[i]) || isdigit(input[i])) {
            // If the character is a special character (punctuation or digits)
            specialChars++;
        }
    }

    // Output the results using printf (C-style output)
    printf("Alphabets: %d\n", alphabets);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", specialChars);

    return 0;
}
