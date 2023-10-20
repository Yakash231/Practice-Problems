#include<stdio.h>
#include<math.h>
int main()
{
   /*int n;
    printf("Enter The Length: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }*/
   /* int rows,cols;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    printf("Enter the Columns: ");
    scanf("%d",&cols);*/
    int b[3][3]={{2,2,2},{2,2,2},{2,2,2}};
    int sumr=0,sumc=0,sumd=0;
    // Sum oF rows and columns
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            sumr+=b[i][j];
            sumc+=b[j][i];
            if(i==j)
            {
                sumd+=b[i][j];
            }
        }
    }
    printf(" Rows: %d\n Columns: %d\n Daigonal Elements: %d",sumr,sumc,sumd);
return 0;
}