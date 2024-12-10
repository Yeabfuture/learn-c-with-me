#include <stdio.h>

int perfectChecker(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main(void)
{
    int start =0; 
    int end =0;
    int found =0;

    scanf("%d %d", &start, &end);

    for(int i=start; i<end; i++)
    {
        if(perfectChecker(i))
        {
            if(found == 1)
            {
                printf("%d", i);
            }
        }
    }
    return 0;
}