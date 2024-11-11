/*

Description
The main aim of this code is to accept input fromm the user, add them and display as long as both of the inputs are not 0.

Rules
Must work with int separated by any number of spaces
Termination condition is only M=0 and N=0

Input
integer M and N, separated by one or more blanks.

Output
For each line of input, output the sum in another line. 

Test case
See the test cases. For instance, the first case means: input 1 10 [Enter]，display 55，input 2 11[Enter]，display 65，input 0 0[Enter]，the program stops

Pseudo Code
1. Accept two int values and validate they are not 0
2. As long as its not 0, add the numbers and display the result
3. If the values are zero, exit from the program.
*/

#include <stdio.h>
#include <stdbool.h>

bool inputValidator(int numFirst, int numSecond);
void sumCalculator(int numFirst, int numSecond);

int main(void)
{
    int numFirst, numSecond;
    char numbers[100];

    while (true)  
    {
        if(fgets(numbers, sizeof(numbers), stdin) != NULL)  // checking if the value collected by fget is correct value
        {
            if (sscanf(numbers, "%d %d", &numFirst, &numSecond) == 2)
                {
                    if (!inputValidator(numFirst, numSecond))  // Getting out of the loop if the function fails meaning either of the values are 0
                     {
                        break;
                     }
                    
                    sumCalculator(numFirst, numSecond); 
                }
        }

        else
        {
            break; // breaking out of the loop if fgets don't receive proper value
        }
    }

    return 0;
}

bool inputValidator(int numFirst, int numSecond)
{

    return !(numFirst == 0 && numSecond == 0);

}

void sumCalculator(int numFirst, int numSecond)
{
    int sum = 0; 

    if (numFirst > numSecond) 
    {
        int temp = numFirst;
        numFirst = numSecond;
        numSecond = temp;
    }
    for (int i = numFirst; i <= numSecond; i++)
    {
        sum += i;  
    }
    printf("%d\n", sum); 

}



