#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

string uppercaseChecker(string word, int wordLen);
bool alphabetChecker(string word, int wordLen);

int main(void)
{
    string word = get_string("Input your string: ");
    int wordLen = strlen(word);

    uppercaseChecker(word, wordLen);

    if (alphabetChecker(word, wordLen))
    {
        printf("Words are alphabetically ordered\n");
    }
    else
    {
        printf("Not in order\n");
    }

    return 0;
}

string uppercaseChecker(string word, int wordLen)
{
    for (int i = 0; i < wordLen; i++)
    {
        char singleLetter = word[i];
        if (singleLetter >= 'a' && singleLetter <= 'z')
        {
            word[i] = singleLetter - 32; // Convert to uppercase
        }
    }

    return word; // Return modified string
}

bool alphabetChecker(string word, int wordLen)
{
    for (int i = 0; i < wordLen - 1; i++)  // Check up to wordLen - 1 to avoid out-of-bounds
    {
        char firstLetter = word[i];
        char secondLetter = word[i + 1];

        if (firstLetter > secondLetter)
        {
            return false;
            return 0;
        }
    }

    return true;
}
