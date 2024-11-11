#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char numbers[50];
    int num = 0;

    // // Read input string from stdin
    // fgets(numbers, sizeof(numbers), stdin);

    // // Process each character in the input string
    // for(int i = 0; i < sizeof(numbers) && numbers[i] != '\0'; i++)
    // {
    //     // Check if the character is a digit
    //     if (isdigit(numbers[i])) 
    //     {
    //         num = numbers[i] - '0';  // Convert character to integer
    //         printf("%d", num);
    //     }
    // }

    scanf("%d", &num);
    printf("%d", num);
    
    return 0;
}
