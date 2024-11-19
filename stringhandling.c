#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[6] = {1,2,3,4,4,5};
    char string2[6];
    int size = sizeof(string1);

    for(int i=0; i<sizeof(string1); i++)
    {
        string2[i] = string1[i];
    }

    for (int i = 0; i < sizeof(string1); i++)
    {
        printf("%d ", string2[i]);
    }
    
    return 0;
}
