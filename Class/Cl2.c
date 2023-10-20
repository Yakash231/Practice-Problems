/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Index: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter The Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("\n The New Array: ");
    int f;
    for(int j=0;j<n/2;j++)
    {
        f=a[n-j-1];
        a[j]=a[n-j-1];
        a[j]=f;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}*/
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4},t;
    int s=0,e=3;
    while(s<=e){
        t=s[a];
        s[a]=e[a];
        e[a]=t;
        s++;
        e--;
    }
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
   
}
