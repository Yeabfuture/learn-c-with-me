/*
Function fraction (numerator ,denominator)
{
return num,den
}

Input:

Two positive integers representing the numerator and denominator of a fraction.
Output:

The numerator and denominator of the reduced fraction.
*/

#include <stdio.h>

int factoring(int num, int den, int *numfactor, int *denfactor);

int main(void)
{
    int numerator = 0, denominator = 0, numfactor, denfactor;

    if(scanf("%d,%d", &numerator,&denominator) ==2 && numerator >=0 && denominator >=0)
    {
        if(denominator !=0)
        {
            if(numerator == 0)
            {
                printf("%d/%d can be reduced to 0/1.\n", numerator, denominator);
            }
            else
            {
                int gcd = factoring(numerator, denominator, &numfactor, &denfactor);

                printf("%d/%d can be reduced to %d/%d.\n", numerator, denominator, numfactor, denfactor);
            }
        }
        else
        {
            printf("Denominator cannot be zero.\n");
        }
    }


    return 0;
}

int factoring(int num, int den, int *numfactor, int *denfactor)
{
    int result = (num < den) ? num : den;

    while (result > 0)
    {
        if (num % result == 0 && den % result == 0)
        {
            break;
        }
        result--;
    }

    *numfactor = num / result;
    *denfactor = den / result;

    return result; 
}

