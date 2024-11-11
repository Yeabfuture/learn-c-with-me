// Recursive algorithm
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
    if (n == 1)  
    {  
        return 1.0;  
    }  
    else  
    {  
        
        return (pow(-1, n) / n) + sumCal(n - 1);  
    }  
}
