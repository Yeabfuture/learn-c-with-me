#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomGenerator(int lowerBound, int upperBound);
void luckChecker(int luckyNumber);

int main(void)
{
    int luckyNumber =0;
    int lowerBound =0;
    int upperBound =0;

    printf("Enter your lower and upper boundary separated by space: ");
    scanf("%d %d", &lowerBound, &upperBound);
    
    luckyNumber = randomGenerator(lowerBound, upperBound);
    luckChecker(luckyNumber);
    printf("Lucky number was %d", luckyNumber);
}

int randomGenerator(int lowerBound, int upperBound)
{
    srand(time(0));
    int generatedNumber = rand() % (upperBound-lowerBound + 1) + lowerBound;
    return generatedNumber;
}

void luckChecker(int luckyNumber)
{
    int round = 4;
    int userGuess =0;

    do
    {
        printf("Enter your lucky number:\n");
        scanf("%d", &userGuess);

    if(userGuess == luckyNumber)
    {
        printf("Congrats, You won!");
    }
    else if(userGuess >luckyNumber)
    {   
        printf("Your guess is greater than the lucky number \n");
    }

    else if(userGuess<luckyNumber)
    {
        printf("Your guess is less than the lucky number \n");
    }
    round--;
    } 
    while(round>0 && userGuess !=luckyNumber);
   
}