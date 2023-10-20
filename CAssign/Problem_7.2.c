// Transpose Of Matrix
#include <stdio.h>
int main()
{
   int i, j, n;
     printf("Enter the order of the matrix: ");
     scanf("%d", &n);
     printf("Enter the elements: ");
     int a[n][n];
     for (i = 0; i < n; i++)
     {
         for (j = 0; j < n; j++)
         {
             scanf("%d", &a[i][j]);
     }
     }
    printf("The transpose of the matrix is: \n");
     for (i = 0; i < n; i++)
    {
           for (j = 0; j < n; j++)
         {
             printf("%d ", a[j][i]);
         }
         printf("\n");
    }
 
    return 0;
}
