#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node*next;
}*start=NULL;
int count=0;
void create()
{   
    struct node*prev;
    int h;
    do{
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        count++;
        printf("Enter Node: ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(start==NULL)
        {
            start=ptr;
            start->next=NULL;
            prev=ptr;
        }
        else{
            prev->next=ptr;
            ptr->next=NULL;
            prev=ptr;
        }
        printf("Enter Choice: ");
        scanf("%d",&h);
    }while(h==1);
}
void display()
{
    struct node*p=start;
    while(p!=NULL)
    {
        printf("%d-> ",p->data);
        p=p->next;
    }
}
void swap()
{
struct node*p=start;
int temp;
struct node*prev=NULL;
int i=1;
while(p!=NULL)
{
    if(i%2==0)
    {
      temp=prev->data;
     prev->data=p->data;
     p->data=temp;
    prev=p;
    p=p->next;
    }
    else{
        prev=p;
        p=p->next;
    }
  i++;
 }
}
void middle()
{
    struct node*p=start;
    for(int i=0;i<count;i++)
    {
        if(i==count/2)
        {
            printf("Middle Element: %d",p->data);
            break;
        }
        p=p->next;
    }
}

int main()
{
printf("Linked List: \n");
create();
display();
//printf("\n");
//middle();
printf("\n");
swap();
display();
return 0;
}