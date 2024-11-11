#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int value;
    printf("Write the number of elements:");
    scanf("%d", &value);
    int changed[value];
    int original[value];

    for(int i=0; i<value; i++)
    {
      int num;
     printf("Write the number:");
     scanf("%d", &num);
     original[i] = num;

        int doubling = original[i] * 2;
        changed[i] = doubling;
    }
    
return 0;
}
