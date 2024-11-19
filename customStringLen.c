#include <stdio.h>

int findlen(char *string)
{
    int length =0;
    while(string[length] != '\0') // loop through the array till you find the termination char
    {
        length++;
    }

    return length;
}

int main(void)
{
    char mystr[30];
    printf("Enter your text");
    fgets(mystr, sizeof(mystr),stdin);
    int mylen = findlen(mystr);
    printf(" Your text size is %d", mylen);
    return 0;
}