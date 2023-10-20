#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*start=NULL,*last=NULL;
void enqueue(int val)
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=val;
    if(start==NULL)
    {
        start=p;start->next=NULL; last=start; }
    else{
        last->next=p;
        p->next=NULL;
        last=p;
    }
}
void dequeue()
{
    struct node*p=start;
    
}
void display()
{
    struct node*p=start;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    int h;
    printf("Enter 1 To Add: ");
    scanf("%d",&h);
    while(h==1)
    {       int val;
            printf("Enter The Data: ");
            scanf("%d",&val);
             enqueue(val);
             printf("Enter 1 To Add: ");
             scanf("%d",&h);}
             printf("\n");
       display();
       printf("Enter The time To Dequeue: ");
       scanf("%d",&h);
       for(int i=0;i<h;i++)
       {
        dequeue();
        printf("\nRemoved");
       }
       display();
    return 0;
}