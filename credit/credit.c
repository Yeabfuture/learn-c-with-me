#include <stdio.h>
#include <stdbool.h>

// Function prototypes
bool creditCardChecker(long creditCardNumber);
void creditCardIdentifier(bool isValidNumber, long creditCardNumber);

int main(void)
{
    long creditCardNumber;
    printf("Enter your credit card details here: ");
    scanf("%ld", &creditCardNumber);

    if (creditCardChecker(creditCardNumber))
    {
        creditCardIdentifier(true, creditCardNumber);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

bool creditCardChecker(long creditCardNumber)
{
    bool isValid = false;
    int sumOfEvenDigits = 0;
    int sumOfOddDigits = 0;
    int finalSum = 0;
    int numberOfDigits = 0;
    long tempNumber = creditCardNumber;

    // Iterate over the digits from right to left
    for (int i = 0; tempNumber > 0; i++, tempNumber /= 10)
    {
        int currentDigit = tempNumber % 10;
        numberOfDigits++;

        if (i % 2 == 0)
        {
            // Add the odd-positioned digit to the sum
            sumOfOddDigits += currentDigit;
        }
        else
        {
            // Double the even-positioned digit
            int doubledDigit = currentDigit * 2;

            // If doubling the digit results in a number greater than 9, sum its digits
            if (doubledDigit > 9)
            {
                doubledDigit = (doubledDigit % 10) + 1;
            }
            sumOfEvenDigits += doubledDigit;
        }
    }

    // Final sum is the sum of the even and odd positioned digits
    finalSum = sumOfOddDigits + sumOfEvenDigits;

    // If the final sum is a multiple of 10 and the length is valid, the credit card is valid
    if (finalSum % 10 == 0)
    {
        if (numberOfDigits == 13 || numberOfDigits == 15 || numberOfDigits == 16)
        {
            isValid = true;
        }
    }

    return isValid;
}

void creditCardIdentifier(bool isValidNumber, long creditCardNumber)
{
    if (!isValidNumber)
    {
        printf("INVALID\n");
        return;
    }

    // Extract the first two digits of the credit card number
    long tempNumber = creditCardNumber;
    int firstDigit = -1;
    int secondDigit = -1;

    while (tempNumber > 0)
    {
        secondDigit = firstDigit;
        firstDigit = tempNumber % 10;
        tempNumber /= 10;
    }

    int numberOfDigits = 0;
    tempNumber = creditCardNumber;
    while (tempNumber > 0)
    {
        tempNumber /= 10;
        numberOfDigits++;
    }

    // Determine card type based on the first digit and the number of digits
    if (numberOfDigits == 13 && firstDigit == 4)
    {
        printf("VISA\n");
    }
    else if (numberOfDigits == 16 && firstDigit == 4)
    {
        printf("VISA\n");
    }
    else if (numberOfDigits == 16 && firstDigit == 5 && (secondDigit >= 1 && secondDigit <= 5))
    {
        printf("MASTERCARD\n");
    }
    else if (numberOfDigits == 15 && (firstDigit == 3 && (secondDigit == 4 || secondDigit == 7)))
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
