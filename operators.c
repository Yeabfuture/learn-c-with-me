#include <stdio.h>  
#include <string.h>  

int precedence(char mychar)  
{  
    if (mychar == '+' || mychar == '-')  
    {  
        return 1;  
    }  
    else if (mychar == '*' || mychar == '/')  
    {  
        return 2;  
    }  
    else if (mychar == '^')  
    {  
        return 3;  
    }  
    else  
    {  
        return -1;  
    }  
}  
  
int main(void)  
{  
    char userInput[10];  // Allow room for operator and newline character
  
    if (fgets(userInput, sizeof(userInput), stdin))  
    {  
        // Trim newline character if present
        size_t len = strlen(userInput);
        if (len > 0 && userInput[len - 1] == '\n') {
            userInput[len - 1] = '\0';
        }

        // Check for valid operator length
        if (strlen(userInput) != 1) {
            printf("Error: '%s' is not a valid operator.\n", userInput);
        } else {
            char operator = userInput[0];
            int result = precedence(operator);

            if (result != -1)  
            {  
                printf("The precedence of '%c' is: %d\n", operator, result);  
            }  
            else  
            {  
                printf("Error: '%s' is not a valid operator.\n", userInput);  
            }
        }
    }  
    else  
    {  
        printf("Error: invalid input.\n");
    }  
  
    return 0;  
}
