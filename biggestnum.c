#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Comparator function for sorting digits in descending order
int compare(const void* a, const void* b) {
    return (*(char*)b - *(char*)a); // For descending order
}

int main() {
    char number[11]; // To hold the number as a string (maximum 10 digits)
    
    // Input the number as a string
    scanf("%10s", number);

    int length = strlen(number);

    // Sort the digits in descending order
    qsort(number, length, sizeof(char), compare);

    // Print the largest number formed by the sorted digits
    printf("%s\n", number);

    return 0;
}
