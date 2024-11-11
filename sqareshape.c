// #include <stdio.h>

// int main(void)
// {
//     int counter = 0;
//     int num=0;
    
//     if(scanf("%d", &num) ==1)
//     {
//         for(int i=1; i<=num*num; i++)
//         {
//             if(i <10)
//             {
//                 printf("  %d", i);
//                 counter++;
//             }
//             else
//             {
//                 printf(" %d", i);
//                 counter++;                 
//             }
//             if(counter==num)
//             {
//                 printf("\n");
//                 counter=0;
//             }
//         }
//     }
// }

#include <stdio.h>

int main(void)  
{  
    int num = 0;
    
    if (scanf("%d", &num) == 1)  
    {
        int limit = num * num;
        
        for (int i = 1; i <= limit; i++)  
        {
            printf(i < 10 ? "  %d" : " %d", i);
            if (i % num == 0)
                printf("\n");
        }
    }

    return 0;
}
