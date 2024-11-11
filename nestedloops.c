#include <stdio.h>
int main(void)
{
    int num = 10;

    // for(int i=0; i<=num;i++)
    // {
    //             for(int j=0; j<=i;j++)
    //     {
    //         printf("%d ",j);           
    //     }
    //     for(int j=0; j<=i;j++)
    //     {
    //         printf(" ");           
    //     }
    //     for(int k=0; k<=i; k++)
    //     {
    //         printf("%d ",k);
    //     }
    //     printf("\n");
    // }

    for(int i=0; i<=num;i++)
    {
                for(int k=0; k<=i;k++)
        {
            printf(" ");           
        }
        for(int j=0; j<=i;j++)
        {
            printf("%d ",j);           
        }
        printf("\n");
    }

    for(int i=num; i>=0;i--)
    {
        for(int k=0; k<=i;k++)
        {
            printf(" ");           
        }
        for(int j=i; j>=0;j--)
        {
            printf("%d ",j);           
        }
        printf("\n");
    }

    // for(int i=num; i>=0;i--)
    // {
    //                     for(int k=0; k<=i;k++)
    //     {
    //         printf(" ");           
    //     }
    //     for(int j=0; j<=i;j++)
    //     {
    //         printf("%d ",j);           
    //     }
    //     printf("\n");
    // }

    // for(int i=num; i>=0;i--)
    // {
    //     for(int j=i; j>=0;j--)
    //     {
    //         printf(" ");           
    //     }
    //     for(int k=0; k<=i; k++)
    //     {
    //         printf("%d ",k);
    //     }
    //     printf("\n");
    // }

    
} 

 