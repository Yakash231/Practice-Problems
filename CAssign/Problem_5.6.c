#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter The Value: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        p=0;
      for(int j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
            p=1;
            break;
        }
      }
      if(p==0)
      {
        printf("%d ",i);
      }
    }
return 0;
}