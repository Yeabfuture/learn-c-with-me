/*
Tasks 
1. Define two arrays
2. Accept the size of the first array
3. Accept the elements of the array
4. Accept the size of the second array
5. Accept the elements of the second array
6. Define the third array with a size of a+b
7. Check if the element exists in the array by checking in the loop and add it if it doesn't exist
8. Sort the array
*/

#include <stdio.h>

int main(void)
{
    int firstSize =0;
    int secondSize =0;
    int num =0;
    int counter =0;
    int totalSize;

    printf("Add the  size of the first array: ");
    scanf("%d", &firstSize);
    printf("Add the  size of the second array: ");
    scanf("%d", &secondSize);

    totalSize = firstSize+secondSize;
    int mergedArray[totalSize];

    int firstArray[firstSize];
    int secondArray[secondSize];

    printf("Add the elements of the first: ");
    for(int i=0; i<firstSize; i++)
    {
        scanf("%d", &mergedArray[i]);
    }

    printf("Add the elements of the second: ");
    for(int i=0; i<secondSize; i++)
    {
        scanf("%d", &secondArray[i]);
    }

    for(int i=0; i<firstSize; i++)
    {
        int isUnique =1;

        for(int j=0; j<secondSize; j++)
        {
            if(mergedArray[i] != secondArray[j])
            {
                isUnique =0;
            }

        if(isUnique)
        {
            printf("%d", secondArray[j]);
        }
        }
    }


    return 0;
}