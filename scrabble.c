#include <stdio.h>
#include <ctype.h>

int getScrabbleScore(char letter) {
    letter = toupper(letter); 
    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'L' || 
        letter == 'N' || letter == 'O' || letter == 'R' || letter == 'S' || 
        letter == 'T' || letter == 'U') {
        return 1;
    } else if (letter == 'D' || letter == 'G') {
        return 2;
    } else if (letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P') {
        return 3;
    } else if (letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y') {
        return 4;
    } else if (letter == 'K') {
        return 5;
    } else if (letter == 'J' || letter == 'X') {
        return 8;
    } else if (letter == 'Q' || letter == 'Z') {
        return 10;
    }
    return 0; 
}

int calculateScrabbleScore(const char* word) {
    int score = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        score += getScrabbleScore(word[i]);
    }
    return score;
}

int main() {
    char word[100];
    scanf("%s", word); 
    int score = calculateScrabbleScore(word);
    printf("%d\n", score);
    return 0;
}
