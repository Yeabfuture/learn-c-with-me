/* 
Description 
The main goal of this program is to accept int value from the user and print all prime numbers till we reach that number. 
 
Rule 
Int must be a positive number 
The outputs must be separated by \t 
If the numbers of primes printed is above 5 go to new line 
 
Input 
a positive integer n 
17↵ 
 
Output 
Output all prime numbers (n included if n is a prime number) in the following format（\t is used to separate numbers in one line） 
 
2         3        5        7         11 
 
13      17 
 
Pseudo code 
1. Accept an int and validate if its greater than 2. 
2. Define a variable which will hold a true or false value after checking if a number is prime or not -- The default is its prime 
3. Create a first loop to loop through each numbers till it reaches to the given number. 
4. Create another nested loop to check the i on the first loop is divisible by numbers looping through in the second loop. 
For design purposes - We don't need to check the entire array since it becomes very resource consuming process. Instead we can check the numbers 
till we reach the square root of the number since the two sides of multiplications (before and after the square root) are mirrors. 
5. Define an int which will keep track of the numbers printed in the console. 
6. We will attempt to divide i and j and check if its divisible by checking the reminder and if its divisible we don't have to check the rest. 
7. Print the value of i with \t. 
8. Check if the number of items printed are greater than 5 with reminders. 
9. If its >5 print new line and reset the counter value. 

10
 
*/  
 
// #include <stdio.h>

// int isPrime(int num) {
//     if (num < 2) return 0;
//     for (int j = 2; j * j <= num; j++) {
//         if (num % j == 0) return 0;
//     }
//     return 1;
// }

// int main(void) {
//     int num, printCount = 0;
//     int lastPrime = 0;  

//     if (scanf("%d", &num) == 1 && num >= 0) {    
//         for (int i = num; i >= 2; i--) {
//             if (isPrime(i)) {
//                 lastPrime = i;
//                 break;
//             }
//         }

        
//         for (int i = 2; i <= num; i++) {
//             if (isPrime(i)) {
//                 printf("%d", i);
//                 printCount++;
//                 if (i != lastPrime) printf("tab");
//                 if (printCount % 5 == 0) printf("\n");
//             }
//         }
//         if (printCount % 5 != 0) printf("\n");
//     } else {
//         printf("Invalid Input.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int isPrime(int num, int primes[], int primeCount) {
    if (num < 2) return 0;
    for (int i = 0; i < primeCount && primes[i] * primes[i] <= num; i++) {
        if (num % primes[i] == 0) return 0;
    }
    return 1;
}

int main(void) {
    int num, primeCount = 0;
    int primes[1000];  

    if (scanf("%d", &num) == 1 && num >= 0) {
        for (int i = 2; i <= num; i++) {
            if (isPrime(i, primes, primeCount)) {
                primes[primeCount++] = i;  
            }
        }

        for (int i = 0; i < primeCount; i++) {
            printf("%d", primes[i]);
            if ((i + 1) % 5 == 0) {
                printf("\n");  
            } else if (i != primeCount - 1) {
                printf("\t");
            }
        }
        
        if (primeCount % 5 != 0) {
            printf("\n");
        }
    } else {
        printf("Invalid Input.\n");
    }

    return 0;
}
