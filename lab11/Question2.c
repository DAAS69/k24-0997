#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 50
#define START_CAPACITY 100

typedef struct
{
    char word[MAX_WORD_LEN];
    int count;
} WordInfo;

int findWordIndex(WordInfo *words, int total, char *target)
{
    for (int i = 0; i < total; i++)
    {
        if (strcmp(words[i].word, target) == 0)
        {
            return i;
        }
    }
    return -1;
}

void makeLowerCase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    WordInfo *wordList = malloc(START_CAPACITY * sizeof(WordInfo));
    int wordCount = 0;
    int maxWords = START_CAPACITY;

    char currentWord[MAX_WORD_LEN];
    while (fscanf(inputFile, "%49s", currentWord) != EOF)
    {
        makeLowerCase(currentWord);
        int existingIndex = findWordIndex(wordList, wordCount, currentWord);
        if (existingIndex != -1)
        {
            wordList[existingIndex].count++;
        }
        else
        {
            if (wordCount == maxWords)
            {
                maxWords *= 2;
                wordList = realloc(wordList, maxWords * sizeof(WordInfo));
            }
            strcpy(wordList[wordCount].word, currentWord);
            wordList[wordCount].count = 1;
            wordCount++;
        }
    }

    fclose(inputFile);

    for (int i = 0; i < wordCount; i++)
    {
        printf("%s: %d\n", wordList[i].word, wordList[i].count);
    }

    free(wordList);
}
