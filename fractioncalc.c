/*
Input：

    fraction1 operator fraction2

Output：

    1/3 + 1/2 = 5/6\n

Requirements：

The calculation results are expressed in fractions and are the simplest. For example, if the result is 2/6, it will be simplified to 1/3.

*/

#include <stdio.h>

int calculator(int numFirst, int denFirst, char opr, int numSec, int denSec,int *numfactor, int *denfactor)
{
    int result1 =0, result2=0;
    if(denFirst != 0 && denSec !=0)
    {
        if(opr == '+')
        {
            result1 = ((numFirst *denSec) + (numSec *denFirst));
            result2 = (denFirst*denSec);
        }
        else if(opr == '-')
        {
            result1 = ((numFirst *denSec) - (numSec *denFirst));
            result2 = (denFirst*denSec);
        }
        else if(opr == '*')
        {
            result1 = (numFirst *numSec);
            result2 = (denFirst*denSec);
        }
        else if(opr == '/')
        {
            result1 = (numFirst *denSec);
            result2 = (denFirst*numSec);
        }
    }

        *numfactor = result1;
    *denfactor = result2;
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

int main(void)
{

}