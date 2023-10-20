// WAP to count distinct number of vowels and consonants present in a string using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels=0,consonants=0;

    printf("Enter a string : ");
    gets(str);

    char *ptr;
    ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
            vowels++;
        else
            consonants++;
        ptr++;
    }
    printf("Vowels : %d\n",vowels);
    printf("Consonants : %d",consonants);
    return 0;
}