#include<stdio.h>
#include <stdlib.h>
int prime(int n)
{
    int flag=0;
for(int i=2;i<=n/2;i++)    
{    
if(n%i==0)    
{        
flag=1;    
break;    
}    
}    
if(flag==0)    
return n;     
}

int main()
{
    int *ptr,sum=0,l;
    printf("Enter The Size Of array: ");
    scanf("%d",&l);
    ptr=(int*)malloc(l*sizeof(int));
    printf("Enter The Elements Of Array: ");
    for(int i=0;i<l;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<l;i++)
    {
        if(prime(*(ptr+i))!=0)
        {
            sum+=*(ptr+i);
        }
    }
    printf("Sum: %d",sum);
    return 0;
    
}