#include <stdio.h>
#include <stdlib.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to simplify a fraction
void simplify(int* numerator, int* denominator) {
    int gcd_val = gcd(abs(*numerator), abs(*denominator));
    *numerator /= gcd_val;
    *denominator /= gcd_val;
}

// Function to add two fractions
void add_fractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * den2 + num2 * den1;
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);
    
    if (denominator == 1) {
        printf("%d\n", numerator); // Simplified to an integer
    } else {
        printf("%d/%d\n", numerator, denominator);
    }
}

// Function to subtract two fractions
void subtract_fractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * den2 - num2 * den1;
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);

    if (denominator == 1) {
        printf("%d\n", numerator); // Simplified to an integer
    } else {
        printf("%d/%d\n", numerator, denominator);
    }
}

// Function to multiply two fractions
void multiply_fractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * num2;
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);
    
    if (denominator == 1) {
        printf("%d\n", numerator); // Simplified to an integer
    } else {
        printf("%d/%d\n", numerator, denominator);
    }
}

// Function to divide two fractions
void divide_fractions(int num1, int den1, int num2, int den2) {
    // Division of fractions is multiplication by the reciprocal
    int numerator = num1 * den2;
    int denominator = den1 * num2;
    simplify(&numerator, &denominator);
    
    if (denominator == 1) {
        printf("%d\n", numerator); // Simplified to an integer
    } else {
        printf("%d/%d\n", numerator, denominator);
    }
}

int main() {
    int num1, den1, num2, den2;
    char operator;
    
    // Input two fractions and operator
    scanf("%d/%d %c %d/%d", &num1, &den1, &operator, &num2, &den2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("%d/%d + %d/%d = ", num1, den1, num2, den2);
            add_fractions(num1, den1, num2, den2);
            break;
        case '-':
            printf("%d/%d - %d/%d = ", num1, den1, num2, den2);
            subtract_fractions(num1, den1, num2, den2);
            break;
        case '*':
            printf("%d/%d * %d/%d = ", num1, den1, num2, den2);
            multiply_fractions(num1, den1, num2, den2);
            break;
        case '/':
            printf("%d/%d / %d/%d = ", num1, den1, num2, den2);
            divide_fractions(num1, den1, num2, den2);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
