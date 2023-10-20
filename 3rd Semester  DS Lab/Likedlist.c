
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*prev;
struct node*start=NULL;
void create()
{
    int val;
    struct node*ptr=NULL;

        ptr=(struct node*)malloc(sizeof(struct node));
         printf("Enter New Node :  ");
          scanf("%d",&val);
          prev->next=ptr;
           ptr->data=val;
           ptr->next=NULL;
           prev=ptr;
    
}

void display()
{
    struct node*p=NULL;
    p=start;
    while(p!=NULL)
    {
        printf("%d   %p",p->data,p);
        p=p->next;
        printf("\n");
    }
    printf("\n\n");
}


void ins_beg()
{
    int pos;
    struct node*ptr=NULL; 
    ptr=(struct node*)malloc(sizeof(struct node));
    
    printf("Enter the new node: ");
   scanf("%d",&pos);
   ptr->data=pos;
   ptr->next=start;
   start=ptr;
    
}
void ins_end()
{
    int pos;
    struct node*ptr=NULL; 
    ptr=(struct node*)malloc(sizeof(struct node));
     printf("Enter the new node: ");
    scanf("%d",&pos);
    ptr->data=pos;
    struct node*p=NULL; 
    p=start;
    while(p!=NULL)
    {
        if(p->next==NULL)
        {
            p->next=ptr;
            ptr->next=NULL;
        }
        p=p->next;
    }
    
}

void ins_pos()
{
    int pos,val,i=0;
    struct node*p=NULL;
    p=start;
    struct node*prev=NULL;
    struct node*ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter The Node: ");
    scanf("%d",&val);
    ptr->data=val;
    ptr->next=NULL;
    printf("Enter The Position: ");
    scanf("%d",&pos);
    if(pos==0)
    {
        ins_beg();
    }
    else{
    while(p!=NULL)
    {
        if(i==pos-1)
        {
           prev->next= ptr;
            ptr->next=p;
            break;
        }
        prev=p;
        p=p->next;
        i++;
    }
  }
}

void del()
{
    struct node*p=NULL;
    p=start;
    int val;
    struct node*t=NULL;
    struct node*prev=NULL;
    printf("Enter The Node To Be Deleted: ");
    scanf("%d",&val);
    while(p!=NULL)
    {
        if(val==p->data&&p==start)
        {
            t=p->next;
            free(p);
            start=t;
        }
        if(val==p->data&&p->next!=NULL)
        {
            t=p;
            prev->next=p->next;
            free(t);
        } if(val==p->data&&p->next==NULL)
    {
        t=p;
        prev->next=NULL;
        free(t);
    }
    prev=p;
     p=p->next;
    }
}

void search()
{
    struct node*p=NULL;
    p=start;
    int a,i=1;
    printf("Enter The Number TO Be Searched:  ");
    scanf("%d",&a);
    while(p!=NULL)
    {
        if(p->data==a)
        {
            printf("%d Found At Node %d\n",p->data,i);
            a++;
        
        }
        p=p->next;
        i++;
    }
    if(a==a)
    {
        printf("Element Not present In linked List. ");
    }
}
void reverse()
{
    struct node*curr=start;
    struct node*prev=start;
    struct node*next=NULL;
    if(curr==start)
    {
        next=curr->next;
        curr->next=NULL;
        prev=curr;
        curr=next;
    }
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    start=prev;   
}
void count()
{
    struct node*p=start;
    int i=1;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    printf("Number Of Nodes: %d",i);
}

int main() {
    struct node*p=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter For Node 1: ");
    int val;
    scanf("%d",&val);
    p->data=val;
    p->next=NULL;
    start=p;
    prev=p;
    printf("Enter 1 to create node and 0 to exit.  ");
    int h;
    scanf("%d",&h);
    while(h==1)
    {
    create();
    printf("Enter 1 to create node and 0 to exit.");
    scanf("%d",&h);
    }

     while(1){
        printf("\nMENU:\n1.Insert a node at a position.\n2.Delete a node from a specific position.\n3.Count\n4.Search A Node.\n5.Reverse\n6.Exit.");
        int choice;
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            ins_pos();
            display();
        }
        if(choice==2){
            del();
        }
        if(choice==3){
            count();
            //display();
        }
        if(choice==4){
            search();
        }
        if(choice==5)
        {
            reverse();
        }  
        if(choice==6)
        {
            exit(0);
        }
     }
    return 0;
}