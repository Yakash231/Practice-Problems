#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Index: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int m;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            printf("\n Duplicate Number: %d Index: %d",a[j],j);
            break;
        }
    }
}
    return 0;
    
}