// #include <stdio.h>

// int main(void)
// {
//     int num = 0;

//     if((scanf("%d", &num) == 1) && num >0)
//     {
//         for(int i=num; i>0; i--)
//         {
//             for(int j=i; j<num; j++)
//             {
//                 printf(" ");
//             }
//             for(int k=0; k<num; k++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }

//     else
//     {
//         printf("Error!\n");
//     }


// }

#include <stdio.h>

int main(void)  
{
    int num = 0;
    
    if ((scanf("%d", &num) == 1) && num > 0)  
    {
        char row[num + 1]; 
        row[num] = '\0';  

        for (int i = 0; i < num; i++) 
            row[i] = '*';

        for (int i = num; i > 0; i--)  
        {
            for (int j = i; j < num; j++) 
                printf(" ");

            printf("%s\n", row);
        }
    }
    else
    {
        printf("Error!\n");
    }

    return 0;
}
