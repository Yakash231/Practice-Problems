// WAP to find the number of times that a given word (i.e. a short string) occurs in a sentence (i.e. a long string!)

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[20];
    int i, j, count = 0;

    printf("Enter the sentence: ");
    gets(str);
    printf("Enter the word: ");
    scanf("%s", word);

    for (i = 0; i < strlen(str); i++)
    {
        j = 0;

        while (str[i] == word[j] && word[j] != '\0')
        {
            i++;
            j++;
        }

        if (word[j] == '\0')
            count++;
    }

    printf("The word '%s' occurs %d times in the sentence.", word, count);

    return 0;
}