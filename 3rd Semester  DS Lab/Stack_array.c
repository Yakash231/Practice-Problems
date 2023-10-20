#include<stdio.h>
int front=-1,rear=-1,n;
 void peek(int Q[n])
 {
    printf("%d \n",Q[rear]);
 }
void push(int Q[n])
{
    int d;
    printf("Enter Value: ");
    scanf("%d",&d);
    if(front<0)
    {
        front++;
        Q[front]=d;
        rear++;}
        else if(rear==n-1)
        {
            printf("Stack Overflow.\n");return;
        }
        else{ rear++;
            Q[rear]=d;
           }
}
void size(int Q[n])
{int s=0;
    for(int i=front;i<=rear;i++)
    {s++;
    }
    printf("\nSize Of Stack: %d",s);
}
void pop(int Q[n])
{
    if(rear==front-1)
    {
       printf("Empty Stack.\n");
    }
    else{
        int k=Q[rear];
        printf("%d Popped Out Of Stack.\n",k);
        rear--;
    }
}
void display(int Q[n]){
 for(int i=front;i<=rear;i++)
 { printf("%d ",Q[i]);
 }
}
int main()
{
    int k;
    printf("Enter The Size Of Stack: ");
    scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    push(a);
   }
  printf("\n");
   pop(a);
   peek(a);
   display(a);
   size(a);
return 0;
}