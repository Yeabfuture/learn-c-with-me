#include <stdio.h> 
#include <math.h> 
 
float sumCal(int n);   
 
int main(void) 
{ 
    int num = 0; 
    float sum =0.0; 
 
    if(scanf("%d", &num) == 1) 
    { 
        sum = sumCal(num); 
        if(sum ==1.0) 
        { 
            printf("1\n");  
        } 
        else 
        { 
            printf("%f\n",sum);  
        } 
    } 
  
    return 0; 
} 
 
float sumCal(int n)   
{ 
    float sum = 0.0;  
    float temp = 0.0;  
 
    for(int i = 1; i <= n; i++) 
    { 
        if(i == 1) 
        { 
            temp = i; 
        } 
        else 
        { 
            temp = (pow(-1, i)) / i; 
        } 
        sum += temp; 
    } 
 
    return sum; 
} 