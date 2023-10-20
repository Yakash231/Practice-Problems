#include<stdio.h>
int main()
{
 int n;
 printf("Enter The number Of Rows:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
   if(i%2!=0)
   {for(int j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
   }
   else{
    for(int j=i;j>=1;j--)
    {
        printf("%d ",j);
    }
    printf("\n");

   }
  }
  return 0;
}