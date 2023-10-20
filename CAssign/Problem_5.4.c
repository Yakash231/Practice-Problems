#include <stdio.h>
int main()
{ // WAP to print the series as 1 3 7 15 31 ..........n, where n is given by user.

    int n, i = 1;
    puts("Enter N");
    scanf("%d", &n);
    while (i < n)
    {
        printf("%d,", i);
        i = i * 2 + 1;
    }
    return 0;
}