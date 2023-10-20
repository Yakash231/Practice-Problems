#include <stdio.h>
#include <string.h>

void swap_consecutive(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    swap_consecutive(str);
    printf("String after swapping consecutive characters: %s", str);
    return 0;
}

void swap_consecutive(char str[]) {
    int i, len;
    char temp;
    len = strlen(str);
    for (i = 0; i < len-1; i += 2) {
        temp = str[i];
        str[i] = str[i+1];
        str[i+1] = temp;
    }
}