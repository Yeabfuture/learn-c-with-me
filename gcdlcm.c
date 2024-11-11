#include <stdio.h>

int gcf(int num1, int num2);
int lcm(int num1, int num2);

int main(void)
{
    int num1, num2, gcfnum =0, lcmnum=0;

    do
    {
       scanf("%d %d", &num1, &num2);
       if(num1 >0 && num2>0)
       {
            gcfnum = gcf(num1, num2);
            lcmnum = lcm(num1,num2);

            printf("The GCD of %d and %d is:%d\n", num1, num2, gcfnum);
            printf("The LCM of %d and %d is:%d\n", num1, num2, lcmnum);
       }
       else if(num1 == 0 && num2 ==0)
       {
        break;
       }
       else
       {
            printf("Error!\n");
       }
    } 
    while (num1 !=0 || num2 != 0);
    
    return 0;
}

int gcf(int num1, int num2)
{
    int result = (num1<num2) ? num1 : num2;

    while(result >0)
    {
        if(num1 %result==0 && num2%result ==0)
        {
            break;
        }
        result --;
    }

    return result;
}

int lcm(int num1, int num2)
{
    int max = (num1 >num2) ? num1:num2;

    while(1)
    {
        if(max % num1 ==0 && max%num2 ==0)
        {
            return max;
            break;
        }

        ++max;
    }
}
