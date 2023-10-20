#include <stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    struct node*next;
    int data;
}*start,*t;
int size=1;

void create()
{
    struct node*ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter The Node : ");
    scanf("%d",&val);
    ptr->data=val;
    ptr->next=NULL;
    ptr->prev=t;
    t->next=ptr;
    t=ptr;
}

void display()
{
    struct node*p=NULL;
    p=start;
    while(p!=NULL)
    {
        printf("%p  %d %p\n",p->prev,p->data,p->next);
        p=p->next;
    }
}

void count()
{
    struct node*p=start;
    while(p!=NULL)
  {
    size++;
    p=p->next;
  }
  printf("Number Of Nodes: %d\n",size);

}

void insert()
{
   int pos;
   printf("Enter The Position: ");
   scanf("%d",&pos);
   struct node*ptr=(struct node*)malloc(sizeof(struct node));
   int val;
   printf("Enter The Node: ");
   scanf("%d",&val);
   ptr->data=val;
   struct node*p=start;
   struct node*temp=NULL;
   if(pos==0)
   {
    ptr->next=start;
    start->prev=ptr;
    start=ptr;
   }
   else{
     for(int i=1;i<size;i++)
     {
        if(i==pos-1)
        {
            temp=p->next;
            p->next=ptr;
            ptr->prev=p;
            ptr->next=temp;
            temp->prev=ptr;
        }
        p=p->next;
     }
   }
}

void del()
{
    struct node*p=start;
    struct node*temp,*ptr;
    int pos;
    printf("Enter The Position: ");
    scanf("%d",&pos);
    for(int i=0;i<size;i++)
    {
        if(i==pos)
        {
          temp=p;
         ptr=p->next;
         ptr->prev=p->prev;
         p->prev=ptr;
          free(temp);
          break;
        }
        p=p->next;
    }

}


int main() {
    struct  node*ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter Node 1: ");
    scanf("%d",&val);
    ptr->data=val;
    start=ptr;
    ptr->next=NULL;
    ptr->prev=start;
    t=ptr;
   int h;
   printf("Enter 1 To create Node and 0 To exit.  ");
   scanf("%d",&h);
   t=ptr;
   while(h==1)
   {
   create();
   printf("Enter 1 To create Node and 0 To exit.  ");
   scanf("%d",&h);
   }
   display();
   count();
   //insert();
   del();
   display();

    return 0;
}