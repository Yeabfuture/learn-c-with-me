/*
Description:
The main aim of this program is to accept ages from the user and calculate the total admission price for a zoo.

Rules
1. Guests 2 years of age and less are admitted without charge. 
2. Children between 3 and 12 years of age cost $14.00. 
3. Seniors aged 65 years and over cost $18.00. 
4. Admission for all other guests is $23.00.
5. One age entered on each line.
6. The user will enter a blank line to indicate that there are no more guests in the group. 
7. The cost should be displayed using two decimal places.
8. Inputs should be int.

Input
A series of integers, each representing the age of a guest.
A blank line to indicate the end of input.

Output:

A single line displaying the total cost in the format "The total for that group is $X.XX".

Pseudo code
1. Accept inputs and validate if the user has input.
2. If the user has input check if its int.
3. check the group which the age belongs. 
4. Add the value assigned to that user to the sum.
5. If the input is blank, cast the int to float. 
6. Print in two decimal.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float priceCalculator(int age);

int main(void)
{
    char userInput[100];
    int guestAge[100];
    int age = 0;
    int counter = 0;
    float totalPrice = 0;

    while(1)
    {
        printf("Enter the age of the guest (blank to finish):\n");
        fgets(userInput,sizeof(userInput),stdin);
        if(strcmp(userInput, "\n") == 0)
        {
            break;
        }
        age = atoi(userInput);
        guestAge[counter++] = age;
    }

    for(int i=0; i<counter; i++)
    {
        float tempPrice = priceCalculator(guestAge[i]);
        totalPrice += tempPrice;
        tempPrice = 0;
    }

    printf("The total for that group is $%.2f\n",totalPrice);

    return 0;
}

float priceCalculator(int age)
{
    if(age <= 2 && age >0) {
        return 0;
    }
    else if(age >=3 && age<=12)
    {
        return 14.0;
    }
    else if(age >= 13 && age <=64)
    {
        return 23.00;
    }
    else if (age >=65)
    {
        return 18.0;
    }
    else
    {
        printf("Invalid Input");
        return 0.0;
    }
}
