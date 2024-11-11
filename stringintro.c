#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string input = get_string("input: ");
    int length = strlen(input);
    printf("%d\n", length);
    printf("%s\n", input);

    for(int i=0; i<length; i++)
    {
        printf("%c\n", input[i]);
    }
    return 0;
}
