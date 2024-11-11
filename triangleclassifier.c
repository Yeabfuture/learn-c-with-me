/* 
Description 
The main aim of this program is to identify the type of triangle based on the number of equal sides it has. 
 
Rules 
1. If all sides of a triangle are equal its a equilateral. 
2. If two sides of a triangle are equal its a isosceles. 
3. If none of the sides are equal its a scalene. 
 
Input 
Three floating-point numbers representing the lengths of the triangle's  
sides, each on a separate line. 
5↵ 
5↵ 
5↵ 
 
Output 
That's a [type] triangle.↵ 
 
Pseudo code  
1. Accept three floating numbers and validate. 
2. If A == B,  B == C-- equilateral. 
            ,  B != C,  -- isosceles. 
 
   A != B, B == C -- isosceles. 
           B != C -- scalene. 
3. Print the out put. 
*/ 
 
#include <stdio.h> 
 
int main(void) 
{ 
   float firstInput, secondInput, thirdInput; 
 
    
   if(scanf("%f %f %f", &firstInput, &secondInput, &thirdInput) == 3) 
   { 
       // Checking the validity of the triangle 
       if (firstInput <= 0 || secondInput <= 0 || thirdInput <= 0 ||  
           firstInput + secondInput <= thirdInput ||  
           firstInput + thirdInput <= secondInput ||  
           secondInput + thirdInput <= firstInput)  
       { 
           printf("Not a valid triangle.\n"); 
       } 
       else if(firstInput == secondInput && secondInput == thirdInput) 
       { 
           printf("That's a equilateral triangle.\n"); 
       } 
       else if(firstInput == secondInput || secondInput == thirdInput || firstInput == thirdInput) 
       { 
           printf("That's a isosceles triangle.\n"); 
       } 
       else 
       { 
           printf("That's a scalene triangle.\n"); 
       } 
   } 
   return 0; 
}  