#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char name[50] = "hello world";

  for(int i=0; i<sizeof(name); i++)
  {
    int isSpaceFound = 0;

    if(isspace(name[i]))
    {
      isSpaceFound = 1;
      
    }
    if(isSpaceFound)
    {
      name[i++] = toupper(name[i++]);
      is
    }
    
  }

  printf("%s", name);

}