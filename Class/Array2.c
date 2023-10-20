#include<stdio.h>
#include<stdbool.h>
int main()
    {
        int a[10]={1,33,53,122,56};
        /*
        for(int i=0;i<5;i++)
        {
           scanf("%d",&a[i]);
        }*/
        // Element Insertion.
          int n,s;
           printf("Enter The Number To be Inserted: ");
           scanf("%d",&n);
           printf("Enter The Position In Array: ");
           scanf("%d",&s);
           int d;
           printf("Enter The Elemnt To be Deleted: ");
           scanf("%d",&d);
           a[s]=n;
           for (int i = 0; i <10; i++)
           {
            if(a[i]==d)
            {
                a[i]=0;
            }
            if(i<5||i==s)
            {
              printf("%d  ",a[i]);
            }
            printf("\n");
           bool flag=true;
           int r;
           printf("Enter 1 For Reverse Order Or Else Exit. ");
           scanf("%d",&r);
           printf("\n");
           if(r==1)
           {
            for(int i=9;i>=0;i--)
            {
                printf("%d ",a[i]);
            }
           }
    
           }
           return 0;
    }
