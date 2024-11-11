#include <stdio.h>
#include <string.h>

int main(void)
{
    int num = 0, smallerNum = 0;
    char name[50];
    int size = 0;
    
    printf("Welcome to Lost Fortune!\n\n");
    printf("Please enter the following for your personalized adventure.\n\n");
    
    printf("Enter a number:\n");
    scanf("%d", &num);

    printf("Enter a number, smaller than the first:\n");
    scanf("%d", &smallerNum);

    getchar();

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("\n");

    size = sizeof(name);
    int left = num - smallerNum;
    int treasure = 1000;
    int cut = treasure / left;
    int remainder = treasure % left;

    printf("A brave group of %d set out on a quest -- in search of the lost treasure of the Ancient Dwarves.\n", num);
    printf("The group was led by the legendary rogue, %s.\n", name);
    printf("\n");

    printf("Along the way, a band of marauding ogres ambushed the party. All fought bravely under the command of %s, and the ogres were defeated, but at a cost.\n", name);
    printf("Of the adventurers, %d were vanquished, leaving just %d in the group.\n", smallerNum, left);
    printf("\n");

    printf("The party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune.\n");
    printf("So the adventurers split %d gold pieces. Each got %d gold pieces. %s held on to the extra %d pieces to keep things fair of course.\n", treasure, cut, name, remainder);

    return 0;

}
