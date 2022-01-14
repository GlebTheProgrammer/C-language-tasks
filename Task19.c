/*
 * 19.	Дана строка S и символ C. Слова в строке разделены одним пробелом. Найти кол-во слов с символом C.
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
    char S[20];
    //Remember that s contains also \n
    printf("Enter string S: \n");
    fgets(S, 128, stdin);
    fflush(stdin);

    char c;
    printf("Enter character C: \n");
    scanf(" %c", &c);
    fflush(stdin);

    int wordWithCharCount = 0;
    int wordLen = 0;
    for (int i = 0; i < strlen(S); ++i)
    {
        int endOfWord;
        if (S[i] == ' ' || i == strlen(S) - 1)
        {
            endOfWord = i;
            char *word = malloc(wordLen);

            strncpy(word, S+(endOfWord-wordLen), wordLen);
            strcat(word, "\0");
            if (strchr(word, c) != NULL)
            {
                wordWithCharCount++;
            }

            wordLen = 0;
            free(word);
        }
        else
        {
            wordLen++;
        }
    }

    printf("number of those words is:%d", wordWithCharCount);




}