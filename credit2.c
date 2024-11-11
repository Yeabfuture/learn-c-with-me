#include <stdio.h>

int main(void)
{
    float width, length, area;
    printf("Enter the length of the room in feet: \n");
    scanf("%f",&length);
    printf("Enter the width of the room in feet: \n");
    scanf("%f",&width);

    area = length*width;

    printf("The area of the room is %.2f square feet.\n",area);
   return 0;
}
