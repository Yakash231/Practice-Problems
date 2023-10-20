// Reverse Number
#include<stdio.h>
int main()
{
    int num,rev=0,n;
    printf("Enter The Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        rev=rev*10+n;
        num/=10;
    }
    printf("The Revese Number Is: %d",rev);
    return 0;
}