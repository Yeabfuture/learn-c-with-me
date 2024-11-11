#include <stdio.h>
int main(void)
{
    char name[50];
    fgets(name, sizeof(name), stdin);
    printf("Hi,there,%s!↵", name);
}