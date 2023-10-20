#include<stdio.h>
int main()
{
    char ch;
    int a,b,sum,sub,mul;
    float div;
    printf("Enter '+' For Addition.\n");
    printf("\nEnter '-' For Substraction.\n");
    printf("\nEnter '*' For Multiplication.\n");
    printf("\nEnter '/' For Division.\n");
    printf("Enter the desired Operation:");
    scanf("%c",&ch);
    printf("\nEnter Value Of a:");
    scanf("%d",&a);
    printf("Enter Value Of b:");
    scanf("%d",&b);
    switch(ch)
    {
        case '+': sum=a+b;
        printf("Answer Is: %d",sum);
        break;
        case '-': sub=a-b;
        printf("Answer Is:%d",sub);
        break;
        case '*': mul=a*b;
        printf("Answer Is:%d",mul);
        break;
        case '/':
        div=a/b;
        printf("Answer Is:%.2f",div);
        break;
        default :
        printf("Wrong Input.");
    }
    return 0;
}
