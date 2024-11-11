/*

Description
The main aim of the program is to classify the name of shapes based on the number of sides.

Rules
The numbers will be 3 to 10.
If there is an input out of the given range the program should show error message.

Input
A single integer representing the number of sides of the shape.

Output
If the input is between 3 and 10 (inclusive), output the name of the shape in the format: "That's a [shape name]."
If the input is outside the supported range, output: "That number of sides is not supported by this program."

Pseudo code
1. Accept the int from the user and validate its int.
2. Create an array which contains all the defined shapes.
3. Validate if the num is in range.
4. deduct 3 from the number to get the index
5. get the shape from the array and print it.
6. If its not between 3 and 10 show error message.

*/

#include <stdio.h>

int main(void)
{
    int numOfSides = 0;
    int index = 0;
    char shapes[8][20] = {"triangle", "quadrilateral", "pentagon","hexagon","heptagon", "octagon", "nonagon", "decagon"};

    if(scanf("%d", &numOfSides) == 1)
    {
        if(numOfSides >= 3 && numOfSides <=10)
        {
            index = numOfSides - 3;
            printf("That's a %s.\n", shapes[index]);
        }
        else
        {
            printf("That number of sides is not supported by this program.\n");
        }
        
    }
    
    return 0;
}

