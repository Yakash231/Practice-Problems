#include<stdio.h>
int main()
{
    int n,m,rev;
    printf("Enter the number:");
    scanf("%d",&m);
    rev=0;
    while(m!=0)
    {
     n=m%10;
     rev=(rev*10)+n;
     m=m/10;
    }
    printf("The Reverse Of The Number Is:%d",rev);
    return 0;    
}
