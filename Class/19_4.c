#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
void lastdig()
{

    char s[100];
    printf("Enter the String: ");
    gets(s);
    int len=0;
    while(s[len]!='\0')
    {
        len++;
    }

    printf("%d\n",len);
    printf("Output:\n");
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            printf("%c ",s[i-1]);
        }
    }
    printf("%c",s[len-1]);
    
}
void concantate()
{
    char a[100],b[100];
    int len1=0,len2=0;
    printf("Enter First String: ");
    gets(a);
    printf("Enter Second String: ");
    gets(b);
    while(a[len1]!='\0')
    {
        len1++;
    }
    while(b[len2]!='\0')
    {
        len2++;
    }
    char c[len1+len2];
    printf("%d %d\n ",len1,len2);
    for(int i=0;i<=len1;i++)
    {
        c[i]=a[i];
        if(a[i]=='\0')
        {
           for(int j=0;j<=len2;j++)
           {
            c[len1+j]=b[j];
           }
        }
    }
    for(int i=0;i<len1+len2;i++)
    { 
        printf("%c",c[i]);

    }
}
void palin()
{
    char s[100];
    printf("Enter The String: ");
   gets(s);
   int len=0,rev=0;
   bool flag=false;
   while(s[len]!='\0')
    {
        len++;
    }
    char a[len];
    for(int i=len-1;i>=0;i--)
    {
        s[i]=a[rev];
        rev++;
    }
    for(int j=0;j<len;j++)
    {
        if(a[j]==s[j])
        {
            flag=true;
        }
        else{
            flag=false;
            printf("Not Palindrome.");
            exit(0);
        }
    }
     printf("Palindrome.");
}
void count()
{
    char line[150];
  int vowels, consonant, digit, space;

  // initialize all variables to 0
  vowels = consonant = digit = space = 0;

  // get full line of string input
  printf("Enter a line of string: ");
  gets(line);

  // loop through each character of the string
  for (int i = 0; line[i] != '\0'; ++i) {

    // convert character to lowercase
    line[i] = tolower(line[i]);

    // check if the character is a vowel
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }

    // check if the character is a digit
    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }

    // check if the character is an empty space
    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);
  
}
int main()
{
     //lastdig();
    // concantate();
     //  palin();
     //count();  

}