#include<stdio.h>
void insert(int n,int arr[])
{
    int x,pos;
    printf("Enter The Number To Inserted: ");
    scanf("%d",&x);
    printf("Enter The Position To Inserted: ");
    scanf("%d",&pos);
     n++;
    for (int i = n - 1; i >= pos; i--)
       arr[i] = arr[i - 1];
   
	    arr[pos - 1] = x;
   
   for(int i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
   }
}
 void delete(int n,int arr[])
 {
    int pos;
     printf("Enter the position from which the number has to be deleted: ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("\nOn Deletion, new array we get is: ");
    for(int i=0;i<n;i++) 
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
 }
 void search(int n,int arr[])
 {
    int s;
    printf("Enter The Number: ");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("Number Found At index :%d ",i);
            break;
        }
    }
 }

 void traverse(int n,int arr[])
 {
       for(int i=0;i<n;i++)
       {
        printf("%d  ",arr[i]);
       }
 }

 int main()
{
    int p;
    printf("Enter The Size Of Array: ");
    scanf("%d",&p);
    printf("Enter The Elements: ");
    int arr[p];
    for(int i=0;i<p;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n            ***MENU***");
    printf("\n            1. INSERT");
    printf("\n            2. DELETE");
    printf("\n            3. LINEAR SEARCH");
    printf("\n            4.TRAVERSE");
    printf("\n            5. EXIT");
    printf("\n Enter Option: ");
    int opt;
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        {
            insert(p,arr);
        }
        break;
        case 2:
        {
            delete(p,arr);
        }
        break;
        case 3:
        {
            search(p,arr);
        }
        break;
        case 4:
        {
            traverse(p,arr);
        }
        break;
        case 5:
        {
            printf("wrong input");
        }
    }
    return(0);

}
