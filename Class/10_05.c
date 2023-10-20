#include <stdio.h>
#include <string.h>


void reverseWords(char* str) {
    int start = 0;
    int end = 0;
    int len = strlen(str);
    char ch;

    while (end < len) {
        // Find end of word
        while (str[end] != ' ' && end < len) {
            end++;
        }

        // Reverse word
        int i = start;
        int j = end - 1;
        while (i < j) {
           ch=str[i];
           str[i]=str[j];
           str[j]=ch;
            i++;
            j--;
        }

        // Move to next word
        start = end + 1;
        end = start;
    }
}

int main() {
    char str[100];
    printf( "Enter a string: ");
    gets(str);

    reverseWords(str);

    printf( "Reversed string: %s ",str);

    return 0;
}
