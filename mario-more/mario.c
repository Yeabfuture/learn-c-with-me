#include <stdio.h>
#include <stdbool.h>

void blockmaker(int numblocks);

int main(void)
{
    int numblocks;
    bool valid_input = false;

    while (!valid_input)
    {
        printf("Tell me the length of your block (1-8)? ");

        // Using scanf to capture integer input
        if (scanf("%d", &numblocks) == 1)
        {
            if (numblocks >= 1 && numblocks <= 8)
            {
                valid_input = true;  // Valid input; exit loop
            }
            else
            {
                printf("Number of blocks should be between 1 and 8.\n");
            }
        }
        else
        {
            // If scanf fails (non-numeric input), we need to flush the input buffer
            printf("Input should be a number.\n");

        }
    }

    blockmaker(numblocks);
    return 0;
}

void blockmaker(int numblocks)
{
    for(int i = 1; i <= numblocks; i++)
    {
        // Print leading spaces
        for(int j = 0; j < numblocks - i; j++)
        {
            printf(" ");
        }

        // Print left hashes
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Print the gap between the two halves
        printf("  ");

        // Print right hashes
        for(int m = 0; m < i; m++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
