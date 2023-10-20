// Problem 4.5
#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float div;
    int s;
    printf("Enter The Values: ");
    scanf("%d%d",&a,&b);
    printf("Enter The Command: ");
    scanf("%d",&s);
    switch(s)
    {
    case 1:  sum=a+b;
    printf("Addition");
    printf("Answer Is :%d",sum);
    break;
    case 2:  sub=a-b;
    printf("Substraction");
    printf("Answer Is:%d",sub);
     break;
     case 3:
      mul=a*b;
      printf("Multiplication");
     printf("Answer Is:%d",mul);
     break;
     case 4:  div=a/b;
     printf("Division");
     printf("Answer Is:%.3f",div);
     break;
    default:
    printf("Wrong Command");
    }
     return 0;
     
}