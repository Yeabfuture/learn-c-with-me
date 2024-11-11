#include <stdio.h>
#include <ctype.h>

void sortingNumbers(int sortedNumber[], int numberOfItems);
int numberOfItems = 3;

int main(void)
{
    int firstNum = 0, secondNum = 0, thirdNum = 0;
    int sortedNumbers[numberOfItems];

    printf("Enter the first number: \n");
    if (scanf("%d", &firstNum) == 1)
    {
        printf("Enter the second number: \n");
        if (scanf("%d", &secondNum) == 1)
        {
            printf("Enter the third number: \n");
            if (scanf("%d", &thirdNum) == 1)
            {
                sortedNumbers[0] = firstNum;
                sortedNumbers[1] = secondNum;
                sortedNumbers[2] = thirdNum;

                sortingNumbers(sortedNumbers, numberOfItems);

                printf("The numbers in sorted order are: %d %d %d.\n", sortedNumbers[0], sortedNumbers[1], sortedNumbers[2]);
            }
        }
    }

    return 0;
}

void sortingNumbers(int sortedNumber[], int numberOfItems)
{
    for (int i = 0; i < numberOfItems - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < numberOfItems; j++) {
            if (sortedNumber[j] < sortedNumber[min_idx]) {
                min_idx = j;
            }
        }

        int temp = sortedNumber[min_idx];
        sortedNumber[min_idx] = sortedNumber[i];
        sortedNumber[i] = temp;
    }
}
