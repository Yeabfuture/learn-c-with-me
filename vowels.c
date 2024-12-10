// N lines of string
// create a loop of that number 
// Ask for the user input
// Loop through each char and search for a vowel. If now a vowel, show if not skip.


#include <stdio.h>
#include <string.h>

char* vowelChecker(char *sentence) 
{
    static char result[100];  
    int j = 0;
    
    for (int i = 0; i < strlen(sentence); i++) 
    {
        if (sentence[i] == 'a' || sentence[i] == 'A' ||
            sentence[i] == 'e' || sentence[i] == 'E' ||
            sentence[i] == 'i' || sentence[i] == 'I' ||
            sentence[i] == 'o' || sentence[i] == 'O' ||
            sentence[i] == 'u' || sentence[i] == 'U') 
        {
            continue;
        }
        
        result[j++] = sentence[i];
    }
    
    result[j] = '\0';
    
    return result;
}

int main(void) 
{
    int numberOfStrings = 0;
    char sentence[100];

    scanf("%d", &numberOfStrings);
    getchar();  

    for (int i = 0; i < numberOfStrings; i++) 
    {
        fgets(sentence, sizeof(sentence), stdin);
        
        sentence[strcspn(sentence, "\n")] = '\0';

        char *result = vowelChecker(sentence);
        printf("%s\n", result);
    }

    return 0;
}
