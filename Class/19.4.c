#include <stdio.h>

int main() {
    char str[1000];
    char ch, prev, prevprev;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to replace: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch && i >= 3) {
            str[i] = prevprev;
        }
        prevprev = prev;
        prev = str[i];
    }

    printf("Result: %s\n", str);

    return 0;
}