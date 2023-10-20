#include<stdio.h>
void fibonacci(int n);
int main()
{
    int k;
    printf("Enter The Number: ");
    scanf("%d",&k);
    printf("Factorial Of %d is: ",k);
    fibonacci(k);
    return 0;
}
int sum=1;
void fibonacci(int n)
{
    if(n>=1)
    {
        sum*=n;
        fibonacci(n-1);
    }
    else{ printf("%d",sum);
    return;}
}