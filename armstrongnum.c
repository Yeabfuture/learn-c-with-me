/* 
Description 
The main aim of this program is to check if a number is Armstrong number or not. 
 
Rules 
1. The input must be a positive int less than or equal to 6. 
2. We need to limit the min and max value of the number as digits. 
3. To  be Armstrong number, the number should be equal to all digits powered by the num and added together.  
 
Input 
 the number of digits n（n<=6） 
 3↵ 
 
 OutPut 
 all armstrong numbers of n digits. Each number occupies one line, in ascending order. If there is no answer, output"No output.” 
 153↵ 
 370↵ 
 371↵ 
 407↵ 
 
 Pseudo code 
 1. Accept a number from the user and validate if its between 1 and 6. 
 2. Take that number, power each number (1-9) with the given number. 
 3. Store the value to array. 
 4. Find the min and max and  bound a range between those numbers. 
 5. Take the single digit(the last)   and access the value of the array we created using the digit as index. 
    This will give us the raised power of the digit by the number the user provided. 
6. Add the value we get to the sum and remove the digit we used from the int. 
7. Check the sum and if it is equal to the number we took from the loop, print that number. 
8. Check all numbers in the range and if it doesn't match any of them show no output.  

//1
 
*/  
#include <stdio.h>  
#include <math.h>  
  
int minFinder(int number);  
int maxFinder(int number);  
  
int main()  
{  
    int number = 0;  
    int numFound = 0;  
    int minBound = 0;  
    int maxBound = 0;  
    int value;  
  
    if((scanf("%d",&number) == 1) && number >0 && number<=6)  
    {  
        double powers[10];  
        for(int i=0; i<=10; i++)  
        {  
            powers[i] = pow(i,number); // Calculating the power of each values raised to the given power and save it to an array to save processing time as we do this process once.  
        }  
          
        minBound = minFinder(number);  
        maxBound = maxFinder(number);  
  
        for(int i = minBound; i<=maxBound; i++)  
        {  
            int sum = 0;  
            value = i;  
  
            while(value > 0)  
            {  
                int digit = value % 10; // Extracting the last digit from the value  
                sum += powers[digit];  // Getting the value from the array at the index.  
                value /=10;  
            }  
  
            if(sum == i)  
            {  
                printf("%d\n",i);  
                numFound = 1;  
            }  
        }  
    }  
  
    if(!numFound)  
    {  
        printf("No output.\n");  
    }  
      
    return 0;  
}  
  
int minFinder(int number)  
{  
    int minBound = pow(10, number-1);  
    return minBound;  
}  
  
int maxFinder(int number)  
{  
    int maxBound = pow(10,number) -1;  
    return maxBound;  
}  