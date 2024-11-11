#include <stdio.h>

// Function to calculate the number of ways to reach the top
int ways(int n) 
{
    // Default base cases
    if (n == 0) return 1;  // nothing 
    if (n == 1) return 1; // Only one way: a single step
    if (n == 2) return 2; // Two ways: (1+1) or (2)

    // Recursive case
    return ways(n - 1) + ways(n - 2);
}

int main() {
    int n;
    if(scanf("%d", &n) ==1)
    {
        if(n==1)
        {
            printf("There is %d way of climbing the stairs!\n", ways(n));
        }
        else
        {
            printf("There are %d ways of climbing the stairs!\n", ways(n));
        }  
    }

    return 0;
}
