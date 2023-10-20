//write a c program to find the sum of diagonal elements of a matrix
#include<stdio.h>
main()
{
    int a[10][10],i,j,m,n,sum=0;
    printf("Enter the size of an array rows and col:");
    scanf("%d%d",&m,&n);
    printf("enter the array elements\n");
    for(i=0; i<m; i++)
    {
        for (j=0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        { 
            if(i==j)
            {
                sum=sum+a[i][j];
            printf("\t%d",sum);
           }
        } 
    }
}
