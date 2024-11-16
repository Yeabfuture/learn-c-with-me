#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to convert a string to uppercase
void to_uppercase(char* plate) {
    for (int i = 0; plate[i] != '\0'; i++) {
        plate[i] = toupper(plate[i]);
    }
}

// Function to check if a string is a valid older style license plate (3 letters + 3 digits)
int is_older_style(char* plate) {
    // Length should be 6 characters
    if (strlen(plate) != 6) {
        return 0;
    }

    // First 3 characters should be uppercase letters
    for (int i = 0; i < 3; i++) {
        if (!isupper(plate[i])) {
            return 0;
        }
    }

    // Last 3 characters should be digits
    for (int i = 3; i < 6; i++) {
        if (!isdigit(plate[i])) {
            return 0;
        }
    }

    return 1; // Valid older style plate
}

// Function to check if a string is a valid newer style license plate (4 digits + 3 letters)
int is_newer_style(char* plate) {
    // Length should be 7 characters
    if (strlen(plate) != 7) {
        return 0;
    }

    // First 4 characters should be digits
    for (int i = 0; i < 4; i++) {
        if (!isdigit(plate[i])) {
            return 0;
        }
    }

    // Last 3 characters should be uppercase letters
    for (int i = 4; i < 7; i++) {
        if (!isupper(plate[i])) {
            return 0;
        }
    }

    return 1; // Valid newer style plate
}

int main() {
    char plate[8]; // To hold the license plate string (max length 7 for newer style)

    // Input the license plate
    scanf("%7s", plate);

    // Convert the plate to uppercase to handle case insensitivity
    to_uppercase(plate);

    // Check if it's an older or newer style plate
    if (is_older_style(plate)) {
        printf("The plate is a valid older style plate.\n");
    } else if (is_newer_style(plate)) {
        printf("The plate is a valid newer style plate.\n");
    } else {
        printf("The plate is not valid.\n");
    }

    return 0;
}
