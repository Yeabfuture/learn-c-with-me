#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if the password is good
int is_good_password(char* password) {
    int length = strlen(password);

    // Check if password length is at least 8 characters
    if (length < 8) {
        return 0;  // Bad password if length is less than 8
    }

    int has_upper = 0, has_lower = 0, has_digit = 0;

    // Check for at least one uppercase letter, one lowercase letter, and one digit
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        }
    }

    // Password is good if all conditions are met
    if (has_upper && has_lower && has_digit) {
        return 1;
    }

    return 0;  // Bad password if any condition is not met
}

int main() {
    char password[101];  // To hold the password string (up to 100 characters)

    // Input the password
    scanf("%100[^\n]", password); // To allow spaces in the password

    // Check if it's a good password
    if (is_good_password(password)) {
        printf("Good password!\n");
    } else {
        printf("Bad password!\n");
    }

    return 0;
}
