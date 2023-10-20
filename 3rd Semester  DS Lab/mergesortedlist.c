#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node*next;
}*start_1=NULL,*start_2=NULL,*start_3=NULL;

 struct node* create(struct node*ptr)
{  
     int val;
     struct node*temp=NULL;
     int h=1;
  while(h==1)
  {
   struct node*p=(struct node*)malloc(sizeof(struct node));
   printf("Enter The Node: ");
     scanf("%d",&val);
     p->data=val;
     p->next=NULL;
   if(ptr==NULL)
   {
     ptr=p;
     temp=p;
     temp->next=NULL;
   }
   else{
    temp->next=p;
    p->next=NULL;
    temp=p;
   }
   printf("Enter 1 To create Node: ");
   scanf("%d",&h);
  }
  return ptr;
}

void traverse(struct node*p)
{

    while(p!=NULL)
    {
       printf(" %d ",p->data);
       p=p->next;
  }
  printf("\n");
}
struct node* merge()
{
  struct node*prev=NULL;
  struct node*ptr=start_1;
  struct node*p=start_1;
  while(p!=NULL)
  {
    prev=p;
    p=p->next;
    if(p==NULL)
    {
        prev->next=start_2;
    }
  }
  start_3=ptr;
  

}

int main()
{
   printf("Enter The First List: \n");
   start_1=create(start_1);
   traverse(start_1);
   printf("Enter The Second List: \n");
   start_2=create(start_2);
   printf("Merged List: \n");
   merge();
   traverse(start_3);
    return 0;
}