#include <stdio.h>

int number_of_items;
int main(void)
{

    printf("Enter the number of subjects: " );
    scanf("%d", &number_of_items);
    int scores[number_of_items];
    int score =0;
    int sum =0;
    int length = sizeof(scores) / sizeof(scores[0]);
    float average =0;

    for(int i=0; i<length; i++)
    {
        printf("Enter the scores: ");
        scanf("%d", &score);
        scores[i] = score;
      sum += scores[i];
    }

    average = sum/(float)length;
    printf(" Your Avergae is: %f \n", average);
    return 0;
}
