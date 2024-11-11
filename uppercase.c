//#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   string input = get_string("Enter the text: ");
   int length = strlen(input);

   for(int i=0; i<length; i++)
   {
      printf("%c", toupper(input[i]));
      // if(input[i] >='a' && input[i] <= 'z')
      // {
      //    char uppercase = input[i] - 32;
      //    printf("%c", uppercase);
      // }

      // else
      // {
      //    printf("%c", input[i]);
      // }
   }

   printf("\n");

   return 0;
}

