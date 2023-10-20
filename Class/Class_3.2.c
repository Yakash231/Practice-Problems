#include<stdio.h>
int main()
{
    int m,km,m1;
    printf("Enter The Value:");
    scanf("%d",&m);
    km=m/1000;
    m1=m%1000;
    printf("Output Is:%d km and %d metres",km,m1);
    return 0; 
    
}