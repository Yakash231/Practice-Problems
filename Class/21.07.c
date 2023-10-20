#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[]={2,3,7,5,6,4,8,9,10};
    int key,sum;
    printf("Enter The Numer: ");
    scanf("%d",&key);
    bool flag=true;
    int n=9;
    for(int i=0;i<n;i++)
    {
        sum=0;
     for(int j=0;j<n;j++)
     {
        sum=(a[i]*a[i])+(a[j]*a[j]);
    if(sum==key)
   { 
    printf("\n Output: %d %d",i,j);
    flag=false;
    break;
    }
  }
  if(flag==false)
  {
    break;
  }
 }
 if(flag==true)
 printf("No Output.");
 return 0;
}