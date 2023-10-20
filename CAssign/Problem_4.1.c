// Problem 4.1
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter The Two Numbers: ");
    scanf("%d%d",&a,&b);
    if(a!=b)
    {
        if(a>b)
    printf("%d is Greater Than %d",a,b);
    else 
    printf("%d Is Greater Than %d",b,a);
    }
    else
    printf("Numbers Are Not Distinct");
    return 0;
}