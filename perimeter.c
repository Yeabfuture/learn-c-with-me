/*
Description: The main aim of the program is to accept coordinates from the user and print the perimeter of a polygon.

Rules
The program will accept inputs of x and y coordinates.
If the input of x as coordinate is blank it will quit the program.
Output must be a double.
Input must be double.


Input 
A series of x and y coordinate pairs representing points on the polygon, ending with a blank line for the x-coordinate.

Output
A single floating-point number representing the perimeter of the polygon, displayed with high precision.

Pseudo Code
1. Accept the value of x and check if its a valid input, meaning its not a null value.
2. Accept the value of y, and check if its a valid input.
3. Repeat 1st step again till it adds blank(null).
4. If its null calculate the perimeter(adding all units).
5. Print the value.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_POINTS 100  

int main(void) {
    char userInput[100];
    double xValues[MAX_POINTS], yValues[MAX_POINTS];
    double x = 0, y = 0;
    int counter = 0;
    double perimeter = 0;

    printf("Enter the first x-coordinate:\n");
    if (fgets(userInput, sizeof(userInput), stdin) != NULL) {
        x = atof(userInput);
        xValues[counter] = x; 
    }

    printf("Enter the first y-coordinate:\n");
    if (fgets(userInput, sizeof(userInput), stdin) != NULL) {
        y = atof(userInput);
        yValues[counter++] = y;  
    }

    while (1) {
        printf("Enter the next x-coordinate (blank to quit):\n");
        if (fgets(userInput, sizeof(userInput), stdin) == NULL || strcmp(userInput, "\n") == 0) {
            break; 
        }
        x = atof(userInput);
        if (counter >= MAX_POINTS) {
            printf("Maximum number of points reached.\n");
            break;
        }
        xValues[counter] = x; 

        printf("Enter the next y-coordinate:\n");
        if (fgets(userInput, sizeof(userInput), stdin) != NULL) {
            y = atof(userInput);
            yValues[counter++] = y;  
        }
    }

    if (counter < 3) {
        printf("At least 3 points are needed to form a polygon.\n");
        return 1;
    }

    for (int i = 0; i < counter; i++) {
        int next = (i + 1) % counter; 
        double dx = xValues[next] - xValues[i];
        double dy = yValues[next] - yValues[i];
        perimeter += sqrt(dx * dx + dy * dy); 
    }

    printf("The perimeter of that polygon is %.6f\n", perimeter);
    return 0;
}
