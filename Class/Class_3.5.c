#include<stdio.h>
int main(){
    int min,hrs;
    int m;
    printf("Enter The Time:");
    scanf("%d",&m);
    hrs=m/3600;
    min=(m%3600)/60;
    printf("\n %d Is %d Hours and %d Minutes",m,hrs,min);
    return 0;
}