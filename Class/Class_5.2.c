// Factorial
#include<stdio.h>
int main()
{
    int n;
    int fact;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   { 
    fact=fact*i;
   }
   printf("%d",fact);
    return 0;
}