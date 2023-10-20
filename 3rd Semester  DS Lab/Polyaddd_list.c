#include<stdio.h>
#include<stdlib.h>

struct node{
    int coef;
    int expo;
    struct node*next;
}*start_1=NULL,*start_2=NULL,*start_3=NULL,*prev=NULL;
struct node* new_node(int data,int exp,struct node*s)
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if(s==NULL)
    {
      new->coef=data;new->expo=exp; 
      prev=new; 
      return new;
    }
    else{
        prev->next=new;
        new->coef=data;
        new->expo=exp;
        prev=new;
        return s;
    }}
void add()
{
    struct node*p1=start_1;
    struct node*p2=start_2;
    struct node*ptr=NULL;int add,ex;
    while(p1!=NULL && p2!=NULL)
    {
       if(p1->expo > p2->expo)
       {
        add=p1->coef;ex=p1->expo; p1=p1->next;
        start_3=new_node(add,ex,start_3);
       }
       else if(p1->expo < p2->expo){
          add=p2->coef; ex=p2->expo;
          p2=p2->next;
          start_3=new_node(add,ex,start_3);
       }
       else{
        add=p1->coef+p2->coef; ex=p1->expo;
        p1=p1->next; p2=p2->next;
        start_3=new_node(add,ex,start_3);
       }
    }
    if(p1==NULL)
    {
        ptr=p2;
    }
    else{ ptr=p1;}
    while(ptr!=NULL){
        start_3=newnode(ptr->coef,ptr->expo,start_3);
        ptr=ptr->next;
    }
}
void traverse(struct node* p)
{   while(p!=NULL)
    {
        printf("%d x^%d  ",p->coef,p->expo);
        p=p->next;
    }}
int main(){
   printf("Enter First Polynomial: \n");
   int d,e;
   int h;
   do{
    printf("Enter Value: ");
    scanf("%d",&d);
    printf("Enter Coefficient: ");
    scanf("%d",&e);
    new_node(d,e,start_1);
    printf("Enter 1 To Add: ");
    scanf("%d",&h);
   }while (h==1);
   printf("Enter Second Polynomial: \n");
   do{
    printf("Enter Value: ");
    scanf("%d",&d);
    printf("Enter Coefficient: ");
    scanf("%d",&e);
    new_node(d,e,start_2);
    printf("Enter 1 To Add: ");
    scanf("%d",&h);
   }while (h==1);
   add();
   printf("Polynomial 1: \n");
   traverse(start_1);
   printf("Polynomial 2: \n");
   traverse(start_2);
   printf("Resultant Polynomial : \n");
   traverse(start_3);
    return 0;
}