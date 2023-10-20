#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct comp{
    struct data*n;
    char name[50];
    struct comp*next;
}*start=NULL,*prev=NULL;

struct data{
    int year;
    int h_p;
    struct data*n;
}*start_1=NULL,*pev=NULL;
 

 void create_data()
 {
   struct data*ptr=NULL;
   ptr=(struct data*)malloc(sizeof(struct data));
   int y,hp;
   printf("Year: ");
   scanf("%d",&y);
   printf("Package: ");
   scanf("%d",&hp);
   ptr->h_p=hp;
   ptr->year=y;
   if(start_1==NULL)
   {
    pev=ptr;
    start_1=ptr;
    ptr->n=NULL;
   }
   else{
    pev->n=ptr;
    pev=ptr;
    pev->n=NULL;

   }

 }

 void create()
 {
   struct comp*ptr=NULL;
   ptr=(struct comp*)malloc(sizeof(struct comp));
   char c_name[50];
   printf("\nEnter The Company Name: ");
   scanf("%s",&c_name);
   strcpy(ptr->name,c_name);
   if(start==NULL)
   {
    ptr->next=NULL;
    start=ptr;
    prev=ptr;

   }
   else{
    ptr->next=NULL;
    prev->next=ptr;
    prev=ptr;
   }
   int h;
   printf("\nEnter 1 For Adding Data And 0 To Exit.\n");
   scanf("%d",&h);
   while(h==1)
   {
       create_data();
       printf("\nEnter 1 For Adding Data And 0 To Exit.\n");
       scanf("%d",&h);

   }
    prev->n=start_1;
    start_1=NULL;
    pev=NULL;
}

void display()
{
    struct comp*ptr=NULL;
    struct data*p=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%s\n",ptr->name);
        p=ptr->n;
        while(p!=NULL)
        {
            printf("Year :%d    Highest Package: %d\n",p->year,p->h_p);
            p=p->n;
        }
        printf("\n");
        ptr=ptr->next;
    }
}

int main()
{
    int i;
    printf("\nEnter 1 To Add Company And 0 To Exit.");
    scanf("%d",&i);
    while(i==1)
    {
        create();
        printf("\nEnter 1 To Add Company And 0 To Exit.");
        scanf("%d",&i);
    }
    
    display();
return 0;
}
