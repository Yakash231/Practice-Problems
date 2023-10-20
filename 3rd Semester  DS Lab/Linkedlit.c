#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    struct comp{
    char c[100];
     char s[10];
     float high_package;
    char offer[50];
    }a;
  struct node*next;
}*start=NULL,*prev=NULL;

void create()
{
 struct node*ptr=NULL;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=NULL;
printf("Enter Company Name: ");
scanf("%s",&ptr->a.c);
printf("Enter Sector: ");
scanf("%s",&ptr->a.s);
printf("Enter Desigation: ");
scanf("%s",&ptr->a.offer);
printf("Highest Package: ");
scanf("%f",&ptr->a.high_package);
prev->next=ptr;
prev=ptr;

}

void display()
{
    struct node*p=NULL;
    p=start;
    while(p!=NULL)
    {
        printf("%s\n",p->a.c);
        printf("%s\n",p->a.s);
        printf("%s\n",p->a.offer);
        printf("%f\n",p->a.high_package);
        p=p->next;
        printf("\n\n");
    }
    //printf("\n\n\n");
}
void count()
{
    struct node*p=NULL;
    p=start;
    int i=1;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    int s=i*sizeof(struct node);
    printf("Total Memory Used: %d bytes",s);
}


int main()
{
    struct node*ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    start=ptr;
    strcpy(ptr->a.c,"WIPRO");
    ptr->a.high_package=15.6;
     strcpy(ptr->a.offer,"Software Devloper.");
      strcpy(ptr->a.s,"IT");
    ptr->next=NULL;
    printf("Press 1 To Enter Data And 0 To Exit. ");
    int h;
    scanf("%d",&h);
    prev=ptr;
    while(h==1)
    {
        create();
        printf("Press 1 To Enter Data And 0 To Exit. ");
        scanf("%d",&h);

    }
    printf("\n");
    display();
    count();

    return 0;
}