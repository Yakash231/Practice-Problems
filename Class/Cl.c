#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("                                        WELCOME TO ZOO.");
    int adult=0,child=0,infant=0,i,TS=0,a,c,in;
    bool flag=true;
    while(flag==true)
    {
        printf("\n ENTER '0' IF THEIR IS FAMILY OR '1' FOR END: ");
        scanf("%d",&i);
        if(i==0)
        {
            printf("\nadult: ");
            scanf("%d",&a);
            printf("\nchild: ");
            scanf("%d",&c);
            printf("\ninfant: ");
            scanf("%d",&in);
            adult+=a;
            child+=c;
            infant+=in;
            continue;
        }
        else
        {
         printf("\n Total Adults: %d",adult);
         printf("\n Total Childs: %d",child);
         printf("\n Total Infants: %d",infant);      
        TS=(adult*10)+(child*7)+(infant*3);
        printf("\nTotal Money: %d",TS);
         flag=false;
         break;
        }
    }
    return 0;
}