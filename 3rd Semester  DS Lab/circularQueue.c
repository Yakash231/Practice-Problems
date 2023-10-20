#include<stdio.h>
int front=-1,rear=0,n;
void enqueue()
{
    
}
int main()
{
int a[n];
printf("Enter The Size Of Queue: ");
    scanf("%d",&n);
    enqueue(a);
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}