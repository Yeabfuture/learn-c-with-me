#include <stdio.h>

const float taxRate = 0.05f;
const float tipRate = 0.18f;

int main(void)
{
    float rawCost=0;
    float calculatedTaxAmount =0;
    float calculatedTipAmount =0;
    float totalCost =0;
    printf("Enter the cost of the meal: \n");
    if(scanf("%f", &rawCost) == 1)
    {
       calculatedTaxAmount = rawCost * taxRate;
       calculatedTipAmount = rawCost * tipRate;

       totalCost = rawCost + calculatedTaxAmount + calculatedTipAmount;
       printf("The tax is %.2f and the tip is %.2f, making the total %.2f.\n",calculatedTaxAmount,calculatedTipAmount,totalCost);
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}
