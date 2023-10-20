#include<stdio.h>
int main()
{
    int n;
    printf("Enter Max Degree:  ");
    scanf("%d",&n);
    int m=n+1;
    int arr1[m],arr2[m];
    printf("Enter The First Polynomial:  ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter The Scecond Polynomial:  ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int sum[m];
    for(int i=0;i<m;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Resultant Polynomial: ");
    for(int j=m-1;j>=0;j--)
    {
        printf("%dx^%d+ ",sum[j],j);
    }
    return 0;
}
