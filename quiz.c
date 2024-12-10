#include <stdio.h>

int isPerfect(int num) 
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int found = 0; 
    printf("Perfect numbers in the range %d to %d are: ", start, end);
    
    for (int i = start; i <= end; i++) 
    {
        if (isPerfect(i)) 
        {
            if (found) {
                printf(", ");
            }
            
            printf("%d", i);
            found = 1;
        }
    }

    if(found)
    {
        printf(".");
    }
    
    if (!found) {
        printf("No result.");
    }
    
    printf("\n");
    return 0;
}
