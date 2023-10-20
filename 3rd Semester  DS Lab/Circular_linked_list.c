//  CIRCULAR SINGLE LIST
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    
}*start=NULL,*prev=NULL;

void create()
{
    
    struct node*ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter The Data: ");
    scanf("%d",&val);
    ptr->data=val;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;
        prev=ptr;
    }
    else
    {
        ptr->next=start;
        prev->next=ptr;
        prev=ptr;
    }
    
}

void display()
{
    struct node*p=NULL;
    p=start;
    printf("PREVIOUS ADDRESS   DATA    ADDRESS\n");
    while(p->next!=start)
    {
        printf("%p         %d  %p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("%p        %d  %p",p,p->data,p->next);
    
}

void count()
{
    struct node*p=start;
    int i=0;
    while(p->next!=start)
    {
        i++;
        p=p->next;
    }
    i=i+1;
    printf("\nNo. Of Nodes: %d",i);
}

void insert()
{
    int pos;
    printf("Enter The Position To Insert Node: ");
    scanf("%d",&pos);
    
    
    
}


void search()
{
    
    
}

void del()
{
    
    
    
}


int main()
{
    //struct node*ptr=NULL;
    int h;
    printf("Enter 1 For Create Node And Enter 0 To Exit. ");
    scanf("%d",&h);
    while(h==1)
{
    create();
    printf("Enter 1 For Create Node And Enter 0 To Exit. ");
    scanf("%d",&h);
}    
    display();
    printf("Entet Your Choice. \n1. INSERT 2.DELETION  3.SEARCHING \n");
    int i;
    count();
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        {
            insert();
        }break;
        
        case 2:
        {
            del();
        }break;
        case 3:
        {
            search();
        }break;
    }
    
    return 0;
}