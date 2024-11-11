/* 
Description 
The main goal of this program is to accept the range from a user and print the special even numbers which satisfy given condition. 
 
Rules 
1. It must be in range of 4 digits. 
2. The execution must include the two ranges. 
3. The program should exit if the inputs are 0. 
4. To be a special even number the number must satisfy two conditions,  
    The number must be even. 
    All the digits must be unique. 
5. We should count the special even numbers in that range. 
 
Input 
Two int values as a range separated by space. 
 
Output 
List of all special even numbers separated by space and counter containing the number of special even numbers in that range. 
 
Pseudo Code 
 
1. Accept the range, validate them as int. 
2. Make sure the values are different than zero and the first number is less than the second one. 
3. Loop to each numbers and make sure if its even. 
3. If its even check if the numbers are unique. 
4. If its unique put them into array and count the occurrences. 
 
*/  
 
#include <stdio.h>  
#include <stdbool.h>  
 
#define MINRANGELIMIT 1000  
#define MAXRANGELIMIT 9999  
#define MAXNUMOFSPECIALEVENS 2296  
  
bool isEven(int number);  
bool uniqueDigitChecker(int number);  
bool isValidRange(int minRange, int maxRange);  
void processRange(int minRange, int maxRange, int specialEvens[], int *counter);  
void displaySpecialEvens(int specialEvens[], int counter);  
  
int main(void)  
{  
    int minRange = 0, maxRange = 0;  
    int specialEvens[MAXNUMOFSPECIALEVENS];  
    int specialEvensCounter = 0;  
    int rolls = 0;  
  
    while (true)  
    {  
        if (scanf("%d %d", &minRange, &maxRange) != 2 || (minRange == 0 && maxRange == 0) )  
        {  
            break;  
        }  
  
        /* else if(minRange == maxRange)  
        {  
           // printf("counter=1\n");  
          //  break;  
        }  */
        if (isValidRange(minRange, maxRange))  
        {  
            processRange(minRange, maxRange, specialEvens, &specialEvensCounter);  
            displaySpecialEvens(specialEvens, specialEvensCounter);  
        }  
        else  
        {  
            printf("Error\n");  
        }  
        rolls++;  
    }  
  
    return 0;  
}  
  
bool isValidRange(int minRange, int maxRange)  
{  
    return minRange >= MINRANGELIMIT && maxRange <= MAXRANGELIMIT && minRange <= maxRange;  
}  
  
void processRange(int minRange, int maxRange, int specialEvens[], int *counter)  
{  
    *counter = 0; // reset counter  
    for (int i = minRange; i <= maxRange; i++)  
    {  
        if (isEven(i) && uniqueDigitChecker(i))  
        {  
            specialEvens[*counter] = i;  
            (*counter)++;  
        }  
    }  
}  
  
bool isEven(int number)  
{  
    return number % 2 == 0;  
}  
  
bool uniqueDigitChecker(int number)  
{  
    int digitSeen[10] = {0}; // stores if digit was seen  
  
    while (number > 0)  
    {  
        int digit = number % 10;  
        if (digitSeen[digit] == 1)  
        {  
            return false;  
        }  
        digitSeen[digit] = 1;  
        number /= 10;  
    }  
  
    return true;  
}  
  
void displaySpecialEvens(int specialEvens[], int counter)  
{  
    for (int i = 0; i < counter; i++)  
    {  
        printf("%d  ", specialEvens[i]);  
    }  
    if (counter > 0)  
    {  
        printf("\n");  
    }  
    printf("counter=%d\n", counter);  
}  