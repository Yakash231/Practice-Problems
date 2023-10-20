#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fp1;
    char filename[15];
    char filename1[15];

    char i, j;
    printf("\nEnter the filename 1 to be opened:");
    scanf("%s", filename);
    printf("\nEnter the filename 2 to be opened:");
    scanf("%s", filename1);
    // Open the file for reading//
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        return 1;
    }
    fp1 = fopen(filename1, "r");
    if (fp1 == NULL)
    {
        printf("Cannot open file \n");
        return 1;
    }
    int q = 1;
    // Read character by character from the file & display on computer screen//
    while ((i = fgetc(fp)) != EOF && (j = fgetc(fp1)) != EOF)
    {
        if (i != j)
        {
            q = 0;
            printf("file are not same");
            break;
        }
    }
    if (q)
    {
        printf("file same");
    }
    fclose(fp);
}