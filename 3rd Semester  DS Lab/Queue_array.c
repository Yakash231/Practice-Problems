#include <stdio.h>
int front=-1,rear=-1;
void enqueue(int Q[],int size,int x)
{
    if(rear==size-1)
    {
        printf("QUEUE FULL\n");
        return;
    }
    else {
        if(front<0)
        {
            Q[0]=x;
            front++;
            rear++;
        }
        else {
            Q[rear+1]=x;
            rear++;  }}
}
void display(int Q[])
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",Q[i]);
    }
}
void dequeue(int Q[])
{
    if(front==rear)
    {
        printf("QUEUE EMPTY");
    }
    else {
        printf("%d Removed From Queue.\n",Q[front]);
        Q[front]=0;
        front++;    }
}
int main() {
    int n;
    printf("\nEner The Size of array:");
    scanf("%d",&n);
    int q[n],i=1;
    while(i==1)
    {
    int val;
    printf("Enter The Data: ");
    scanf("%d",&val);
    enqueue(q,n,val);
    printf("\nAdded");
     printf("\nEnter 1 to add: ");
    scanf("%d",&i);
    }
    display(q);
    printf("Enter The Number of time to dequeue: ");
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        dequeue(q);
    }
    display(q);
    
    return 0;
}