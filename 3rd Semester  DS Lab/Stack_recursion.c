#include<stdio.h>
int front=-1,rear=-1,n;
void push(int Q[])
{int d;
printf("Enter Data: ");
scanf("%d",&d);
 if(front<0)
 {
    front++;
    Q[front]=d;
    rear++;
    push(Q);
    }
    else if(rear==n-1)
     {
       printf("\nStack Full.\n");
       return;
     }
     else{
        rear++;
        Q[rear]=d;
        push(Q);
     }
 }
int main()
{
 printf("Enter Size Of Stack: ");
 scanf("%d",&n);
 int a[n];
 push(a);
 printf("Stack:  ");
for(int i=front;i<=rear;i++)
{
    printf("%d ",a[i]);
}
return 0;
}