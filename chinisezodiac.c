/*
Description
The main goal of this program is to accept the year as int and determine the Chinese zodiac.

Rules
Its a 12 years cycle
Should validate if the year is greater than or equal to 0.

Input
A single integer representing the year.

Output
A message in the format: "[year] is the year of the [animal].

Pseudo code
1. Accept an int, validate it.
2. Divide the int and take the reminder
3. Create array of strings which contain the 12 zodiac signs.
4. Find the the zodiac name using the reminder as index.
5. Print it.

*/

#include <stdio.h>

int main(void)
{
    int year = 0, index = 0;
    char zodiacs[12][10] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox" , "Tiger" , "Hare" , "Dragon" , "Snake" , "Horse","Sheep"};

    if((scanf("%d", &year) == 1) && year >= 0)
    {
        index = year%12;
        printf("%d is the year of the %s.\n", year, zodiacs[index]);
    }
    return 0;
}

