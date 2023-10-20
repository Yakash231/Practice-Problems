// Problem 4.2
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter The Numbers: ");
scanf("%d%d%d",&a,&b,&c);
if(a!=b&&b!=c&&a!=c)
{
    if(a>b){
        if(a>c)
        printf("%d Is The Greatest ",a);
    }
    else if(b>c)
    {
        if(c>a)
        printf("%d Is The Greatest",b);
    }
    else
    printf("%d Is The Greatest",c);
}
else
printf("The Three Numbers Are Not Distinct");
return 0;
}