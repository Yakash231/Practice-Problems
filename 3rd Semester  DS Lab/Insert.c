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

void ins_pos()
{
struct node*p=NULL;
int size=0;
struct node*temp=NULL;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
printf("Ente The Node: ");
scanf("%d",&ptr->data);
ptr->next=NULL;
int pos;
printf("Enter The Pos To Enter: ");
scanf("%d",&pos);
p=start;
while(temp->next!=start)
{
    temp=temp->next;
    size++;
}
size=size+1;
if(pos-1==0)
{
    temp->next=ptr;
    ptr->next=start;
    start=ptr;
}
else if(pos-1==size)
{
    temp->next=ptr;
    ptr->next=start;
}
else
{  
}


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
    //ins_beg();
    //display();
    ins_end();
    printf("\n");
    display();
    return 0;
}