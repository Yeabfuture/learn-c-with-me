/*
Precedence function (return int and accept string)

// return values 1(+&-) 2(*&/) 3(^) and -1 for error

Error handling

Input:

A single-character string representing a mathematical operator.
Output:

An integer indicating the operator's precedence.
An error message if the operator is invalid.
*/

#include <stdio.h>
#include <string.h>

int precedence(char mychar)
{
    if(mychar == '+' || mychar == '-')
    {
        return 1;
    }
    else if(mychar == '*' || mychar ==  '/' )
    {
        return 2;
    }
    else if(mychar == '^')
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
    char userInput[2];
    if(fgets(userInput, sizeof(userInput),stdin))
    {
        char operator = userInput[0]; 

        if(precedence(operator) != -1)
        {
            printf("The precedence of '%s' is: %d\n",userInput,precedence(operator));
        }
        else
        {
            printf("Error: '%s' is not a valid operator.\n",userInput);
        }
    }

    else
    {
        return 0;
    }

    return 0;
}