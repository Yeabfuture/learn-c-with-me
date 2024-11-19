#include <stdio.h>

int main(void)
{
    char string1[50];
    char string2[50];
    int i=0,j=0;

    fgets(string1, sizeof(string1), stdin);
    printf("Enter the second one");
    fgets(string2, sizeof(string2), stdin);

    while(string1 == '\n')
    {
        i++;
    }

    while(string2 == '\n')
    {
        string1[i] = string2[j];
        i++;
        j++;
    }

    for (int i = 0; i < sizeof(string1); i++)
    {
        printf("%c", string1);
    }
    

    return 0;
}