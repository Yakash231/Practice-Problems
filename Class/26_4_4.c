// WAP to swap two consecutive characters starting from left to right of a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    printf("Enter the string : ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0, j = 1; i < len, j < len; i = i + 2, j = j + 2)
    {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nAfter Swapping string is : %s", str);
    return 0;
}