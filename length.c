#include <stdio.h>
#include <cs50.h>

// how does the length of string function might work

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int name_length = string_length(name);
    printf("%d\n", name_length);
    return 0;
}

int string_length(string s)
{
    int n =0;
    while(s[n] !='\0')
    {
        n++;
    }
    return n;
}
