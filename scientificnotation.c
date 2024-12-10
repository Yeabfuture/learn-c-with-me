#include <stdio.h>
#include <stdlib.h>

int main() {
    char scientificNotation[100];
    double number;

    // Read the input
    fgets(scientificNotation, sizeof(scientificNotation), stdin);

    // Remove spaces from the input string
    char cleanedInput[100];
    int j = 0;
    for (int i = 0; scientificNotation[i] != '\0'; i++) {
        if (scientificNotation[i] != ' ') {
            cleanedInput[j++] = scientificNotation[i];
        }
    }
    cleanedInput[j] = '\0';  // Null-terminate the cleaned string

    // Parse the cleaned string into a double
    if (sscanf(cleanedInput, "%lf", &number) == 1) {
        // Print the number with exactly 8 digits after the decimal point
        printf("%.8f\n", number);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
