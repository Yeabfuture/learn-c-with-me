/*
Description
The main goal of this code is change Celsius to Fahrenheit and vise versa

Rules
 There are 2 numbers for each line of input (altogether 3 lines), the first number is 1 or 2, deciding the type of conversion: 2 means Celsius to Fahrenhei, 1 means Fahrenheit to Celsius; the second number is the value to be converted. 
  For each line of input, output the converted value（keep 2 digits after the decimal point）.

Input
1  -30↵
2  0↵
3  98↵

Output
The Centigrade is -34.44↵
The Fahrenheit is 32.00↵
Wrong input!↵

Pseudo code
1. Accept both numbers and validate each as int and float value accordingly.
2. Check if the first input is between 1 and 2
3. If if its one call the function that converts Fahrenheit to centigrade
4. If its two call the function that changes centigrade to Fahrenheit.
5. Otherwise show Wrong Input.
6. If the 1st function is called, we deduct 32 from the given input and multiply it with 5/9
7. If the 2nd function is called we multiply the given number with 9/5 and then add 32 to it.
*/

#include <stdio.h>

float fahrenheitToCentigrade(float tempratureValue);
float CentigradeToFahrenheit(float tempratureValue);

#define FAHRENHEITSCALE 9.0/5.0
#define CENTIGRADESCALE 5.0/9.0

int main(void)

{
    float temperatureValue =0;
    int userChoice =0;
    int numOfExecution = 0;

    while(numOfExecution <3)
    {
    if(scanf("%d %f", &userChoice, &temperatureValue) == 2)
    {
        if(userChoice == 1)
        {
            float convertedValue = fahrenheitToCentigrade(temperatureValue);
            printf("The Centigrade is %.2f\n", convertedValue);
        }

        else if(userChoice == 2)
        {
            float convertedValue = CentigradeToFahrenheit(temperatureValue);
            printf("The Fahrenheit is %.2f\n", convertedValue);
        }

        else
        {
            printf("Wrong input!\n");
        }
    }
    else
    {
        printf("Invalid Input!");
    }
    numOfExecution++;
    }
    

}

float fahrenheitToCentigrade(float temperatureValue)
{
    float convertedToCentigrade = CENTIGRADESCALE * (temperatureValue - 32);
    return convertedToCentigrade;
}

float CentigradeToFahrenheit(float temperatureValue)
{
    float convertedToFahrenheit = (FAHRENHEITSCALE * temperatureValue) +32;
    return convertedToFahrenheit;
}
