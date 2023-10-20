// Problem 4.4
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter The Alphabet:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        char p=tolower(ch);
        printf("%c is the converted lower case.",p);
    }
    else
    printf("%cis already in lower case.",ch);
    return 0;
}